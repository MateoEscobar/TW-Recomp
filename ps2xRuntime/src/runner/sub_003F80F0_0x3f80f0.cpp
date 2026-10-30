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

// Function: sub_003F80F0
// Address: 0x3f80f0 - 0x3f8f38
void sub_003F80F0_0x3f80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F80F0_0x3f80f0");
#endif

    switch (ctx->pc) {
        case 0x3f81a8u: goto label_3f81a8;
        case 0x3f8234u: goto label_3f8234;
        case 0x3f824cu: goto label_3f824c;
        case 0x3f8260u: goto label_3f8260;
        case 0x3f8280u: goto label_3f8280;
        case 0x3f829cu: goto label_3f829c;
        case 0x3f82b0u: goto label_3f82b0;
        case 0x3f82c4u: goto label_3f82c4;
        case 0x3f82f0u: goto label_3f82f0;
        case 0x3f8314u: goto label_3f8314;
        case 0x3f8338u: goto label_3f8338;
        case 0x3f835cu: goto label_3f835c;
        case 0x3f837cu: goto label_3f837c;
        case 0x3f8398u: goto label_3f8398;
        case 0x3f83acu: goto label_3f83ac;
        case 0x3f83c0u: goto label_3f83c0;
        case 0x3f83f0u: goto label_3f83f0;
        case 0x3f8404u: goto label_3f8404;
        case 0x3f8420u: goto label_3f8420;
        case 0x3f8434u: goto label_3f8434;
        case 0x3f845cu: goto label_3f845c;
        case 0x3f847cu: goto label_3f847c;
        case 0x3f8498u: goto label_3f8498;
        case 0x3f84acu: goto label_3f84ac;
        case 0x3f84d0u: goto label_3f84d0;
        case 0x3f84ecu: goto label_3f84ec;
        case 0x3f8500u: goto label_3f8500;
        case 0x3f8524u: goto label_3f8524;
        case 0x3f8540u: goto label_3f8540;
        case 0x3f8554u: goto label_3f8554;
        case 0x3f8578u: goto label_3f8578;
        case 0x3f8594u: goto label_3f8594;
        case 0x3f85a8u: goto label_3f85a8;
        case 0x3f85ccu: goto label_3f85cc;
        case 0x3f85f4u: goto label_3f85f4;
        case 0x3f8614u: goto label_3f8614;
        case 0x3f8630u: goto label_3f8630;
        case 0x3f8644u: goto label_3f8644;
        case 0x3f8658u: goto label_3f8658;
        case 0x3f8684u: goto label_3f8684;
        case 0x3f86a4u: goto label_3f86a4;
        case 0x3f86c0u: goto label_3f86c0;
        case 0x3f86d4u: goto label_3f86d4;
        case 0x3f86e8u: goto label_3f86e8;
        case 0x3f8714u: goto label_3f8714;
        case 0x3f8734u: goto label_3f8734;
        case 0x3f8750u: goto label_3f8750;
        case 0x3f8764u: goto label_3f8764;
        case 0x3f8778u: goto label_3f8778;
        case 0x3f87a4u: goto label_3f87a4;
        case 0x3f87c4u: goto label_3f87c4;
        case 0x3f87e0u: goto label_3f87e0;
        case 0x3f87f4u: goto label_3f87f4;
        case 0x3f8808u: goto label_3f8808;
        case 0x3f8834u: goto label_3f8834;
        case 0x3f8858u: goto label_3f8858;
        case 0x3f8878u: goto label_3f8878;
        case 0x3f8894u: goto label_3f8894;
        case 0x3f88a8u: goto label_3f88a8;
        case 0x3f88bcu: goto label_3f88bc;
        case 0x3f88c8u: goto label_3f88c8;
        case 0x3f88e0u: goto label_3f88e0;
        case 0x3f8904u: goto label_3f8904;
        case 0x3f892cu: goto label_3f892c;
        case 0x3f8948u: goto label_3f8948;
        case 0x3f895cu: goto label_3f895c;
        case 0x3f8980u: goto label_3f8980;
        case 0x3f89a0u: goto label_3f89a0;
        case 0x3f89bcu: goto label_3f89bc;
        case 0x3f89d0u: goto label_3f89d0;
        case 0x3f89e4u: goto label_3f89e4;
        case 0x3f8a10u: goto label_3f8a10;
        case 0x3f8a34u: goto label_3f8a34;
        case 0x3f8a50u: goto label_3f8a50;
        case 0x3f8a64u: goto label_3f8a64;
        case 0x3f8a88u: goto label_3f8a88;
        case 0x3f8aa4u: goto label_3f8aa4;
        case 0x3f8ab8u: goto label_3f8ab8;
        case 0x3f8ad0u: goto label_3f8ad0;
        case 0x3f8af0u: goto label_3f8af0;
        case 0x3f8b0cu: goto label_3f8b0c;
        case 0x3f8b20u: goto label_3f8b20;
        case 0x3f8b34u: goto label_3f8b34;
        case 0x3f8b60u: goto label_3f8b60;
        case 0x3f8b80u: goto label_3f8b80;
        case 0x3f8b9cu: goto label_3f8b9c;
        case 0x3f8bb0u: goto label_3f8bb0;
        case 0x3f8bc4u: goto label_3f8bc4;
        case 0x3f8bf0u: goto label_3f8bf0;
        case 0x3f8c10u: goto label_3f8c10;
        case 0x3f8c2cu: goto label_3f8c2c;
        case 0x3f8c40u: goto label_3f8c40;
        case 0x3f8c54u: goto label_3f8c54;
        case 0x3f8c80u: goto label_3f8c80;
        case 0x3f8ca4u: goto label_3f8ca4;
        case 0x3f8cc8u: goto label_3f8cc8;
        case 0x3f8ce8u: goto label_3f8ce8;
        case 0x3f8d04u: goto label_3f8d04;
        case 0x3f8d18u: goto label_3f8d18;
        case 0x3f8d2cu: goto label_3f8d2c;
        case 0x3f8d58u: goto label_3f8d58;
        case 0x3f8d7cu: goto label_3f8d7c;
        case 0x3f8da0u: goto label_3f8da0;
        case 0x3f8dc0u: goto label_3f8dc0;
        case 0x3f8ddcu: goto label_3f8ddc;
        case 0x3f8df0u: goto label_3f8df0;
        case 0x3f8e04u: goto label_3f8e04;
        case 0x3f8e24u: goto label_3f8e24;
        case 0x3f8e48u: goto label_3f8e48;
        case 0x3f8e68u: goto label_3f8e68;
        case 0x3f8e84u: goto label_3f8e84;
        case 0x3f8e98u: goto label_3f8e98;
        case 0x3f8eacu: goto label_3f8eac;
        case 0x3f8ec4u: goto label_3f8ec4;
        case 0x3f8ee0u: goto label_3f8ee0;
        case 0x3f8ef4u: goto label_3f8ef4;
        default: break;
    }

    ctx->pc = 0x3f80f0u;

    // 0x3f80f0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3f80f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3f80f4: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x3f80f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x3f80f8: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x3f80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x3f80fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f80fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8100: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x3f8100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x3f8104: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3f8104u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8108: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x3f8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x3f810c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x3f810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x3f8110: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x3f8110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x3f8114: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x3f8114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x3f8118: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3f8118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3f811c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3f8120: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f8120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3f8124: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3f8124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3f8128: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3f8128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x3f812c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3f8130: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3f8130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x3f8134: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x3f8134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3f8138: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x3f8138u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3f813c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3f813cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x3f8140: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3f8140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x3f8144: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3f8144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f8148: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f8148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3f814c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f814cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3f8150: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f8150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x3f8154: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f8154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3f8158: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f8158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3f815c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f815cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f8160: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f8160u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f8164: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f8164u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f8168: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f8168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f816c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f816cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f8170: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f8170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f8174: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f8174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f8178: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f8178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f817c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f817cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f8180: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f8180u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3f8184: 0x7a860010  lq          $a2, 0x10($s4)
    ctx->pc = 0x3f8184u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3f8188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f818c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3f8190: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f8190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f8194: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f8194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3f8198: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f8198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3f819c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3f81a0: 0xc0e8e26  jal         func_3A3898
    ctx->pc = 0x3F81A0u;
    SET_GPR_U32(ctx, 31, 0x3F81A8u);
    ctx->pc = 0x3F81A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F81A0u;
    // 0x3f81a4: 0x7fa60020  sq          $a2, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F81A0u, 0x3F81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F81A8u;
label_3f81a8:
    // 0x3f81a8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3f81a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x3f81ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f81acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f81b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3f81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3f81b4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3f81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x3f81b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f81b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3f81bc: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3f81bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x3f81c0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3f81c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3f81c4: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x3f81c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3f81c8: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3f81c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f81cc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3f81ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f81d0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3f81d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3f81d4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3f81d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3f81d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f81d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3f81dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f81dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3f81e0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f81e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f81e4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f81e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f81e8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f81e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f81ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f81ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f81f0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f81f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f81f4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f81f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3f81f8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f81f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f81fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f81fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f8200: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f8200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3f8204: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f8204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f8208: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f8208u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f820c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f820cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f8210: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f8210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f8214: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f8214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f8218: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f8218u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3f821c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3f8220: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8224: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f8224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3f8228: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3f8228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3f822c: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x3F822Cu;
    SET_GPR_U32(ctx, 31, 0x3F8234u);
    ctx->pc = 0x3F8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F822Cu;
    // 0x3f8230: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F822Cu, 0x3F8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8234u;
label_3f8234:
    // 0x3f8234: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3f8234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f8238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f8238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f823c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8240: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f8240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3f8244: 0xc0e8dee  jal         func_3A37B8
    ctx->pc = 0x3F8244u;
    SET_GPR_U32(ctx, 31, 0x3F824Cu);
    ctx->pc = 0x3F8248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8244u;
    // 0x3f8248: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3F8244u, 0x3F824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F824Cu;
label_3f824c:
    // 0x3f824c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f824cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8250: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x3f8250u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x3f8254: 0x24a56938  addiu       $a1, $a1, 0x6938
    ctx->pc = 0x3f8254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26936));
    // 0x3f8258: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8258u;
    SET_GPR_U32(ctx, 31, 0x3F8260u);
    ctx->pc = 0x3F825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8258u;
    // 0x3f825c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8258u, 0x3F8260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8260u;
label_3f8260:
    // 0x3f8260: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F8260u;
    {
        const bool branch_taken_0x3f8260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8260u;
        // 0x3f8264: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8260) {
            ctx->pc = 0x3F82E0u;
            goto label_3f82e0;
        }
    }
    ctx->pc = 0x3F8268u;
    // 0x3f8268: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f826c: 0x26106950  addiu       $s0, $s0, 0x6950
    ctx->pc = 0x3f826cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26960));
    // 0x3f8270: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8278: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8278u;
    SET_GPR_U32(ctx, 31, 0x3F8280u);
    ctx->pc = 0x3F827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8278u;
    // 0x3f827c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8278u, 0x3F8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8280u;
label_3f8280:
    // 0x3f8280: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8280u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8284: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8288: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f828c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8290: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8294: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8294u;
    SET_GPR_U32(ctx, 31, 0x3F829Cu);
    ctx->pc = 0x3F8298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8294u;
    // 0x3f8298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8294u, 0x3F829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F829Cu;
label_3f829c:
    // 0x3f829c: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f82a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f82a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f82a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f82a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f82a8: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F82A8u;
    SET_GPR_U32(ctx, 31, 0x3F82B0u);
    ctx->pc = 0x3F82ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F82A8u;
    // 0x3f82ac: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F82A8u, 0x3F82B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F82B0u;
label_3f82b0:
    // 0x3f82b0: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f82b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f82b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f82b8: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f82bc: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F82BCu;
    SET_GPR_U32(ctx, 31, 0x3F82C4u);
    ctx->pc = 0x3F82C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F82BCu;
    // 0x3f82c0: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F82BCu, 0x3F82C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F82C4u;
label_3f82c4:
    // 0x3f82c4: 0x3c0443e4  lui         $a0, 0x43E4
    ctx->pc = 0x3f82c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17380 << 16));
    // 0x3f82c8: 0x3c032d88  lui         $v1, 0x2D88
    ctx->pc = 0x3f82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11656 << 16));
    // 0x3f82cc: 0x3484b743  ori         $a0, $a0, 0xB743
    ctx->pc = 0x3f82ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46915);
    // 0x3f82d0: 0x3463622b  ori         $v1, $v1, 0x622B
    ctx->pc = 0x3f82d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25131);
    // 0x3f82d4: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f82d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f82d8: 0x1000030c  b           . + 4 + (0x30C << 2)
    ctx->pc = 0x3F82D8u;
    {
        const bool branch_taken_0x3f82d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F82D8u;
        // 0x3f82dc: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f82d8) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F82E0u;
label_3f82e0:
    // 0x3f82e0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f82e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f82e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f82e8: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F82E8u;
    SET_GPR_U32(ctx, 31, 0x3F82F0u);
    ctx->pc = 0x3F82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F82E8u;
    // 0x3f82ec: 0x24a56960  addiu       $a1, $a1, 0x6960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F82E8u, 0x3F82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F82F0u;
label_3f82f0:
    // 0x3f82f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F82F0u;
    {
        const bool branch_taken_0x3f82f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F82F0u;
        // 0x3f82f4: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f82f0) {
            ctx->pc = 0x3F8304u;
            goto label_3f8304;
        }
    }
    ctx->pc = 0x3F82F8u;
    // 0x3f82f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f82f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f82fc: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x3F82FCu;
    {
        const bool branch_taken_0x3f82fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F82FCu;
        // 0x3f8300: 0x26106978  addiu       $s0, $s0, 0x6978 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f82fc) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F8304u;
label_3f8304:
    // 0x3f8304: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8308: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f830c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F830Cu;
    SET_GPR_U32(ctx, 31, 0x3F8314u);
    ctx->pc = 0x3F8310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F830Cu;
    // 0x3f8310: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F830Cu, 0x3F8314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8314u;
label_3f8314:
    // 0x3f8314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8314u;
    {
        const bool branch_taken_0x3f8314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8314u;
        // 0x3f8318: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8314) {
            ctx->pc = 0x3F8328u;
            goto label_3f8328;
        }
    }
    ctx->pc = 0x3F831Cu;
    // 0x3f831c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8320: 0x100002cd  b           . + 4 + (0x2CD << 2)
    ctx->pc = 0x3F8320u;
    {
        const bool branch_taken_0x3f8320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8320u;
        // 0x3f8324: 0x261069a0  addiu       $s0, $s0, 0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8320) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F8328u;
label_3f8328:
    // 0x3f8328: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f832c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8330: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8330u;
    SET_GPR_U32(ctx, 31, 0x3F8338u);
    ctx->pc = 0x3F8334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8330u;
    // 0x3f8334: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8330u, 0x3F8338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8338u;
label_3f8338:
    // 0x3f8338: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8338u;
    {
        const bool branch_taken_0x3f8338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8338u;
        // 0x3f833c: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8338) {
            ctx->pc = 0x3F834Cu;
            goto label_3f834c;
        }
    }
    ctx->pc = 0x3F8340u;
    // 0x3f8340: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8344: 0x100002c4  b           . + 4 + (0x2C4 << 2)
    ctx->pc = 0x3F8344u;
    {
        const bool branch_taken_0x3f8344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8344u;
        // 0x3f8348: 0x261069c8  addiu       $s0, $s0, 0x69C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8344) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F834Cu;
label_3f834c:
    // 0x3f834c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f834cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8354: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8354u;
    SET_GPR_U32(ctx, 31, 0x3F835Cu);
    ctx->pc = 0x3F8358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8354u;
    // 0x3f8358: 0x24a569d8  addiu       $a1, $a1, 0x69D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8354u, 0x3F835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F835Cu;
label_3f835c:
    // 0x3f835c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F835Cu;
    {
        const bool branch_taken_0x3f835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F835Cu;
        // 0x3f8360: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f835c) {
            ctx->pc = 0x3F83DCu;
            goto label_3f83dc;
        }
    }
    ctx->pc = 0x3F8364u;
    // 0x3f8364: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8368: 0x261069f0  addiu       $s0, $s0, 0x69F0
    ctx->pc = 0x3f8368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27120));
    // 0x3f836c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f836cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8374: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8374u;
    SET_GPR_U32(ctx, 31, 0x3F837Cu);
    ctx->pc = 0x3F8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8374u;
    // 0x3f8378: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8374u, 0x3F837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F837Cu;
label_3f837c:
    // 0x3f837c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f837cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8380: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8384: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8388: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f838c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f838cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8390: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8390u;
    SET_GPR_U32(ctx, 31, 0x3F8398u);
    ctx->pc = 0x3F8394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8390u;
    // 0x3f8394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8390u, 0x3F8398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8398u;
label_3f8398:
    // 0x3f8398: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f839c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f839cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f83a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f83a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f83a4: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F83A4u;
    SET_GPR_U32(ctx, 31, 0x3F83ACu);
    ctx->pc = 0x3F83A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F83A4u;
    // 0x3f83a8: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F83A4u, 0x3F83ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F83ACu;
label_3f83ac:
    // 0x3f83ac: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f83acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f83b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f83b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f83b4: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f83b8: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F83B8u;
    SET_GPR_U32(ctx, 31, 0x3F83C0u);
    ctx->pc = 0x3F83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F83B8u;
    // 0x3f83bc: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F83B8u, 0x3F83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F83C0u;
label_3f83c0:
    // 0x3f83c0: 0x3c0443e4  lui         $a0, 0x43E4
    ctx->pc = 0x3f83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17380 << 16));
    // 0x3f83c4: 0x3c032d88  lui         $v1, 0x2D88
    ctx->pc = 0x3f83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11656 << 16));
    // 0x3f83c8: 0x3484b743  ori         $a0, $a0, 0xB743
    ctx->pc = 0x3f83c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46915);
    // 0x3f83cc: 0x3463622b  ori         $v1, $v1, 0x622B
    ctx->pc = 0x3f83ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25131);
    // 0x3f83d0: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f83d4: 0x100002cd  b           . + 4 + (0x2CD << 2)
    ctx->pc = 0x3F83D4u;
    {
        const bool branch_taken_0x3f83d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F83D4u;
        // 0x3f83d8: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f83d4) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F83DCu;
label_3f83dc:
    // 0x3f83dc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f83dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f83e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f83e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f83e4: 0x24a56a00  addiu       $a1, $a1, 0x6A00
    ctx->pc = 0x3f83e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27136));
    // 0x3f83e8: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F83E8u;
    SET_GPR_U32(ctx, 31, 0x3F83F0u);
    ctx->pc = 0x3F83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F83E8u;
    // 0x3f83ec: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F83E8u, 0x3F83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F83F0u;
label_3f83f0:
    // 0x3f83f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F83F0u;
    {
        const bool branch_taken_0x3f83f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F83F0u;
        // 0x3f83f4: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f83f0) {
            ctx->pc = 0x3F840Cu;
            goto label_3f840c;
        }
    }
    ctx->pc = 0x3F83F8u;
    // 0x3f83f8: 0x26056a18  addiu       $a1, $s0, 0x6A18
    ctx->pc = 0x3f83f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 27160));
    // 0x3f83fc: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F83FCu;
    SET_GPR_U32(ctx, 31, 0x3F8404u);
    ctx->pc = 0x3F8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F83FCu;
    // 0x3f8400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F83FCu, 0x3F8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8404u;
label_3f8404:
    // 0x3f8404: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F8404u;
    {
        const bool branch_taken_0x3f8404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8404u;
        // 0x3f8408: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8404) {
            ctx->pc = 0x3F846Cu;
            goto label_3f846c;
        }
    }
    ctx->pc = 0x3F840Cu;
label_3f840c:
    // 0x3f840c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8410: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8414: 0x24846a30  addiu       $a0, $a0, 0x6A30
    ctx->pc = 0x3f8414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27184));
    // 0x3f8418: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8418u;
    SET_GPR_U32(ctx, 31, 0x3F8420u);
    ctx->pc = 0x3F841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8418u;
    // 0x3f841c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8418u, 0x3F8420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8420u;
label_3f8420:
    // 0x3f8420: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f8420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f8424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f8424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8428: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f8428u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f842c: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F842Cu;
    SET_GPR_U32(ctx, 31, 0x3F8434u);
    ctx->pc = 0x3F8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F842Cu;
    // 0x3f8430: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F842Cu, 0x3F8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8434u;
label_3f8434:
    // 0x3f8434: 0x3c03ca9b  lui         $v1, 0xCA9B
    ctx->pc = 0x3f8434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51867 << 16));
    // 0x3f8438: 0x3c065392  lui         $a2, 0x5392
    ctx->pc = 0x3f8438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21394 << 16));
    // 0x3f843c: 0x3463dea4  ori         $v1, $v1, 0xDEA4
    ctx->pc = 0x3f843cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56996);
    // 0x3f8440: 0x34c68f1e  ori         $a2, $a2, 0x8F1E
    ctx->pc = 0x3f8440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36638);
    // 0x3f8444: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8444u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8448: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f844c: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x3f844cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x3f8450: 0x26056a18  addiu       $a1, $s0, 0x6A18
    ctx->pc = 0x3f8450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 27160));
    // 0x3f8454: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8454u;
    SET_GPR_U32(ctx, 31, 0x3F845Cu);
    ctx->pc = 0x3F8458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8454u;
    // 0x3f8458: 0xaea60010  sw          $a2, 0x10($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8454u, 0x3F845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F845Cu;
label_3f845c:
    // 0x3f845c: 0x104002ac  beqz        $v0, . + 4 + (0x2AC << 2)
    ctx->pc = 0x3F845Cu;
    {
        const bool branch_taken_0x3f845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F845Cu;
        // 0x3f8460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f845c) {
            ctx->pc = 0x3F8F10u;
            goto label_3f8f10;
        }
    }
    ctx->pc = 0x3F8464u;
    // 0x3f8464: 0x100002aa  b           . + 4 + (0x2AA << 2)
    ctx->pc = 0x3F8464u;
    {
        const bool branch_taken_0x3f8464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8464u;
        // 0x3f8468: 0xaea20020  sw          $v0, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8464) {
            ctx->pc = 0x3F8F10u;
            goto label_3f8f10;
        }
    }
    ctx->pc = 0x3F846Cu;
label_3f846c:
    // 0x3f846c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f846cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8470: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8474: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8474u;
    SET_GPR_U32(ctx, 31, 0x3F847Cu);
    ctx->pc = 0x3F8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8474u;
    // 0x3f8478: 0x24a56a48  addiu       $a1, $a1, 0x6A48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8474u, 0x3F847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F847Cu;
label_3f847c:
    // 0x3f847c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F847Cu;
    {
        const bool branch_taken_0x3f847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F847Cu;
        // 0x3f8480: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f847c) {
            ctx->pc = 0x3F84C0u;
            goto label_3f84c0;
        }
    }
    ctx->pc = 0x3F8484u;
    // 0x3f8484: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8488: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f848c: 0x24846a60  addiu       $a0, $a0, 0x6A60
    ctx->pc = 0x3f848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27232));
    // 0x3f8490: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8490u;
    SET_GPR_U32(ctx, 31, 0x3F8498u);
    ctx->pc = 0x3F8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8490u;
    // 0x3f8494: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8490u, 0x3F8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8498u;
label_3f8498:
    // 0x3f8498: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f8498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f849c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f849cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f84a0: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f84a4: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F84A4u;
    SET_GPR_U32(ctx, 31, 0x3F84ACu);
    ctx->pc = 0x3F84A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F84A4u;
    // 0x3f84a8: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F84A4u, 0x3F84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F84ACu;
label_3f84ac:
    // 0x3f84ac: 0x3c04ca9b  lui         $a0, 0xCA9B
    ctx->pc = 0x3f84acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51867 << 16));
    // 0x3f84b0: 0x3c035392  lui         $v1, 0x5392
    ctx->pc = 0x3f84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21394 << 16));
    // 0x3f84b4: 0x3484dea4  ori         $a0, $a0, 0xDEA4
    ctx->pc = 0x3f84b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56996);
    // 0x3f84b8: 0x10000292  b           . + 4 + (0x292 << 2)
    ctx->pc = 0x3F84B8u;
    {
        const bool branch_taken_0x3f84b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F84B8u;
        // 0x3f84bc: 0x34638f1e  ori         $v1, $v1, 0x8F1E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36638);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f84b8) {
            ctx->pc = 0x3F8F04u;
            goto label_3f8f04;
        }
    }
    ctx->pc = 0x3F84C0u;
label_3f84c0:
    // 0x3f84c0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f84c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f84c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f84c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f84c8: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F84C8u;
    SET_GPR_U32(ctx, 31, 0x3F84D0u);
    ctx->pc = 0x3F84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F84C8u;
    // 0x3f84cc: 0x24a56a78  addiu       $a1, $a1, 0x6A78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F84C8u, 0x3F84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F84D0u;
label_3f84d0:
    // 0x3f84d0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F84D0u;
    {
        const bool branch_taken_0x3f84d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F84D0u;
        // 0x3f84d4: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f84d0) {
            ctx->pc = 0x3F8514u;
            goto label_3f8514;
        }
    }
    ctx->pc = 0x3F84D8u;
    // 0x3f84d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f84dc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f84dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f84e0: 0x24846a90  addiu       $a0, $a0, 0x6A90
    ctx->pc = 0x3f84e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27280));
    // 0x3f84e4: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F84E4u;
    SET_GPR_U32(ctx, 31, 0x3F84ECu);
    ctx->pc = 0x3F84E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F84E4u;
    // 0x3f84e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F84E4u, 0x3F84ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F84ECu;
label_3f84ec:
    // 0x3f84ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f84f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f84f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f84f4: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f84f8: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F84F8u;
    SET_GPR_U32(ctx, 31, 0x3F8500u);
    ctx->pc = 0x3F84FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F84F8u;
    // 0x3f84fc: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F84F8u, 0x3F8500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8500u;
label_3f8500:
    // 0x3f8500: 0x3c04ca9b  lui         $a0, 0xCA9B
    ctx->pc = 0x3f8500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51867 << 16));
    // 0x3f8504: 0x3c035392  lui         $v1, 0x5392
    ctx->pc = 0x3f8504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21394 << 16));
    // 0x3f8508: 0x3484dea4  ori         $a0, $a0, 0xDEA4
    ctx->pc = 0x3f8508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56996);
    // 0x3f850c: 0x1000027d  b           . + 4 + (0x27D << 2)
    ctx->pc = 0x3F850Cu;
    {
        const bool branch_taken_0x3f850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F850Cu;
        // 0x3f8510: 0x34638f1e  ori         $v1, $v1, 0x8F1E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36638);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f850c) {
            ctx->pc = 0x3F8F04u;
            goto label_3f8f04;
        }
    }
    ctx->pc = 0x3F8514u;
label_3f8514:
    // 0x3f8514: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f851c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F851Cu;
    SET_GPR_U32(ctx, 31, 0x3F8524u);
    ctx->pc = 0x3F8520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F851Cu;
    // 0x3f8520: 0x24a56aa8  addiu       $a1, $a1, 0x6AA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F851Cu, 0x3F8524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8524u;
label_3f8524:
    // 0x3f8524: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F8524u;
    {
        const bool branch_taken_0x3f8524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8524u;
        // 0x3f8528: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8524) {
            ctx->pc = 0x3F8568u;
            goto label_3f8568;
        }
    }
    ctx->pc = 0x3F852Cu;
    // 0x3f852c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8530: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8534: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x3f8534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x3f8538: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8538u;
    SET_GPR_U32(ctx, 31, 0x3F8540u);
    ctx->pc = 0x3F853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8538u;
    // 0x3f853c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8538u, 0x3F8540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8540u;
label_3f8540:
    // 0x3f8540: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f8540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f8544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f8544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8548: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f8548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f854c: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F854Cu;
    SET_GPR_U32(ctx, 31, 0x3F8554u);
    ctx->pc = 0x3F8550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F854Cu;
    // 0x3f8550: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F854Cu, 0x3F8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8554u;
label_3f8554:
    // 0x3f8554: 0x3c04ca9b  lui         $a0, 0xCA9B
    ctx->pc = 0x3f8554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51867 << 16));
    // 0x3f8558: 0x3c035392  lui         $v1, 0x5392
    ctx->pc = 0x3f8558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21394 << 16));
    // 0x3f855c: 0x3484dea4  ori         $a0, $a0, 0xDEA4
    ctx->pc = 0x3f855cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56996);
    // 0x3f8560: 0x10000268  b           . + 4 + (0x268 << 2)
    ctx->pc = 0x3F8560u;
    {
        const bool branch_taken_0x3f8560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8560u;
        // 0x3f8564: 0x34638f1e  ori         $v1, $v1, 0x8F1E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36638);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8560) {
            ctx->pc = 0x3F8F04u;
            goto label_3f8f04;
        }
    }
    ctx->pc = 0x3F8568u;
label_3f8568:
    // 0x3f8568: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f856c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8570: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8570u;
    SET_GPR_U32(ctx, 31, 0x3F8578u);
    ctx->pc = 0x3F8574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8570u;
    // 0x3f8574: 0x24a56ad8  addiu       $a1, $a1, 0x6AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8570u, 0x3F8578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8578u;
label_3f8578:
    // 0x3f8578: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F8578u;
    {
        const bool branch_taken_0x3f8578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8578u;
        // 0x3f857c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8578) {
            ctx->pc = 0x3F85BCu;
            goto label_3f85bc;
        }
    }
    ctx->pc = 0x3F8580u;
    // 0x3f8580: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8584: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8588: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x3f8588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x3f858c: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F858Cu;
    SET_GPR_U32(ctx, 31, 0x3F8594u);
    ctx->pc = 0x3F8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F858Cu;
    // 0x3f8590: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F858Cu, 0x3F8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8594u;
label_3f8594:
    // 0x3f8594: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f8594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f8598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f8598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f859c: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f859cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f85a0: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F85A0u;
    SET_GPR_U32(ctx, 31, 0x3F85A8u);
    ctx->pc = 0x3F85A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F85A0u;
    // 0x3f85a4: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F85A0u, 0x3F85A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F85A8u;
label_3f85a8:
    // 0x3f85a8: 0x3c04ca9b  lui         $a0, 0xCA9B
    ctx->pc = 0x3f85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51867 << 16));
    // 0x3f85ac: 0x3c035392  lui         $v1, 0x5392
    ctx->pc = 0x3f85acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21394 << 16));
    // 0x3f85b0: 0x3484dea4  ori         $a0, $a0, 0xDEA4
    ctx->pc = 0x3f85b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56996);
    // 0x3f85b4: 0x10000253  b           . + 4 + (0x253 << 2)
    ctx->pc = 0x3F85B4u;
    {
        const bool branch_taken_0x3f85b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F85B4u;
        // 0x3f85b8: 0x34638f1e  ori         $v1, $v1, 0x8F1E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36638);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f85b4) {
            ctx->pc = 0x3F8F04u;
            goto label_3f8f04;
        }
    }
    ctx->pc = 0x3F85BCu;
label_3f85bc:
    // 0x3f85bc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f85c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f85c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f85c4: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F85C4u;
    SET_GPR_U32(ctx, 31, 0x3F85CCu);
    ctx->pc = 0x3F85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F85C4u;
    // 0x3f85c8: 0x24a56b08  addiu       $a1, $a1, 0x6B08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F85C4u, 0x3F85CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F85CCu;
label_3f85cc:
    // 0x3f85cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F85CCu;
    {
        const bool branch_taken_0x3f85cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F85CCu;
        // 0x3f85d0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f85cc) {
            ctx->pc = 0x3F85E4u;
            goto label_3f85e4;
        }
    }
    ctx->pc = 0x3F85D4u;
    // 0x3f85d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f85d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f85d8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f85d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f85dc: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x3F85DCu;
    {
        const bool branch_taken_0x3f85dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F85DCu;
        // 0x3f85e0: 0x24846b18  addiu       $a0, $a0, 0x6B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f85dc) {
            ctx->pc = 0x3F8A9Cu;
            goto label_3f8a9c;
        }
    }
    ctx->pc = 0x3F85E4u;
label_3f85e4:
    // 0x3f85e4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f85e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f85e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f85e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f85ec: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F85ECu;
    SET_GPR_U32(ctx, 31, 0x3F85F4u);
    ctx->pc = 0x3F85F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F85ECu;
    // 0x3f85f0: 0x24a56b28  addiu       $a1, $a1, 0x6B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F85ECu, 0x3F85F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F85F4u;
label_3f85f4:
    // 0x3f85f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F85F4u;
    {
        const bool branch_taken_0x3f85f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F85F4u;
        // 0x3f85f8: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f85f4) {
            ctx->pc = 0x3F8674u;
            goto label_3f8674;
        }
    }
    ctx->pc = 0x3F85FCu;
    // 0x3f85fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f85fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8600: 0x26106b40  addiu       $s0, $s0, 0x6B40
    ctx->pc = 0x3f8600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27456));
    // 0x3f8604: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f860c: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F860Cu;
    SET_GPR_U32(ctx, 31, 0x3F8614u);
    ctx->pc = 0x3F8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F860Cu;
    // 0x3f8610: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F860Cu, 0x3F8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8614u;
label_3f8614:
    // 0x3f8614: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8614u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8618: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f861c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f861cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8620: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8624: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8628: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8628u;
    SET_GPR_U32(ctx, 31, 0x3F8630u);
    ctx->pc = 0x3F862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8628u;
    // 0x3f862c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8628u, 0x3F8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8630u;
label_3f8630:
    // 0x3f8630: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8634: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f8638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f863c: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F863Cu;
    SET_GPR_U32(ctx, 31, 0x3F8644u);
    ctx->pc = 0x3F8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F863Cu;
    // 0x3f8640: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F863Cu, 0x3F8644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8644u;
label_3f8644:
    // 0x3f8644: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8648: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f864c: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8650: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8650u;
    SET_GPR_U32(ctx, 31, 0x3F8658u);
    ctx->pc = 0x3F8654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8650u;
    // 0x3f8654: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8650u, 0x3F8658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8658u;
label_3f8658:
    // 0x3f8658: 0x3c0443e4  lui         $a0, 0x43E4
    ctx->pc = 0x3f8658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17380 << 16));
    // 0x3f865c: 0x3c032d88  lui         $v1, 0x2D88
    ctx->pc = 0x3f865cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11656 << 16));
    // 0x3f8660: 0x3484b743  ori         $a0, $a0, 0xB743
    ctx->pc = 0x3f8660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46915);
    // 0x3f8664: 0x3463622b  ori         $v1, $v1, 0x622B
    ctx->pc = 0x3f8664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25131);
    // 0x3f8668: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f8668u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f866c: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x3F866Cu;
    {
        const bool branch_taken_0x3f866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F866Cu;
        // 0x3f8670: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f866c) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8674u;
label_3f8674:
    // 0x3f8674: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f867c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F867Cu;
    SET_GPR_U32(ctx, 31, 0x3F8684u);
    ctx->pc = 0x3F8680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F867Cu;
    // 0x3f8680: 0x24a56b50  addiu       $a1, $a1, 0x6B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F867Cu, 0x3F8684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8684u;
label_3f8684:
    // 0x3f8684: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F8684u;
    {
        const bool branch_taken_0x3f8684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8684u;
        // 0x3f8688: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8684) {
            ctx->pc = 0x3F8704u;
            goto label_3f8704;
        }
    }
    ctx->pc = 0x3F868Cu;
    // 0x3f868c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8690: 0x26106b68  addiu       $s0, $s0, 0x6B68
    ctx->pc = 0x3f8690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27496));
    // 0x3f8694: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f869c: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F869Cu;
    SET_GPR_U32(ctx, 31, 0x3F86A4u);
    ctx->pc = 0x3F86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F869Cu;
    // 0x3f86a0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F869Cu, 0x3F86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F86A4u;
label_3f86a4:
    // 0x3f86a4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f86a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f86a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f86ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f86acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f86b0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f86b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f86b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f86b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f86b8: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F86B8u;
    SET_GPR_U32(ctx, 31, 0x3F86C0u);
    ctx->pc = 0x3F86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F86B8u;
    // 0x3f86bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F86B8u, 0x3F86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F86C0u;
label_3f86c0:
    // 0x3f86c0: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f86c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f86c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f86c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f86c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f86cc: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F86CCu;
    SET_GPR_U32(ctx, 31, 0x3F86D4u);
    ctx->pc = 0x3F86D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F86CCu;
    // 0x3f86d0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F86CCu, 0x3F86D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F86D4u;
label_3f86d4:
    // 0x3f86d4: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f86d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f86d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f86dc: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f86e0: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F86E0u;
    SET_GPR_U32(ctx, 31, 0x3F86E8u);
    ctx->pc = 0x3F86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F86E0u;
    // 0x3f86e4: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F86E0u, 0x3F86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F86E8u;
label_3f86e8:
    // 0x3f86e8: 0x3c0443e4  lui         $a0, 0x43E4
    ctx->pc = 0x3f86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17380 << 16));
    // 0x3f86ec: 0x3c032d88  lui         $v1, 0x2D88
    ctx->pc = 0x3f86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11656 << 16));
    // 0x3f86f0: 0x3484b743  ori         $a0, $a0, 0xB743
    ctx->pc = 0x3f86f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46915);
    // 0x3f86f4: 0x3463622b  ori         $v1, $v1, 0x622B
    ctx->pc = 0x3f86f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25131);
    // 0x3f86f8: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f86fc: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x3F86FCu;
    {
        const bool branch_taken_0x3f86fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F86FCu;
        // 0x3f8700: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f86fc) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8704u;
label_3f8704:
    // 0x3f8704: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8708: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f870c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F870Cu;
    SET_GPR_U32(ctx, 31, 0x3F8714u);
    ctx->pc = 0x3F8710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F870Cu;
    // 0x3f8710: 0x24a56b80  addiu       $a1, $a1, 0x6B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F870Cu, 0x3F8714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8714u;
label_3f8714:
    // 0x3f8714: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F8714u;
    {
        const bool branch_taken_0x3f8714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8714u;
        // 0x3f8718: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8714) {
            ctx->pc = 0x3F8794u;
            goto label_3f8794;
        }
    }
    ctx->pc = 0x3F871Cu;
    // 0x3f871c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f871cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8720: 0x26106b98  addiu       $s0, $s0, 0x6B98
    ctx->pc = 0x3f8720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27544));
    // 0x3f8724: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f872c: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F872Cu;
    SET_GPR_U32(ctx, 31, 0x3F8734u);
    ctx->pc = 0x3F8730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F872Cu;
    // 0x3f8730: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F872Cu, 0x3F8734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8734u;
label_3f8734:
    // 0x3f8734: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8734u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8738: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f873c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f873cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8740: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8744: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8748: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8748u;
    SET_GPR_U32(ctx, 31, 0x3F8750u);
    ctx->pc = 0x3F874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8748u;
    // 0x3f874c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8748u, 0x3F8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8750u;
label_3f8750:
    // 0x3f8750: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8754: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f8758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f875c: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F875Cu;
    SET_GPR_U32(ctx, 31, 0x3F8764u);
    ctx->pc = 0x3F8760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F875Cu;
    // 0x3f8760: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F875Cu, 0x3F8764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8764u;
label_3f8764:
    // 0x3f8764: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8764u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8768: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f876c: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8770: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8770u;
    SET_GPR_U32(ctx, 31, 0x3F8778u);
    ctx->pc = 0x3F8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8770u;
    // 0x3f8774: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8770u, 0x3F8778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8778u;
label_3f8778:
    // 0x3f8778: 0x3c04c098  lui         $a0, 0xC098
    ctx->pc = 0x3f8778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49304 << 16));
    // 0x3f877c: 0x3c0362b0  lui         $v1, 0x62B0
    ctx->pc = 0x3f877cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25264 << 16));
    // 0x3f8780: 0x348423be  ori         $a0, $a0, 0x23BE
    ctx->pc = 0x3f8780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9150);
    // 0x3f8784: 0x346326b4  ori         $v1, $v1, 0x26B4
    ctx->pc = 0x3f8784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9908);
    // 0x3f8788: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f8788u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f878c: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x3F878Cu;
    {
        const bool branch_taken_0x3f878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F878Cu;
        // 0x3f8790: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f878c) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8794u;
label_3f8794:
    // 0x3f8794: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8798: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f879c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F879Cu;
    SET_GPR_U32(ctx, 31, 0x3F87A4u);
    ctx->pc = 0x3F87A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F879Cu;
    // 0x3f87a0: 0x24a56ba8  addiu       $a1, $a1, 0x6BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F879Cu, 0x3F87A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F87A4u;
label_3f87a4:
    // 0x3f87a4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F87A4u;
    {
        const bool branch_taken_0x3f87a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F87A4u;
        // 0x3f87a8: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f87a4) {
            ctx->pc = 0x3F8824u;
            goto label_3f8824;
        }
    }
    ctx->pc = 0x3F87ACu;
    // 0x3f87ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f87acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f87b0: 0x26106bc0  addiu       $s0, $s0, 0x6BC0
    ctx->pc = 0x3f87b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27584));
    // 0x3f87b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f87b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f87b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87bc: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F87BCu;
    SET_GPR_U32(ctx, 31, 0x3F87C4u);
    ctx->pc = 0x3F87C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F87BCu;
    // 0x3f87c0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F87BCu, 0x3F87C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F87C4u;
label_3f87c4:
    // 0x3f87c4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f87c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f87c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f87c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f87cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f87ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f87d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f87d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f87d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87d8: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F87D8u;
    SET_GPR_U32(ctx, 31, 0x3F87E0u);
    ctx->pc = 0x3F87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F87D8u;
    // 0x3f87dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F87D8u, 0x3F87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F87E0u;
label_3f87e0:
    // 0x3f87e0: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f87e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f87e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f87e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87ec: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F87ECu;
    SET_GPR_U32(ctx, 31, 0x3F87F4u);
    ctx->pc = 0x3F87F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F87ECu;
    // 0x3f87f0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F87ECu, 0x3F87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F87F4u;
label_3f87f4:
    // 0x3f87f4: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f87f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f87f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87fc: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8800: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8800u;
    SET_GPR_U32(ctx, 31, 0x3F8808u);
    ctx->pc = 0x3F8804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8800u;
    // 0x3f8804: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8800u, 0x3F8808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8808u;
label_3f8808:
    // 0x3f8808: 0x3c04a75a  lui         $a0, 0xA75A
    ctx->pc = 0x3f8808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42842 << 16));
    // 0x3f880c: 0x3c034954  lui         $v1, 0x4954
    ctx->pc = 0x3f880cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18772 << 16));
    // 0x3f8810: 0x3484c8f5  ori         $a0, $a0, 0xC8F5
    ctx->pc = 0x3f8810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51445);
    // 0x3f8814: 0x3463a9d9  ori         $v1, $v1, 0xA9D9
    ctx->pc = 0x3f8814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43481);
    // 0x3f8818: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f8818u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f881c: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x3F881Cu;
    {
        const bool branch_taken_0x3f881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F881Cu;
        // 0x3f8820: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f881c) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8824u;
label_3f8824:
    // 0x3f8824: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f882c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F882Cu;
    SET_GPR_U32(ctx, 31, 0x3F8834u);
    ctx->pc = 0x3F8830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F882Cu;
    // 0x3f8830: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F882Cu, 0x3F8834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8834u;
label_3f8834:
    // 0x3f8834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8834u;
    {
        const bool branch_taken_0x3f8834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8834u;
        // 0x3f8838: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8834) {
            ctx->pc = 0x3F8848u;
            goto label_3f8848;
        }
    }
    ctx->pc = 0x3F883Cu;
    // 0x3f883c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8840: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3F8840u;
    {
        const bool branch_taken_0x3f8840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8840u;
        // 0x3f8844: 0x26106be8  addiu       $s0, $s0, 0x6BE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8840) {
            ctx->pc = 0x3F8868u;
            goto label_3f8868;
        }
    }
    ctx->pc = 0x3F8848u;
label_3f8848:
    // 0x3f8848: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f884c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8850: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8850u;
    SET_GPR_U32(ctx, 31, 0x3F8858u);
    ctx->pc = 0x3F8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8850u;
    // 0x3f8854: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8850u, 0x3F8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8858u;
label_3f8858:
    // 0x3f8858: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F8858u;
    {
        const bool branch_taken_0x3f8858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8858u;
        // 0x3f885c: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8858) {
            ctx->pc = 0x3F88D0u;
            goto label_3f88d0;
        }
    }
    ctx->pc = 0x3F8860u;
    // 0x3f8860: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8864: 0x26106c08  addiu       $s0, $s0, 0x6C08
    ctx->pc = 0x3f8864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27656));
label_3f8868:
    // 0x3f8868: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f886c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8870: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8870u;
    SET_GPR_U32(ctx, 31, 0x3F8878u);
    ctx->pc = 0x3F8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8870u;
    // 0x3f8874: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8870u, 0x3F8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8878u;
label_3f8878:
    // 0x3f8878: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8878u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f887c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8880: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8884: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8888: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f888c: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F888Cu;
    SET_GPR_U32(ctx, 31, 0x3F8894u);
    ctx->pc = 0x3F8890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F888Cu;
    // 0x3f8890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F888Cu, 0x3F8894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8894u;
label_3f8894:
    // 0x3f8894: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8898: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f889c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f889cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f88a0: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F88A0u;
    SET_GPR_U32(ctx, 31, 0x3F88A8u);
    ctx->pc = 0x3F88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F88A0u;
    // 0x3f88a4: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F88A0u, 0x3F88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F88A8u;
label_3f88a8:
    // 0x3f88a8: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f88ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f88acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f88b0: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f88b4: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F88B4u;
    SET_GPR_U32(ctx, 31, 0x3F88BCu);
    ctx->pc = 0x3F88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F88B4u;
    // 0x3f88b8: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F88B4u, 0x3F88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F88BCu;
label_3f88bc:
    // 0x3f88bc: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x3f88bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x3f88c0: 0xc0e92cc  jal         func_3A4B30
    ctx->pc = 0x3F88C0u;
    SET_GPR_U32(ctx, 31, 0x3F88C8u);
    ctx->pc = 0x3F88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F88C0u;
    // 0x3f88c4: 0x8e8400e0  lw          $a0, 0xE0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B30u, 0x3F88C0u, 0x3F88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F88C8u;
label_3f88c8:
    // 0x3f88c8: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x3F88C8u;
    {
        const bool branch_taken_0x3f88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F88C8u;
        // 0x3f88cc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f88c8) {
            ctx->pc = 0x3F8F14u;
            goto label_3f8f14;
        }
    }
    ctx->pc = 0x3F88D0u;
label_3f88d0:
    // 0x3f88d0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f88d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f88d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f88d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f88d8: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F88D8u;
    SET_GPR_U32(ctx, 31, 0x3F88E0u);
    ctx->pc = 0x3F88DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F88D8u;
    // 0x3f88dc: 0x24a56c18  addiu       $a1, $a1, 0x6C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F88D8u, 0x3F88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F88E0u;
label_3f88e0:
    // 0x3f88e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F88E0u;
    {
        const bool branch_taken_0x3f88e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F88E0u;
        // 0x3f88e4: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f88e0) {
            ctx->pc = 0x3F88F4u;
            goto label_3f88f4;
        }
    }
    ctx->pc = 0x3F88E8u;
    // 0x3f88e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f88e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f88ec: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x3F88ECu;
    {
        const bool branch_taken_0x3f88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F88ECu;
        // 0x3f88f0: 0x26106c28  addiu       $s0, $s0, 0x6C28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f88ec) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F88F4u;
label_3f88f4:
    // 0x3f88f4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f88f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f88f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f88f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f88fc: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F88FCu;
    SET_GPR_U32(ctx, 31, 0x3F8904u);
    ctx->pc = 0x3F8900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F88FCu;
    // 0x3f8900: 0x24a56c38  addiu       $a1, $a1, 0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F88FCu, 0x3F8904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8904u;
label_3f8904:
    // 0x3f8904: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F8904u;
    {
        const bool branch_taken_0x3f8904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8904u;
        // 0x3f8908: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8904) {
            ctx->pc = 0x3F891Cu;
            goto label_3f891c;
        }
    }
    ctx->pc = 0x3F890Cu;
    // 0x3f890c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8910: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8914: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3F8914u;
    {
        const bool branch_taken_0x3f8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8914u;
        // 0x3f8918: 0x24846c28  addiu       $a0, $a0, 0x6C28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8914) {
            ctx->pc = 0x3F8A9Cu;
            goto label_3f8a9c;
        }
    }
    ctx->pc = 0x3F891Cu;
label_3f891c:
    // 0x3f891c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f891cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8924: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8924u;
    SET_GPR_U32(ctx, 31, 0x3F892Cu);
    ctx->pc = 0x3F8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8924u;
    // 0x3f8928: 0x24a56c50  addiu       $a1, $a1, 0x6C50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8924u, 0x3F892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F892Cu;
label_3f892c:
    // 0x3f892c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F892Cu;
    {
        const bool branch_taken_0x3f892c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F892Cu;
        // 0x3f8930: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f892c) {
            ctx->pc = 0x3F8970u;
            goto label_3f8970;
        }
    }
    ctx->pc = 0x3F8934u;
    // 0x3f8934: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8938: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f893c: 0x24846c68  addiu       $a0, $a0, 0x6C68
    ctx->pc = 0x3f893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27752));
    // 0x3f8940: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8940u;
    SET_GPR_U32(ctx, 31, 0x3F8948u);
    ctx->pc = 0x3F8944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8940u;
    // 0x3f8944: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8940u, 0x3F8948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8948u;
label_3f8948:
    // 0x3f8948: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f8948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f894c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f894cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8950: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f8950u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f8954: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8954u;
    SET_GPR_U32(ctx, 31, 0x3F895Cu);
    ctx->pc = 0x3F8958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8954u;
    // 0x3f8958: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8954u, 0x3F895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F895Cu;
label_3f895c:
    // 0x3f895c: 0x3c043406  lui         $a0, 0x3406
    ctx->pc = 0x3f895cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13318 << 16));
    // 0x3f8960: 0x3c03b044  lui         $v1, 0xB044
    ctx->pc = 0x3f8960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45124 << 16));
    // 0x3f8964: 0x34842c42  ori         $a0, $a0, 0x2C42
    ctx->pc = 0x3f8964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11330);
    // 0x3f8968: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x3F8968u;
    {
        const bool branch_taken_0x3f8968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8968u;
        // 0x3f896c: 0x34633866  ori         $v1, $v1, 0x3866 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14438);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8968) {
            ctx->pc = 0x3F8F04u;
            goto label_3f8f04;
        }
    }
    ctx->pc = 0x3F8970u;
label_3f8970:
    // 0x3f8970: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8978: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8978u;
    SET_GPR_U32(ctx, 31, 0x3F8980u);
    ctx->pc = 0x3F897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8978u;
    // 0x3f897c: 0x24a56c80  addiu       $a1, $a1, 0x6C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8978u, 0x3F8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8980u;
label_3f8980:
    // 0x3f8980: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F8980u;
    {
        const bool branch_taken_0x3f8980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8980u;
        // 0x3f8984: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8980) {
            ctx->pc = 0x3F8A00u;
            goto label_3f8a00;
        }
    }
    ctx->pc = 0x3F8988u;
    // 0x3f8988: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f898c: 0x26106c98  addiu       $s0, $s0, 0x6C98
    ctx->pc = 0x3f898cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27800));
    // 0x3f8990: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8998: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8998u;
    SET_GPR_U32(ctx, 31, 0x3F89A0u);
    ctx->pc = 0x3F899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8998u;
    // 0x3f899c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8998u, 0x3F89A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F89A0u;
label_3f89a0:
    // 0x3f89a0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f89a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f89a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f89a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f89a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f89a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f89ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f89acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f89b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f89b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f89b4: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F89B4u;
    SET_GPR_U32(ctx, 31, 0x3F89BCu);
    ctx->pc = 0x3F89B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F89B4u;
    // 0x3f89b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F89B4u, 0x3F89BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F89BCu;
label_3f89bc:
    // 0x3f89bc: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f89c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f89c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f89c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f89c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f89c8: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F89C8u;
    SET_GPR_U32(ctx, 31, 0x3F89D0u);
    ctx->pc = 0x3F89CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F89C8u;
    // 0x3f89cc: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F89C8u, 0x3F89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F89D0u;
label_3f89d0:
    // 0x3f89d0: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f89d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f89d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f89d8: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f89dc: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F89DCu;
    SET_GPR_U32(ctx, 31, 0x3F89E4u);
    ctx->pc = 0x3F89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F89DCu;
    // 0x3f89e0: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F89DCu, 0x3F89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F89E4u;
label_3f89e4:
    // 0x3f89e4: 0x3c0443e4  lui         $a0, 0x43E4
    ctx->pc = 0x3f89e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17380 << 16));
    // 0x3f89e8: 0x3c032d88  lui         $v1, 0x2D88
    ctx->pc = 0x3f89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11656 << 16));
    // 0x3f89ec: 0x3484b743  ori         $a0, $a0, 0xB743
    ctx->pc = 0x3f89ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46915);
    // 0x3f89f0: 0x3463622b  ori         $v1, $v1, 0x622B
    ctx->pc = 0x3f89f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25131);
    // 0x3f89f4: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f89f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f89f8: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x3F89F8u;
    {
        const bool branch_taken_0x3f89f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F89F8u;
        // 0x3f89fc: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f89f8) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8A00u;
label_3f8a00:
    // 0x3f8a00: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8a04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a08: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8A08u;
    SET_GPR_U32(ctx, 31, 0x3F8A10u);
    ctx->pc = 0x3F8A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8A08u;
    // 0x3f8a0c: 0x24a56ca8  addiu       $a1, $a1, 0x6CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8A08u, 0x3F8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8A10u;
label_3f8a10:
    // 0x3f8a10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8A10u;
    {
        const bool branch_taken_0x3f8a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A10u;
        // 0x3f8a14: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a10) {
            ctx->pc = 0x3F8A24u;
            goto label_3f8a24;
        }
    }
    ctx->pc = 0x3F8A18u;
    // 0x3f8a18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8a1c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x3F8A1Cu;
    {
        const bool branch_taken_0x3f8a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A1Cu;
        // 0x3f8a20: 0x26106cc0  addiu       $s0, $s0, 0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a1c) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F8A24u;
label_3f8a24:
    // 0x3f8a24: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a2c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8A2Cu;
    SET_GPR_U32(ctx, 31, 0x3F8A34u);
    ctx->pc = 0x3F8A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8A2Cu;
    // 0x3f8a30: 0x24a56cd8  addiu       $a1, $a1, 0x6CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8A2Cu, 0x3F8A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8A34u;
label_3f8a34:
    // 0x3f8a34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F8A34u;
    {
        const bool branch_taken_0x3f8a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A34u;
        // 0x3f8a38: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a34) {
            ctx->pc = 0x3F8A78u;
            goto label_3f8a78;
        }
    }
    ctx->pc = 0x3F8A3Cu;
    // 0x3f8a3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8a40: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a44: 0x24846cf0  addiu       $a0, $a0, 0x6CF0
    ctx->pc = 0x3f8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27888));
    // 0x3f8a48: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8A48u;
    SET_GPR_U32(ctx, 31, 0x3F8A50u);
    ctx->pc = 0x3F8A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8A48u;
    // 0x3f8a4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8A48u, 0x3F8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8A50u;
label_3f8a50:
    // 0x3f8a50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f8a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f8a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a58: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f8a5c: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8A5Cu;
    SET_GPR_U32(ctx, 31, 0x3F8A64u);
    ctx->pc = 0x3F8A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8A5Cu;
    // 0x3f8a60: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8A5Cu, 0x3F8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8A64u;
label_3f8a64:
    // 0x3f8a64: 0x3c043406  lui         $a0, 0x3406
    ctx->pc = 0x3f8a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13318 << 16));
    // 0x3f8a68: 0x3c03b044  lui         $v1, 0xB044
    ctx->pc = 0x3f8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45124 << 16));
    // 0x3f8a6c: 0x34842c42  ori         $a0, $a0, 0x2C42
    ctx->pc = 0x3f8a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11330);
    // 0x3f8a70: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x3F8A70u;
    {
        const bool branch_taken_0x3f8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A70u;
        // 0x3f8a74: 0x34633866  ori         $v1, $v1, 0x3866 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14438);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a70) {
            ctx->pc = 0x3F8F04u;
            goto label_3f8f04;
        }
    }
    ctx->pc = 0x3F8A78u;
label_3f8a78:
    // 0x3f8a78: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8a7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a80: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8A80u;
    SET_GPR_U32(ctx, 31, 0x3F8A88u);
    ctx->pc = 0x3F8A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8A80u;
    // 0x3f8a84: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8A80u, 0x3F8A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8A88u;
label_3f8a88:
    // 0x3f8a88: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F8A88u;
    {
        const bool branch_taken_0x3f8a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A88u;
        // 0x3f8a8c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a88) {
            ctx->pc = 0x3F8AC0u;
            goto label_3f8ac0;
        }
    }
    ctx->pc = 0x3F8A90u;
    // 0x3f8a90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8a94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a98: 0x24846d10  addiu       $a0, $a0, 0x6D10
    ctx->pc = 0x3f8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27920));
label_3f8a9c:
    // 0x3f8a9c: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8A9Cu;
    SET_GPR_U32(ctx, 31, 0x3F8AA4u);
    ctx->pc = 0x3F8AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8A9Cu;
    // 0x3f8aa0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8A9Cu, 0x3F8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8AA4u;
label_3f8aa4:
    // 0x3f8aa4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f8aa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f8aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8aac: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f8ab0: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8AB0u;
    SET_GPR_U32(ctx, 31, 0x3F8AB8u);
    ctx->pc = 0x3F8AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8AB0u;
    // 0x3f8ab4: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8AB0u, 0x3F8AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8AB8u;
label_3f8ab8:
    // 0x3f8ab8: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x3F8AB8u;
    {
        const bool branch_taken_0x3f8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8AB8u;
        // 0x3f8abc: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ab8) {
            ctx->pc = 0x3F8F10u;
            goto label_3f8f10;
        }
    }
    ctx->pc = 0x3F8AC0u;
label_3f8ac0:
    // 0x3f8ac0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8ac4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ac8: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8AC8u;
    SET_GPR_U32(ctx, 31, 0x3F8AD0u);
    ctx->pc = 0x3F8ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8AC8u;
    // 0x3f8acc: 0x24a56d20  addiu       $a1, $a1, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8AC8u, 0x3F8AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8AD0u;
label_3f8ad0:
    // 0x3f8ad0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F8AD0u;
    {
        const bool branch_taken_0x3f8ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8AD0u;
        // 0x3f8ad4: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ad0) {
            ctx->pc = 0x3F8B50u;
            goto label_3f8b50;
        }
    }
    ctx->pc = 0x3F8AD8u;
    // 0x3f8ad8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8adc: 0x26106d38  addiu       $s0, $s0, 0x6D38
    ctx->pc = 0x3f8adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27960));
    // 0x3f8ae0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ae8: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8AE8u;
    SET_GPR_U32(ctx, 31, 0x3F8AF0u);
    ctx->pc = 0x3F8AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8AE8u;
    // 0x3f8aec: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8AE8u, 0x3F8AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8AF0u;
label_3f8af0:
    // 0x3f8af0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8af0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8af4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8af8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8afc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8b00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b04: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8B04u;
    SET_GPR_U32(ctx, 31, 0x3F8B0Cu);
    ctx->pc = 0x3F8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8B04u;
    // 0x3f8b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8B04u, 0x3F8B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8B0Cu;
label_3f8b0c:
    // 0x3f8b0c: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8b10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f8b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b18: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8B18u;
    SET_GPR_U32(ctx, 31, 0x3F8B20u);
    ctx->pc = 0x3F8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8B18u;
    // 0x3f8b1c: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8B18u, 0x3F8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8B20u;
label_3f8b20:
    // 0x3f8b20: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8b24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b28: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8b2c: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8B2Cu;
    SET_GPR_U32(ctx, 31, 0x3F8B34u);
    ctx->pc = 0x3F8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8B2Cu;
    // 0x3f8b30: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8B2Cu, 0x3F8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8B34u;
label_3f8b34:
    // 0x3f8b34: 0x3c04c098  lui         $a0, 0xC098
    ctx->pc = 0x3f8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49304 << 16));
    // 0x3f8b38: 0x3c0362b0  lui         $v1, 0x62B0
    ctx->pc = 0x3f8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25264 << 16));
    // 0x3f8b3c: 0x348423be  ori         $a0, $a0, 0x23BE
    ctx->pc = 0x3f8b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9150);
    // 0x3f8b40: 0x346326b4  ori         $v1, $v1, 0x26B4
    ctx->pc = 0x3f8b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9908);
    // 0x3f8b44: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f8b48: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x3F8B48u;
    {
        const bool branch_taken_0x3f8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8B48u;
        // 0x3f8b4c: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8b48) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8B50u;
label_3f8b50:
    // 0x3f8b50: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8b54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b58: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8B58u;
    SET_GPR_U32(ctx, 31, 0x3F8B60u);
    ctx->pc = 0x3F8B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8B58u;
    // 0x3f8b5c: 0x24a56d48  addiu       $a1, $a1, 0x6D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8B58u, 0x3F8B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8B60u;
label_3f8b60:
    // 0x3f8b60: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F8B60u;
    {
        const bool branch_taken_0x3f8b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8B60u;
        // 0x3f8b64: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8b60) {
            ctx->pc = 0x3F8BE0u;
            goto label_3f8be0;
        }
    }
    ctx->pc = 0x3F8B68u;
    // 0x3f8b68: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8b6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b70: 0x24846d38  addiu       $a0, $a0, 0x6D38
    ctx->pc = 0x3f8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27960));
    // 0x3f8b74: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b78: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8B78u;
    SET_GPR_U32(ctx, 31, 0x3F8B80u);
    ctx->pc = 0x3F8B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8B78u;
    // 0x3f8b7c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8B78u, 0x3F8B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8B80u;
label_3f8b80:
    // 0x3f8b80: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3f8b84: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8b88: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b8c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8b90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b94: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8B94u;
    SET_GPR_U32(ctx, 31, 0x3F8B9Cu);
    ctx->pc = 0x3F8B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8B94u;
    // 0x3f8b98: 0x24846d60  addiu       $a0, $a0, 0x6D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8B94u, 0x3F8B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8B9Cu;
label_3f8b9c:
    // 0x3f8b9c: 0x8e032c7c  lw          $v1, 0x2C7C($s0)
    ctx->pc = 0x3f8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3f8ba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ba4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f8ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ba8: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8BA8u;
    SET_GPR_U32(ctx, 31, 0x3F8BB0u);
    ctx->pc = 0x3F8BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8BA8u;
    // 0x3f8bac: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8BA8u, 0x3F8BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8BB0u;
label_3f8bb0:
    // 0x3f8bb0: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bb8: 0x8e022c7c  lw          $v0, 0x2C7C($s0)
    ctx->pc = 0x3f8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3f8bbc: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8BBCu;
    SET_GPR_U32(ctx, 31, 0x3F8BC4u);
    ctx->pc = 0x3F8BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8BBCu;
    // 0x3f8bc0: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8BBCu, 0x3F8BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8BC4u;
label_3f8bc4:
    // 0x3f8bc4: 0x3c04c098  lui         $a0, 0xC098
    ctx->pc = 0x3f8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49304 << 16));
    // 0x3f8bc8: 0x3c0362b0  lui         $v1, 0x62B0
    ctx->pc = 0x3f8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25264 << 16));
    // 0x3f8bcc: 0x348423be  ori         $a0, $a0, 0x23BE
    ctx->pc = 0x3f8bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9150);
    // 0x3f8bd0: 0x346326b4  ori         $v1, $v1, 0x26B4
    ctx->pc = 0x3f8bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9908);
    // 0x3f8bd4: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f8bd8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x3F8BD8u;
    {
        const bool branch_taken_0x3f8bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8BD8u;
        // 0x3f8bdc: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8bd8) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8BE0u;
label_3f8be0:
    // 0x3f8be0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8be4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8be8: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8BE8u;
    SET_GPR_U32(ctx, 31, 0x3F8BF0u);
    ctx->pc = 0x3F8BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8BE8u;
    // 0x3f8bec: 0x24a56d70  addiu       $a1, $a1, 0x6D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8BE8u, 0x3F8BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8BF0u;
label_3f8bf0:
    // 0x3f8bf0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F8BF0u;
    {
        const bool branch_taken_0x3f8bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8BF0u;
        // 0x3f8bf4: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8bf0) {
            ctx->pc = 0x3F8C70u;
            goto label_3f8c70;
        }
    }
    ctx->pc = 0x3F8BF8u;
    // 0x3f8bf8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8bfc: 0x26106b98  addiu       $s0, $s0, 0x6B98
    ctx->pc = 0x3f8bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27544));
    // 0x3f8c00: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c08: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8C08u;
    SET_GPR_U32(ctx, 31, 0x3F8C10u);
    ctx->pc = 0x3F8C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C08u;
    // 0x3f8c0c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8C08u, 0x3F8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C10u;
label_3f8c10:
    // 0x3f8c10: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8c10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8c14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8c18: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c1c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8c20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8c20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c24: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8C24u;
    SET_GPR_U32(ctx, 31, 0x3F8C2Cu);
    ctx->pc = 0x3F8C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C24u;
    // 0x3f8c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8C24u, 0x3F8C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C2Cu;
label_3f8c2c:
    // 0x3f8c2c: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8c30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f8c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c38: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8C38u;
    SET_GPR_U32(ctx, 31, 0x3F8C40u);
    ctx->pc = 0x3F8C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C38u;
    // 0x3f8c3c: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8C38u, 0x3F8C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C40u;
label_3f8c40:
    // 0x3f8c40: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8c40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8c44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c48: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8c4c: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8C4Cu;
    SET_GPR_U32(ctx, 31, 0x3F8C54u);
    ctx->pc = 0x3F8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C4Cu;
    // 0x3f8c50: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8C4Cu, 0x3F8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C54u;
label_3f8c54:
    // 0x3f8c54: 0x3c04c098  lui         $a0, 0xC098
    ctx->pc = 0x3f8c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49304 << 16));
    // 0x3f8c58: 0x3c0362b0  lui         $v1, 0x62B0
    ctx->pc = 0x3f8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25264 << 16));
    // 0x3f8c5c: 0x348423be  ori         $a0, $a0, 0x23BE
    ctx->pc = 0x3f8c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9150);
    // 0x3f8c60: 0x346326b4  ori         $v1, $v1, 0x26B4
    ctx->pc = 0x3f8c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9908);
    // 0x3f8c64: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f8c68: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x3F8C68u;
    {
        const bool branch_taken_0x3f8c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8C68u;
        // 0x3f8c6c: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8c68) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8C70u;
label_3f8c70:
    // 0x3f8c70: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8c74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c78: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8C78u;
    SET_GPR_U32(ctx, 31, 0x3F8C80u);
    ctx->pc = 0x3F8C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C78u;
    // 0x3f8c7c: 0x24a56d80  addiu       $a1, $a1, 0x6D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8C78u, 0x3F8C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C80u;
label_3f8c80:
    // 0x3f8c80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8C80u;
    {
        const bool branch_taken_0x3f8c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8C80u;
        // 0x3f8c84: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8c80) {
            ctx->pc = 0x3F8C94u;
            goto label_3f8c94;
        }
    }
    ctx->pc = 0x3F8C88u;
    // 0x3f8c88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8c8c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3F8C8Cu;
    {
        const bool branch_taken_0x3f8c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8C8Cu;
        // 0x3f8c90: 0x26106d90  addiu       $s0, $s0, 0x6D90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8c8c) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F8C94u;
label_3f8c94:
    // 0x3f8c94: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c9c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8C9Cu;
    SET_GPR_U32(ctx, 31, 0x3F8CA4u);
    ctx->pc = 0x3F8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C9Cu;
    // 0x3f8ca0: 0x24a56da0  addiu       $a1, $a1, 0x6DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8C9Cu, 0x3F8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8CA4u;
label_3f8ca4:
    // 0x3f8ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8CA4u;
    {
        const bool branch_taken_0x3f8ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8CA4u;
        // 0x3f8ca8: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ca4) {
            ctx->pc = 0x3F8CB8u;
            goto label_3f8cb8;
        }
    }
    ctx->pc = 0x3F8CACu;
    // 0x3f8cac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8cb0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3F8CB0u;
    {
        const bool branch_taken_0x3f8cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8CB0u;
        // 0x3f8cb4: 0x26106db0  addiu       $s0, $s0, 0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8cb0) {
            ctx->pc = 0x3F8DB0u;
            goto label_3f8db0;
        }
    }
    ctx->pc = 0x3F8CB8u;
label_3f8cb8:
    // 0x3f8cb8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8cbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8cc0: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8CC0u;
    SET_GPR_U32(ctx, 31, 0x3F8CC8u);
    ctx->pc = 0x3F8CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8CC0u;
    // 0x3f8cc4: 0x24a56dc0  addiu       $a1, $a1, 0x6DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8CC0u, 0x3F8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8CC8u;
label_3f8cc8:
    // 0x3f8cc8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F8CC8u;
    {
        const bool branch_taken_0x3f8cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8CC8u;
        // 0x3f8ccc: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8cc8) {
            ctx->pc = 0x3F8D48u;
            goto label_3f8d48;
        }
    }
    ctx->pc = 0x3F8CD0u;
    // 0x3f8cd0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8cd4: 0x26106dd0  addiu       $s0, $s0, 0x6DD0
    ctx->pc = 0x3f8cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28112));
    // 0x3f8cd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ce0: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8CE0u;
    SET_GPR_U32(ctx, 31, 0x3F8CE8u);
    ctx->pc = 0x3F8CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8CE0u;
    // 0x3f8ce4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8CE0u, 0x3F8CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8CE8u;
label_3f8ce8:
    // 0x3f8ce8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8cec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8cf0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8cf4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8cf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8cfc: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8CFCu;
    SET_GPR_U32(ctx, 31, 0x3F8D04u);
    ctx->pc = 0x3F8D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8CFCu;
    // 0x3f8d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8CFCu, 0x3F8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8D04u;
label_3f8d04:
    // 0x3f8d04: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8d08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8d0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f8d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8d10: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8D10u;
    SET_GPR_U32(ctx, 31, 0x3F8D18u);
    ctx->pc = 0x3F8D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8D10u;
    // 0x3f8d14: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8D10u, 0x3F8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8D18u;
label_3f8d18:
    // 0x3f8d18: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8d1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8d20: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8d24: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8D24u;
    SET_GPR_U32(ctx, 31, 0x3F8D2Cu);
    ctx->pc = 0x3F8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8D24u;
    // 0x3f8d28: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8D24u, 0x3F8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8D2Cu;
label_3f8d2c:
    // 0x3f8d2c: 0x3c04c098  lui         $a0, 0xC098
    ctx->pc = 0x3f8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49304 << 16));
    // 0x3f8d30: 0x3c03d883  lui         $v1, 0xD883
    ctx->pc = 0x3f8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55427 << 16));
    // 0x3f8d34: 0x348423be  ori         $a0, $a0, 0x23BE
    ctx->pc = 0x3f8d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9150);
    // 0x3f8d38: 0x34631bf0  ori         $v1, $v1, 0x1BF0
    ctx->pc = 0x3f8d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7152);
    // 0x3f8d3c: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f8d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f8d40: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3F8D40u;
    {
        const bool branch_taken_0x3f8d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8D40u;
        // 0x3f8d44: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d40) {
            ctx->pc = 0x3F8F0Cu;
            goto label_3f8f0c;
        }
    }
    ctx->pc = 0x3F8D48u;
label_3f8d48:
    // 0x3f8d48: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8d4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8d50: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8D50u;
    SET_GPR_U32(ctx, 31, 0x3F8D58u);
    ctx->pc = 0x3F8D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8D50u;
    // 0x3f8d54: 0x24a56de0  addiu       $a1, $a1, 0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8D50u, 0x3F8D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8D58u;
label_3f8d58:
    // 0x3f8d58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8D58u;
    {
        const bool branch_taken_0x3f8d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8D58u;
        // 0x3f8d5c: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d58) {
            ctx->pc = 0x3F8D6Cu;
            goto label_3f8d6c;
        }
    }
    ctx->pc = 0x3F8D60u;
    // 0x3f8d60: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8d64: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3F8D64u;
    {
        const bool branch_taken_0x3f8d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8D64u;
        // 0x3f8d68: 0x26106df0  addiu       $s0, $s0, 0x6DF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d64) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F8D6Cu;
label_3f8d6c:
    // 0x3f8d6c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8d70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8d74: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8D74u;
    SET_GPR_U32(ctx, 31, 0x3F8D7Cu);
    ctx->pc = 0x3F8D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8D74u;
    // 0x3f8d78: 0x24a56e00  addiu       $a1, $a1, 0x6E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8D74u, 0x3F8D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8D7Cu;
label_3f8d7c:
    // 0x3f8d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8D7Cu;
    {
        const bool branch_taken_0x3f8d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8D7Cu;
        // 0x3f8d80: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d7c) {
            ctx->pc = 0x3F8D90u;
            goto label_3f8d90;
        }
    }
    ctx->pc = 0x3F8D84u;
    // 0x3f8d84: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8d88: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3F8D88u;
    {
        const bool branch_taken_0x3f8d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8D88u;
        // 0x3f8d8c: 0x26106e10  addiu       $s0, $s0, 0x6E10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d88) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F8D90u;
label_3f8d90:
    // 0x3f8d90: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8d94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8d98: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8D98u;
    SET_GPR_U32(ctx, 31, 0x3F8DA0u);
    ctx->pc = 0x3F8D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8D98u;
    // 0x3f8d9c: 0x24a56e20  addiu       $a1, $a1, 0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8D98u, 0x3F8DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8DA0u;
label_3f8da0:
    // 0x3f8da0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3F8DA0u;
    {
        const bool branch_taken_0x3f8da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8DA0u;
        // 0x3f8da4: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8da0) {
            ctx->pc = 0x3F8E14u;
            goto label_3f8e14;
        }
    }
    ctx->pc = 0x3F8DA8u;
    // 0x3f8da8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8dac: 0x26106e38  addiu       $s0, $s0, 0x6E38
    ctx->pc = 0x3f8dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28216));
label_3f8db0:
    // 0x3f8db0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8db8: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8DB8u;
    SET_GPR_U32(ctx, 31, 0x3F8DC0u);
    ctx->pc = 0x3F8DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8DB8u;
    // 0x3f8dbc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8DB8u, 0x3F8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8DC0u;
label_3f8dc0:
    // 0x3f8dc0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8dc4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8dc8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8dcc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8dd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8dd4: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8DD4u;
    SET_GPR_U32(ctx, 31, 0x3F8DDCu);
    ctx->pc = 0x3F8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8DD4u;
    // 0x3f8dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8DD4u, 0x3F8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8DDCu;
label_3f8ddc:
    // 0x3f8ddc: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8de0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8de4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f8de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8de8: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8DE8u;
    SET_GPR_U32(ctx, 31, 0x3F8DF0u);
    ctx->pc = 0x3F8DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8DE8u;
    // 0x3f8dec: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8DE8u, 0x3F8DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8DF0u;
label_3f8df0:
    // 0x3f8df0: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8df4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8df8: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8dfc: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8DFCu;
    SET_GPR_U32(ctx, 31, 0x3F8E04u);
    ctx->pc = 0x3F8E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8DFCu;
    // 0x3f8e00: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8DFCu, 0x3F8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8E04u;
label_3f8e04:
    // 0x3f8e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8e08: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x3f8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x3f8e0c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3F8E0Cu;
    {
        const bool branch_taken_0x3f8e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E0Cu;
        // 0x3f8e10: 0xaea30020  sw          $v1, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e0c) {
            ctx->pc = 0x3F8F10u;
            goto label_3f8f10;
        }
    }
    ctx->pc = 0x3F8E14u;
label_3f8e14:
    // 0x3f8e14: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e1c: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8E1Cu;
    SET_GPR_U32(ctx, 31, 0x3F8E24u);
    ctx->pc = 0x3F8E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8E1Cu;
    // 0x3f8e20: 0x24a56e50  addiu       $a1, $a1, 0x6E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8E1Cu, 0x3F8E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8E24u;
label_3f8e24:
    // 0x3f8e24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8E24u;
    {
        const bool branch_taken_0x3f8e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E24u;
        // 0x3f8e28: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e24) {
            ctx->pc = 0x3F8E38u;
            goto label_3f8e38;
        }
    }
    ctx->pc = 0x3F8E2Cu;
    // 0x3f8e2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8e30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3F8E30u;
    {
        const bool branch_taken_0x3f8e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E30u;
        // 0x3f8e34: 0x26106e68  addiu       $s0, $s0, 0x6E68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e30) {
            ctx->pc = 0x3F8E58u;
            goto label_3f8e58;
        }
    }
    ctx->pc = 0x3F8E38u;
label_3f8e38:
    // 0x3f8e38: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8e3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e40: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8E40u;
    SET_GPR_U32(ctx, 31, 0x3F8E48u);
    ctx->pc = 0x3F8E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8E40u;
    // 0x3f8e44: 0x24a56e80  addiu       $a1, $a1, 0x6E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8E40u, 0x3F8E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8E48u;
label_3f8e48:
    // 0x3f8e48: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F8E48u;
    {
        const bool branch_taken_0x3f8e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E48u;
        // 0x3f8e4c: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e48) {
            ctx->pc = 0x3F8EB4u;
            goto label_3f8eb4;
        }
    }
    ctx->pc = 0x3F8E50u;
    // 0x3f8e50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8e54: 0x26106e90  addiu       $s0, $s0, 0x6E90
    ctx->pc = 0x3f8e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28304));
label_3f8e58:
    // 0x3f8e58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f8e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e60: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8E60u;
    SET_GPR_U32(ctx, 31, 0x3F8E68u);
    ctx->pc = 0x3F8E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8E60u;
    // 0x3f8e64: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8E60u, 0x3F8E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8E68u;
label_3f8e68:
    // 0x3f8e68: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f8e68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f8e6c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f8e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f8e70: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e74: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f8e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f8e78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f8e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e7c: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8E7Cu;
    SET_GPR_U32(ctx, 31, 0x3F8E84u);
    ctx->pc = 0x3F8E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8E7Cu;
    // 0x3f8e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8E7Cu, 0x3F8E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8E84u;
label_3f8e84:
    // 0x3f8e84: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x3f8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8e88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f8e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e90: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8E90u;
    SET_GPR_U32(ctx, 31, 0x3F8E98u);
    ctx->pc = 0x3F8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8E90u;
    // 0x3f8e94: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8E90u, 0x3F8E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8E98u;
label_3f8e98:
    // 0x3f8e98: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x3f8e9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ea0: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x3f8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f8ea4: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8EA4u;
    SET_GPR_U32(ctx, 31, 0x3F8EACu);
    ctx->pc = 0x3F8EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8EA4u;
    // 0x3f8ea8: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8EA4u, 0x3F8EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8EACu;
label_3f8eac:
    // 0x3f8eac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3F8EACu;
    {
        const bool branch_taken_0x3f8eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8EACu;
        // 0x3f8eb0: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8eac) {
            ctx->pc = 0x3F8F10u;
            goto label_3f8f10;
        }
    }
    ctx->pc = 0x3F8EB4u;
label_3f8eb4:
    // 0x3f8eb4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f8eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f8eb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ebc: 0xc0e9666  jal         func_3A5998
    ctx->pc = 0x3F8EBCu;
    SET_GPR_U32(ctx, 31, 0x3F8EC4u);
    ctx->pc = 0x3F8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8EBCu;
    // 0x3f8ec0: 0x24a56ea0  addiu       $a1, $a1, 0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F8EBCu, 0x3F8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8EC4u;
label_3f8ec4:
    // 0x3f8ec4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3F8EC4u;
    {
        const bool branch_taken_0x3f8ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8EC4u;
        // 0x3f8ec8: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ec4) {
            ctx->pc = 0x3F8F10u;
            goto label_3f8f10;
        }
    }
    ctx->pc = 0x3F8ECCu;
    // 0x3f8ecc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f8ed0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f8ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ed4: 0x24846bc0  addiu       $a0, $a0, 0x6BC0
    ctx->pc = 0x3f8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27584));
    // 0x3f8ed8: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3F8ED8u;
    SET_GPR_U32(ctx, 31, 0x3F8EE0u);
    ctx->pc = 0x3F8EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8ED8u;
    // 0x3f8edc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F8ED8u, 0x3F8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8EE0u;
label_3f8ee0:
    // 0x3f8ee0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3f8ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f8ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ee8: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3f8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f8eec: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x3F8EECu;
    SET_GPR_U32(ctx, 31, 0x3F8EF4u);
    ctx->pc = 0x3F8EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8EECu;
    // 0x3f8ef0: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x3F8EECu, 0x3F8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8EF4u;
label_3f8ef4:
    // 0x3f8ef4: 0x3c04a75a  lui         $a0, 0xA75A
    ctx->pc = 0x3f8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42842 << 16));
    // 0x3f8ef8: 0x3c034954  lui         $v1, 0x4954
    ctx->pc = 0x3f8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18772 << 16));
    // 0x3f8efc: 0x3484c8f5  ori         $a0, $a0, 0xC8F5
    ctx->pc = 0x3f8efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51445);
    // 0x3f8f00: 0x3463a9d9  ori         $v1, $v1, 0xA9D9
    ctx->pc = 0x3f8f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43481);
label_3f8f04:
    // 0x3f8f04: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x3f8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x3f8f08: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_3f8f0c:
    // 0x3f8f0c: 0xaea4000c  sw          $a0, 0xC($s5)
    ctx->pc = 0x3f8f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 4));
label_3f8f10:
    // 0x3f8f10: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3f8f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3f8f14:
    // 0x3f8f14: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3f8f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3f8f18: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3f8f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3f8f1c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3f8f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3f8f20: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3f8f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3f8f24: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3f8f24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3f8f28: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3f8f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3f8f2c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x3f8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f8f30: 0x3e00008  jr          $ra
    ctx->pc = 0x3F8F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8F30u;
        // 0x3f8f34: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F8F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F8F38u;
}
