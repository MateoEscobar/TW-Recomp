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

// Function: sub_003EA260
// Address: 0x3ea260 - 0x3ea350
void sub_003EA260_0x3ea260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA260_0x3ea260");
#endif

    switch (ctx->pc) {
        case 0x3ea260u: goto label_3ea260;
        case 0x3ea264u: goto label_3ea264;
        case 0x3ea268u: goto label_3ea268;
        case 0x3ea26cu: goto label_3ea26c;
        case 0x3ea270u: goto label_3ea270;
        case 0x3ea274u: goto label_3ea274;
        case 0x3ea278u: goto label_3ea278;
        case 0x3ea27cu: goto label_3ea27c;
        case 0x3ea280u: goto label_3ea280;
        case 0x3ea284u: goto label_3ea284;
        case 0x3ea288u: goto label_3ea288;
        case 0x3ea28cu: goto label_3ea28c;
        case 0x3ea290u: goto label_3ea290;
        case 0x3ea294u: goto label_3ea294;
        case 0x3ea298u: goto label_3ea298;
        case 0x3ea29cu: goto label_3ea29c;
        case 0x3ea2a0u: goto label_3ea2a0;
        case 0x3ea2a4u: goto label_3ea2a4;
        case 0x3ea2a8u: goto label_3ea2a8;
        case 0x3ea2acu: goto label_3ea2ac;
        case 0x3ea2b0u: goto label_3ea2b0;
        case 0x3ea2b4u: goto label_3ea2b4;
        case 0x3ea2b8u: goto label_3ea2b8;
        case 0x3ea2bcu: goto label_3ea2bc;
        case 0x3ea2c0u: goto label_3ea2c0;
        case 0x3ea2c4u: goto label_3ea2c4;
        case 0x3ea2c8u: goto label_3ea2c8;
        case 0x3ea2ccu: goto label_3ea2cc;
        case 0x3ea2d0u: goto label_3ea2d0;
        case 0x3ea2d4u: goto label_3ea2d4;
        case 0x3ea2d8u: goto label_3ea2d8;
        case 0x3ea2dcu: goto label_3ea2dc;
        case 0x3ea2e0u: goto label_3ea2e0;
        case 0x3ea2e4u: goto label_3ea2e4;
        case 0x3ea2e8u: goto label_3ea2e8;
        case 0x3ea2ecu: goto label_3ea2ec;
        case 0x3ea2f0u: goto label_3ea2f0;
        case 0x3ea2f4u: goto label_3ea2f4;
        case 0x3ea2f8u: goto label_3ea2f8;
        case 0x3ea2fcu: goto label_3ea2fc;
        case 0x3ea300u: goto label_3ea300;
        case 0x3ea304u: goto label_3ea304;
        case 0x3ea308u: goto label_3ea308;
        case 0x3ea30cu: goto label_3ea30c;
        case 0x3ea310u: goto label_3ea310;
        case 0x3ea314u: goto label_3ea314;
        case 0x3ea318u: goto label_3ea318;
        case 0x3ea31cu: goto label_3ea31c;
        case 0x3ea320u: goto label_3ea320;
        case 0x3ea324u: goto label_3ea324;
        case 0x3ea328u: goto label_3ea328;
        case 0x3ea32cu: goto label_3ea32c;
        case 0x3ea330u: goto label_3ea330;
        case 0x3ea334u: goto label_3ea334;
        case 0x3ea338u: goto label_3ea338;
        case 0x3ea33cu: goto label_3ea33c;
        case 0x3ea340u: goto label_3ea340;
        case 0x3ea344u: goto label_3ea344;
        case 0x3ea348u: goto label_3ea348;
        case 0x3ea34cu: goto label_3ea34c;
        default: break;
    }

    ctx->pc = 0x3ea260u;

label_3ea260:
    // 0x3ea260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ea260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ea264:
    // 0x3ea264: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ea264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ea268:
    // 0x3ea268: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ea268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ea26c:
    // 0x3ea26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ea26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea270:
    // 0x3ea270: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ea270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ea274:
    // 0x3ea274: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ea274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ea278:
    // 0x3ea278: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ea278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ea27c:
    // 0x3ea27c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ea27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ea280:
    // 0x3ea280: 0x40f809  jalr        $v0
label_3ea284:
    if (ctx->pc == 0x3EA284u) {
        ctx->pc = 0x3EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA280u;
        // 0x3ea284: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA288u;
        goto label_3ea288;
    }
    ctx->pc = 0x3EA280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA288u);
        ctx->pc = 0x3EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA280u;
        // 0x3ea284: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA280u, 0x3EA288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA288u;
label_3ea288:
    // 0x3ea288: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ea288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ea28c:
    // 0x3ea28c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ea28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea290:
    // 0x3ea290: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3ea290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3ea294:
    // 0x3ea294: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x3ea294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
label_3ea298:
    // 0x3ea298: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ea298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3ea29c:
    // 0x3ea29c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ea29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ea2a0:
    // 0x3ea2a0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3ea2a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea2a4:
    // 0x3ea2a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ea2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea2a8:
    // 0x3ea2a8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3ea2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3ea2ac:
    // 0x3ea2ac: 0xc047e6c  jal         func_11F9B0
label_3ea2b0:
    if (ctx->pc == 0x3EA2B0u) {
        ctx->pc = 0x3EA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2ACu;
        // 0x3ea2b0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA2B4u;
        goto label_3ea2b4;
    }
    ctx->pc = 0x3EA2ACu;
    SET_GPR_U32(ctx, 31, 0x3EA2B4u);
    ctx->pc = 0x3EA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA2ACu;
    // 0x3ea2b0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3EA2ACu, 0x3EA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA2B4u;
label_3ea2b4:
    // 0x3ea2b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea2b8:
    // 0x3ea2b8: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x3ea2b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_3ea2bc:
    // 0x3ea2bc: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x3ea2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_3ea2c0:
    // 0x3ea2c0: 0xa0f809  jalr        $a1
label_3ea2c4:
    if (ctx->pc == 0x3EA2C4u) {
        ctx->pc = 0x3EA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2C0u;
        // 0x3ea2c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA2C8u;
        goto label_3ea2c8;
    }
    ctx->pc = 0x3EA2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3EA2C8u);
        ctx->pc = 0x3EA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2C0u;
        // 0x3ea2c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA2C0u, 0x3EA2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA2C8u;
label_3ea2c8:
    // 0x3ea2c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ea2c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea2cc:
    // 0x3ea2cc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ea2ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea2d0:
    // 0x3ea2d0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3ea2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3ea2d4:
    // 0x3ea2d4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ea2d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ea2d8:
    // 0x3ea2d8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3ea2d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ea2dc:
    // 0x3ea2dc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3ea2dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ea2e0:
    // 0x3ea2e0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3ea2e0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ea2e4:
    // 0x3ea2e4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3ea2e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ea2e8:
    // 0x3ea2e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ea2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ea2ec:
    // 0x3ea2ec: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3ea2ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ea2f0:
    // 0x3ea2f0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3ea2f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ea2f4:
    // 0x3ea2f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ea2f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ea2f8:
    // 0x3ea2f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3ea2f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ea2fc:
    // 0x3ea2fc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3ea2fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ea300:
    // 0x3ea300: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3ea300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ea304:
    // 0x3ea304: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3ea304u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ea308:
    // 0x3ea308: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3ea308u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ea30c:
    // 0x3ea30c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3ea30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ea310:
    // 0x3ea310: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3ea310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ea314:
    // 0x3ea314: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3ea314u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ea318:
    // 0x3ea318: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3ea318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3ea31c:
    // 0x3ea31c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3ea31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ea320:
    // 0x3ea320: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3ea320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3ea324:
    // 0x3ea324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ea324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ea328:
    // 0x3ea328: 0xc136b18  jal         func_4DAC60
label_3ea32c:
    if (ctx->pc == 0x3EA32Cu) {
        ctx->pc = 0x3EA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA328u;
        // 0x3ea32c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA330u;
        goto label_3ea330;
    }
    ctx->pc = 0x3EA328u;
    SET_GPR_U32(ctx, 31, 0x3EA330u);
    ctx->pc = 0x3EA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA328u;
    // 0x3ea32c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EA328u, 0x3EA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA330u;
label_3ea330:
    // 0x3ea330: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ea330u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea334:
    // 0x3ea334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ea334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea338:
    // 0x3ea338: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3ea338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ea33c:
    // 0x3ea33c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ea33cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ea340:
    // 0x3ea340: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3ea340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ea344:
    // 0x3ea344: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ea344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ea348:
    // 0x3ea348: 0x3e00008  jr          $ra
label_3ea34c:
    if (ctx->pc == 0x3EA34Cu) {
        ctx->pc = 0x3EA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA348u;
        // 0x3ea34c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA350u;
        goto label_fallthrough_0x3ea348;
    }
    ctx->pc = 0x3EA348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA348u;
        // 0x3ea34c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea348:
    ctx->pc = 0x3EA350u;
}
