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

// Function: sub_003F9368
// Address: 0x3f9368 - 0x3f9588
void sub_003F9368_0x3f9368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9368_0x3f9368");
#endif

    switch (ctx->pc) {
        case 0x3f9368u: goto label_3f9368;
        case 0x3f936cu: goto label_3f936c;
        case 0x3f9370u: goto label_3f9370;
        case 0x3f9374u: goto label_3f9374;
        case 0x3f9378u: goto label_3f9378;
        case 0x3f937cu: goto label_3f937c;
        case 0x3f9380u: goto label_3f9380;
        case 0x3f9384u: goto label_3f9384;
        case 0x3f9388u: goto label_3f9388;
        case 0x3f938cu: goto label_3f938c;
        case 0x3f9390u: goto label_3f9390;
        case 0x3f9394u: goto label_3f9394;
        case 0x3f9398u: goto label_3f9398;
        case 0x3f939cu: goto label_3f939c;
        case 0x3f93a0u: goto label_3f93a0;
        case 0x3f93a4u: goto label_3f93a4;
        case 0x3f93a8u: goto label_3f93a8;
        case 0x3f93acu: goto label_3f93ac;
        case 0x3f93b0u: goto label_3f93b0;
        case 0x3f93b4u: goto label_3f93b4;
        case 0x3f93b8u: goto label_3f93b8;
        case 0x3f93bcu: goto label_3f93bc;
        case 0x3f93c0u: goto label_3f93c0;
        case 0x3f93c4u: goto label_3f93c4;
        case 0x3f93c8u: goto label_3f93c8;
        case 0x3f93ccu: goto label_3f93cc;
        case 0x3f93d0u: goto label_3f93d0;
        case 0x3f93d4u: goto label_3f93d4;
        case 0x3f93d8u: goto label_3f93d8;
        case 0x3f93dcu: goto label_3f93dc;
        case 0x3f93e0u: goto label_3f93e0;
        case 0x3f93e4u: goto label_3f93e4;
        case 0x3f93e8u: goto label_3f93e8;
        case 0x3f93ecu: goto label_3f93ec;
        case 0x3f93f0u: goto label_3f93f0;
        case 0x3f93f4u: goto label_3f93f4;
        case 0x3f93f8u: goto label_3f93f8;
        case 0x3f93fcu: goto label_3f93fc;
        case 0x3f9400u: goto label_3f9400;
        case 0x3f9404u: goto label_3f9404;
        case 0x3f9408u: goto label_3f9408;
        case 0x3f940cu: goto label_3f940c;
        case 0x3f9410u: goto label_3f9410;
        case 0x3f9414u: goto label_3f9414;
        case 0x3f9418u: goto label_3f9418;
        case 0x3f941cu: goto label_3f941c;
        case 0x3f9420u: goto label_3f9420;
        case 0x3f9424u: goto label_3f9424;
        case 0x3f9428u: goto label_3f9428;
        case 0x3f942cu: goto label_3f942c;
        case 0x3f9430u: goto label_3f9430;
        case 0x3f9434u: goto label_3f9434;
        case 0x3f9438u: goto label_3f9438;
        case 0x3f943cu: goto label_3f943c;
        case 0x3f9440u: goto label_3f9440;
        case 0x3f9444u: goto label_3f9444;
        case 0x3f9448u: goto label_3f9448;
        case 0x3f944cu: goto label_3f944c;
        case 0x3f9450u: goto label_3f9450;
        case 0x3f9454u: goto label_3f9454;
        case 0x3f9458u: goto label_3f9458;
        case 0x3f945cu: goto label_3f945c;
        case 0x3f9460u: goto label_3f9460;
        case 0x3f9464u: goto label_3f9464;
        case 0x3f9468u: goto label_3f9468;
        case 0x3f946cu: goto label_3f946c;
        case 0x3f9470u: goto label_3f9470;
        case 0x3f9474u: goto label_3f9474;
        case 0x3f9478u: goto label_3f9478;
        case 0x3f947cu: goto label_3f947c;
        case 0x3f9480u: goto label_3f9480;
        case 0x3f9484u: goto label_3f9484;
        case 0x3f9488u: goto label_3f9488;
        case 0x3f948cu: goto label_3f948c;
        case 0x3f9490u: goto label_3f9490;
        case 0x3f9494u: goto label_3f9494;
        case 0x3f9498u: goto label_3f9498;
        case 0x3f949cu: goto label_3f949c;
        case 0x3f94a0u: goto label_3f94a0;
        case 0x3f94a4u: goto label_3f94a4;
        case 0x3f94a8u: goto label_3f94a8;
        case 0x3f94acu: goto label_3f94ac;
        case 0x3f94b0u: goto label_3f94b0;
        case 0x3f94b4u: goto label_3f94b4;
        case 0x3f94b8u: goto label_3f94b8;
        case 0x3f94bcu: goto label_3f94bc;
        case 0x3f94c0u: goto label_3f94c0;
        case 0x3f94c4u: goto label_3f94c4;
        case 0x3f94c8u: goto label_3f94c8;
        case 0x3f94ccu: goto label_3f94cc;
        case 0x3f94d0u: goto label_3f94d0;
        case 0x3f94d4u: goto label_3f94d4;
        case 0x3f94d8u: goto label_3f94d8;
        case 0x3f94dcu: goto label_3f94dc;
        case 0x3f94e0u: goto label_3f94e0;
        case 0x3f94e4u: goto label_3f94e4;
        case 0x3f94e8u: goto label_3f94e8;
        case 0x3f94ecu: goto label_3f94ec;
        case 0x3f94f0u: goto label_3f94f0;
        case 0x3f94f4u: goto label_3f94f4;
        case 0x3f94f8u: goto label_3f94f8;
        case 0x3f94fcu: goto label_3f94fc;
        case 0x3f9500u: goto label_3f9500;
        case 0x3f9504u: goto label_3f9504;
        case 0x3f9508u: goto label_3f9508;
        case 0x3f950cu: goto label_3f950c;
        case 0x3f9510u: goto label_3f9510;
        case 0x3f9514u: goto label_3f9514;
        case 0x3f9518u: goto label_3f9518;
        case 0x3f951cu: goto label_3f951c;
        case 0x3f9520u: goto label_3f9520;
        case 0x3f9524u: goto label_3f9524;
        case 0x3f9528u: goto label_3f9528;
        case 0x3f952cu: goto label_3f952c;
        case 0x3f9530u: goto label_3f9530;
        case 0x3f9534u: goto label_3f9534;
        case 0x3f9538u: goto label_3f9538;
        case 0x3f953cu: goto label_3f953c;
        case 0x3f9540u: goto label_3f9540;
        case 0x3f9544u: goto label_3f9544;
        case 0x3f9548u: goto label_3f9548;
        case 0x3f954cu: goto label_3f954c;
        case 0x3f9550u: goto label_3f9550;
        case 0x3f9554u: goto label_3f9554;
        case 0x3f9558u: goto label_3f9558;
        case 0x3f955cu: goto label_3f955c;
        case 0x3f9560u: goto label_3f9560;
        case 0x3f9564u: goto label_3f9564;
        case 0x3f9568u: goto label_3f9568;
        case 0x3f956cu: goto label_3f956c;
        case 0x3f9570u: goto label_3f9570;
        case 0x3f9574u: goto label_3f9574;
        case 0x3f9578u: goto label_3f9578;
        case 0x3f957cu: goto label_3f957c;
        case 0x3f9580u: goto label_3f9580;
        case 0x3f9584u: goto label_3f9584;
        default: break;
    }

    ctx->pc = 0x3f9368u;

label_3f9368:
    // 0x3f9368: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3f9368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3f936c:
    // 0x3f936c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3f936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3f9370:
    // 0x3f9370: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3f9370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3f9374:
    // 0x3f9374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9378:
    // 0x3f9378: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3f9378u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f937c:
    // 0x3f937c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3f937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3f9380:
    // 0x3f9380: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3f9380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3f9384:
    // 0x3f9384: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f9384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f9388:
    // 0x3f9388: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3f9388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3f938c:
    // 0x3f938c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3f938cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3f9390:
    // 0x3f9390: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3f9390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_3f9394:
    // 0x3f9394: 0xc0e4080  jal         func_390200
label_3f9398:
    if (ctx->pc == 0x3F9398u) {
        ctx->pc = 0x3F9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9394u;
        // 0x3f9398: 0x26840014  addiu       $a0, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F939Cu;
        goto label_3f939c;
    }
    ctx->pc = 0x3F9394u;
    SET_GPR_U32(ctx, 31, 0x3F939Cu);
    ctx->pc = 0x3F9398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9394u;
    // 0x3f9398: 0x26840014  addiu       $a0, $s4, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F9394u, 0x3F939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F939Cu;
label_3f939c:
    // 0x3f939c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f939cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f93a0:
    // 0x3f93a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f93a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f93a4:
    // 0x3f93a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f93a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f93a8:
    // 0x3f93a8: 0xc0e4080  jal         func_390200
label_3f93ac:
    if (ctx->pc == 0x3F93ACu) {
        ctx->pc = 0x3F93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F93A8u;
        // 0x3f93ac: 0x26840018  addiu       $a0, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F93B0u;
        goto label_3f93b0;
    }
    ctx->pc = 0x3F93A8u;
    SET_GPR_U32(ctx, 31, 0x3F93B0u);
    ctx->pc = 0x3F93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F93A8u;
    // 0x3f93ac: 0x26840018  addiu       $a0, $s4, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F93A8u, 0x3F93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F93B0u;
label_3f93b0:
    // 0x3f93b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f93b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f93b4:
    // 0x3f93b4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3f93b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3f93b8:
    // 0x3f93b8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3f93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3f93bc:
    // 0x3f93bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f93bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f93c0:
    // 0x3f93c0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3f93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3f93c4:
    // 0x3f93c4: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x3f93c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3f93c8:
    // 0x3f93c8: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x3f93c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_3f93cc:
    // 0x3f93cc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3f93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3f93d0:
    // 0x3f93d0: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3f93d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3f93d4:
    // 0x3f93d4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3f93d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f93d8:
    // 0x3f93d8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f93d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f93dc:
    // 0x3f93dc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f93dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f93e0:
    // 0x3f93e0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f93e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3f93e4:
    // 0x3f93e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f93e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f93e8:
    // 0x3f93e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f93e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f93ec:
    // 0x3f93ec: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f93ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f93f0:
    // 0x3f93f0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f93f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f93f4:
    // 0x3f93f4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f93f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f93f8:
    // 0x3f93f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f93f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f93fc:
    // 0x3f93fc: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f93fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9400:
    // 0x3f9400: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f9400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9404:
    // 0x3f9404: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9408:
    // 0x3f9408: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f9408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f940c:
    // 0x3f940c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f940cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9410:
    // 0x3f9410: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f9410u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f9414:
    // 0x3f9414: 0x7a060010  lq          $a2, 0x10($s0)
    ctx->pc = 0x3f9414u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9418:
    // 0x3f9418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f941c:
    // 0x3f941c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f9420:
    // 0x3f9420: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f9420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f9424:
    // 0x3f9424: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f9424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3f9428:
    // 0x3f9428: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f9428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3f942c:
    // 0x3f942c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f9430:
    // 0x3f9430: 0xc0e8e26  jal         func_3A3898
label_3f9434:
    if (ctx->pc == 0x3F9434u) {
        ctx->pc = 0x3F9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9430u;
        // 0x3f9434: 0x7fa60020  sq          $a2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9438u;
        goto label_3f9438;
    }
    ctx->pc = 0x3F9430u;
    SET_GPR_U32(ctx, 31, 0x3F9438u);
    ctx->pc = 0x3F9434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9430u;
    // 0x3f9434: 0x7fa60020  sq          $a2, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F9430u, 0x3F9438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9438u;
label_3f9438:
    // 0x3f9438: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3f9438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3f943c:
    // 0x3f943c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f943cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f9440:
    // 0x3f9440: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3f9440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f9444:
    // 0x3f9444: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3f9444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3f9448:
    // 0x3f9448: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f9448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f944c:
    // 0x3f944c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3f944cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3f9450:
    // 0x3f9450: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3f9450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3f9454:
    // 0x3f9454: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x3f9454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3f9458:
    // 0x3f9458: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3f9458u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f945c:
    // 0x3f945c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3f945cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f9460:
    // 0x3f9460: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3f9460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3f9464:
    // 0x3f9464: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3f9464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3f9468:
    // 0x3f9468: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f9468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f946c:
    // 0x3f946c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f946cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f9470:
    // 0x3f9470: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f9470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9474:
    // 0x3f9474: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f9474u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9478:
    // 0x3f9478: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9478u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f947c:
    // 0x3f947c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f947cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9480:
    // 0x3f9480: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f9480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9484:
    // 0x3f9484: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f9484u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f9488:
    // 0x3f9488: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f948c:
    // 0x3f948c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f948cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9490:
    // 0x3f9490: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f9490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f9494:
    // 0x3f9494: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f9494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9498:
    // 0x3f9498: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f9498u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f949c:
    // 0x3f949c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f949cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f94a0:
    // 0x3f94a0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f94a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f94a4:
    // 0x3f94a4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f94a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f94a8:
    // 0x3f94a8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f94a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f94ac:
    // 0x3f94ac: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f94acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f94b0:
    // 0x3f94b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f94b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f94b4:
    // 0x3f94b4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f94b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3f94b8:
    // 0x3f94b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3f94b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f94bc:
    // 0x3f94bc: 0xc136b18  jal         func_4DAC60
label_3f94c0:
    if (ctx->pc == 0x3F94C0u) {
        ctx->pc = 0x3F94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94BCu;
        // 0x3f94c0: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F94C4u;
        goto label_3f94c4;
    }
    ctx->pc = 0x3F94BCu;
    SET_GPR_U32(ctx, 31, 0x3F94C4u);
    ctx->pc = 0x3F94C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F94BCu;
    // 0x3f94c0: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F94BCu, 0x3F94C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F94C4u;
label_3f94c4:
    // 0x3f94c4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3f94c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f94c8:
    // 0x3f94c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f94c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f94cc:
    // 0x3f94cc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_3f94d0:
    if (ctx->pc == 0x3F94D0u) {
        ctx->pc = 0x3F94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94CCu;
        // 0x3f94d0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F94D4u;
        goto label_3f94d4;
    }
    ctx->pc = 0x3F94CCu;
    {
        const bool branch_taken_0x3f94cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94CCu;
        // 0x3f94d0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f94cc) {
            ctx->pc = 0x3F94E4u;
            goto label_3f94e4;
        }
    }
    ctx->pc = 0x3F94D4u;
label_3f94d4:
    // 0x3f94d4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f94d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f94d8:
    // 0x3f94d8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3f94d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3f94dc:
    // 0x3f94dc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3f94dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f94e0:
    // 0x3f94e0: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3f94e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3f94e4:
    // 0x3f94e4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_3f94e8:
    if (ctx->pc == 0x3F94E8u) {
        ctx->pc = 0x3F94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94E4u;
        // 0x3f94e8: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F94ECu;
        goto label_3f94ec;
    }
    ctx->pc = 0x3F94E4u;
    {
        const bool branch_taken_0x3f94e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94E4u;
        // 0x3f94e8: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f94e4) {
            ctx->pc = 0x3F94F8u;
            goto label_3f94f8;
        }
    }
    ctx->pc = 0x3F94ECu;
label_3f94ec:
    // 0x3f94ec: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3f94ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3f94f0:
    // 0x3f94f0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f94f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f94f4:
    // 0x3f94f4: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3f94f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3f94f8:
    // 0x3f94f8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3f94fc:
    if (ctx->pc == 0x3F94FCu) {
        ctx->pc = 0x3F94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94F8u;
        // 0x3f94fc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9500u;
        goto label_3f9500;
    }
    ctx->pc = 0x3F94F8u;
    {
        const bool branch_taken_0x3f94f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94F8u;
        // 0x3f94fc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f94f8) {
            ctx->pc = 0x3F952Cu;
            goto label_3f952c;
        }
    }
    ctx->pc = 0x3F9500u;
label_3f9500:
    // 0x3f9500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9504:
    // 0x3f9504: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f9504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f9508:
    // 0x3f9508: 0xc0ea158  jal         func_3A8560
label_3f950c:
    if (ctx->pc == 0x3F950Cu) {
        ctx->pc = 0x3F950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9508u;
        // 0x3f950c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9510u;
        goto label_3f9510;
    }
    ctx->pc = 0x3F9508u;
    SET_GPR_U32(ctx, 31, 0x3F9510u);
    ctx->pc = 0x3F950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9508u;
    // 0x3f950c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3F9508u, 0x3F9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9510u;
label_3f9510:
    // 0x3f9510: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f9514:
    // 0x3f9514: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3f9514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3f9518:
    // 0x3f9518: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f9518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f951c:
    // 0x3f951c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3f951cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3f9520:
    // 0x3f9520: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3f9520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3f9524:
    // 0x3f9524: 0x40f809  jalr        $v0
label_3f9528:
    if (ctx->pc == 0x3F9528u) {
        ctx->pc = 0x3F9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9524u;
        // 0x3f9528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F952Cu;
        goto label_3f952c;
    }
    ctx->pc = 0x3F9524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F952Cu);
        ctx->pc = 0x3F9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9524u;
        // 0x3f9528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9524u, 0x3F952Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F952Cu;
label_3f952c:
    // 0x3f952c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_3f9530:
    if (ctx->pc == 0x3F9530u) {
        ctx->pc = 0x3F9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F952Cu;
        // 0x3f9530: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9534u;
        goto label_3f9534;
    }
    ctx->pc = 0x3F952Cu;
    {
        const bool branch_taken_0x3f952c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F952Cu;
        // 0x3f9530: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f952c) {
            ctx->pc = 0x3F9560u;
            goto label_3f9560;
        }
    }
    ctx->pc = 0x3F9534u;
label_3f9534:
    // 0x3f9534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9538:
    // 0x3f9538: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f9538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f953c:
    // 0x3f953c: 0xc0ea158  jal         func_3A8560
label_3f9540:
    if (ctx->pc == 0x3F9540u) {
        ctx->pc = 0x3F9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F953Cu;
        // 0x3f9540: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9544u;
        goto label_3f9544;
    }
    ctx->pc = 0x3F953Cu;
    SET_GPR_U32(ctx, 31, 0x3F9544u);
    ctx->pc = 0x3F9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F953Cu;
    // 0x3f9540: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3F953Cu, 0x3F9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9544u;
label_3f9544:
    // 0x3f9544: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3f9544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f9548:
    // 0x3f9548: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f9548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f954c:
    // 0x3f954c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3f954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3f9550:
    // 0x3f9550: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3f9550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3f9554:
    // 0x3f9554: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3f9554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3f9558:
    // 0x3f9558: 0x40f809  jalr        $v0
label_3f955c:
    if (ctx->pc == 0x3F955Cu) {
        ctx->pc = 0x3F955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9558u;
        // 0x3f955c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9560u;
        goto label_3f9560;
    }
    ctx->pc = 0x3F9558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F9560u);
        ctx->pc = 0x3F955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9558u;
        // 0x3f955c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9558u, 0x3F9560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F9560u;
label_3f9560:
    // 0x3f9560: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3f9560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3f9564:
    // 0x3f9564: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3f9564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3f9568:
    // 0x3f9568: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3f9568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3f956c:
    // 0x3f956c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3f956cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3f9570:
    // 0x3f9570: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3f9570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3f9574:
    // 0x3f9574: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3f9574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3f9578:
    // 0x3f9578: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3f9578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_3f957c:
    // 0x3f957c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3f957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f9580:
    // 0x3f9580: 0x3e00008  jr          $ra
label_3f9584:
    if (ctx->pc == 0x3F9584u) {
        ctx->pc = 0x3F9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9580u;
        // 0x3f9584: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9588u;
        goto label_fallthrough_0x3f9580;
    }
    ctx->pc = 0x3F9580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9580u;
        // 0x3f9584: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f9580:
    ctx->pc = 0x3F9588u;
}
