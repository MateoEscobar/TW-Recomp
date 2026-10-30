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

// Function: sub_0024E218
// Address: 0x24e218 - 0x24e478
void sub_0024E218_0x24e218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E218_0x24e218");
#endif

    switch (ctx->pc) {
        case 0x24e218u: goto label_24e218;
        case 0x24e21cu: goto label_24e21c;
        case 0x24e220u: goto label_24e220;
        case 0x24e224u: goto label_24e224;
        case 0x24e228u: goto label_24e228;
        case 0x24e22cu: goto label_24e22c;
        case 0x24e230u: goto label_24e230;
        case 0x24e234u: goto label_24e234;
        case 0x24e238u: goto label_24e238;
        case 0x24e23cu: goto label_24e23c;
        case 0x24e240u: goto label_24e240;
        case 0x24e244u: goto label_24e244;
        case 0x24e248u: goto label_24e248;
        case 0x24e24cu: goto label_24e24c;
        case 0x24e250u: goto label_24e250;
        case 0x24e254u: goto label_24e254;
        case 0x24e258u: goto label_24e258;
        case 0x24e25cu: goto label_24e25c;
        case 0x24e260u: goto label_24e260;
        case 0x24e264u: goto label_24e264;
        case 0x24e268u: goto label_24e268;
        case 0x24e26cu: goto label_24e26c;
        case 0x24e270u: goto label_24e270;
        case 0x24e274u: goto label_24e274;
        case 0x24e278u: goto label_24e278;
        case 0x24e27cu: goto label_24e27c;
        case 0x24e280u: goto label_24e280;
        case 0x24e284u: goto label_24e284;
        case 0x24e288u: goto label_24e288;
        case 0x24e28cu: goto label_24e28c;
        case 0x24e290u: goto label_24e290;
        case 0x24e294u: goto label_24e294;
        case 0x24e298u: goto label_24e298;
        case 0x24e29cu: goto label_24e29c;
        case 0x24e2a0u: goto label_24e2a0;
        case 0x24e2a4u: goto label_24e2a4;
        case 0x24e2a8u: goto label_24e2a8;
        case 0x24e2acu: goto label_24e2ac;
        case 0x24e2b0u: goto label_24e2b0;
        case 0x24e2b4u: goto label_24e2b4;
        case 0x24e2b8u: goto label_24e2b8;
        case 0x24e2bcu: goto label_24e2bc;
        case 0x24e2c0u: goto label_24e2c0;
        case 0x24e2c4u: goto label_24e2c4;
        case 0x24e2c8u: goto label_24e2c8;
        case 0x24e2ccu: goto label_24e2cc;
        case 0x24e2d0u: goto label_24e2d0;
        case 0x24e2d4u: goto label_24e2d4;
        case 0x24e2d8u: goto label_24e2d8;
        case 0x24e2dcu: goto label_24e2dc;
        case 0x24e2e0u: goto label_24e2e0;
        case 0x24e2e4u: goto label_24e2e4;
        case 0x24e2e8u: goto label_24e2e8;
        case 0x24e2ecu: goto label_24e2ec;
        case 0x24e2f0u: goto label_24e2f0;
        case 0x24e2f4u: goto label_24e2f4;
        case 0x24e2f8u: goto label_24e2f8;
        case 0x24e2fcu: goto label_24e2fc;
        case 0x24e300u: goto label_24e300;
        case 0x24e304u: goto label_24e304;
        case 0x24e308u: goto label_24e308;
        case 0x24e30cu: goto label_24e30c;
        case 0x24e310u: goto label_24e310;
        case 0x24e314u: goto label_24e314;
        case 0x24e318u: goto label_24e318;
        case 0x24e31cu: goto label_24e31c;
        case 0x24e320u: goto label_24e320;
        case 0x24e324u: goto label_24e324;
        case 0x24e328u: goto label_24e328;
        case 0x24e32cu: goto label_24e32c;
        case 0x24e330u: goto label_24e330;
        case 0x24e334u: goto label_24e334;
        case 0x24e338u: goto label_24e338;
        case 0x24e33cu: goto label_24e33c;
        case 0x24e340u: goto label_24e340;
        case 0x24e344u: goto label_24e344;
        case 0x24e348u: goto label_24e348;
        case 0x24e34cu: goto label_24e34c;
        case 0x24e350u: goto label_24e350;
        case 0x24e354u: goto label_24e354;
        case 0x24e358u: goto label_24e358;
        case 0x24e35cu: goto label_24e35c;
        case 0x24e360u: goto label_24e360;
        case 0x24e364u: goto label_24e364;
        case 0x24e368u: goto label_24e368;
        case 0x24e36cu: goto label_24e36c;
        case 0x24e370u: goto label_24e370;
        case 0x24e374u: goto label_24e374;
        case 0x24e378u: goto label_24e378;
        case 0x24e37cu: goto label_24e37c;
        case 0x24e380u: goto label_24e380;
        case 0x24e384u: goto label_24e384;
        case 0x24e388u: goto label_24e388;
        case 0x24e38cu: goto label_24e38c;
        case 0x24e390u: goto label_24e390;
        case 0x24e394u: goto label_24e394;
        case 0x24e398u: goto label_24e398;
        case 0x24e39cu: goto label_24e39c;
        case 0x24e3a0u: goto label_24e3a0;
        case 0x24e3a4u: goto label_24e3a4;
        case 0x24e3a8u: goto label_24e3a8;
        case 0x24e3acu: goto label_24e3ac;
        case 0x24e3b0u: goto label_24e3b0;
        case 0x24e3b4u: goto label_24e3b4;
        case 0x24e3b8u: goto label_24e3b8;
        case 0x24e3bcu: goto label_24e3bc;
        case 0x24e3c0u: goto label_24e3c0;
        case 0x24e3c4u: goto label_24e3c4;
        case 0x24e3c8u: goto label_24e3c8;
        case 0x24e3ccu: goto label_24e3cc;
        case 0x24e3d0u: goto label_24e3d0;
        case 0x24e3d4u: goto label_24e3d4;
        case 0x24e3d8u: goto label_24e3d8;
        case 0x24e3dcu: goto label_24e3dc;
        case 0x24e3e0u: goto label_24e3e0;
        case 0x24e3e4u: goto label_24e3e4;
        case 0x24e3e8u: goto label_24e3e8;
        case 0x24e3ecu: goto label_24e3ec;
        case 0x24e3f0u: goto label_24e3f0;
        case 0x24e3f4u: goto label_24e3f4;
        case 0x24e3f8u: goto label_24e3f8;
        case 0x24e3fcu: goto label_24e3fc;
        case 0x24e400u: goto label_24e400;
        case 0x24e404u: goto label_24e404;
        case 0x24e408u: goto label_24e408;
        case 0x24e40cu: goto label_24e40c;
        case 0x24e410u: goto label_24e410;
        case 0x24e414u: goto label_24e414;
        case 0x24e418u: goto label_24e418;
        case 0x24e41cu: goto label_24e41c;
        case 0x24e420u: goto label_24e420;
        case 0x24e424u: goto label_24e424;
        case 0x24e428u: goto label_24e428;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e430u: goto label_24e430;
        case 0x24e434u: goto label_24e434;
        case 0x24e438u: goto label_24e438;
        case 0x24e43cu: goto label_24e43c;
        case 0x24e440u: goto label_24e440;
        case 0x24e444u: goto label_24e444;
        case 0x24e448u: goto label_24e448;
        case 0x24e44cu: goto label_24e44c;
        case 0x24e450u: goto label_24e450;
        case 0x24e454u: goto label_24e454;
        case 0x24e458u: goto label_24e458;
        case 0x24e45cu: goto label_24e45c;
        case 0x24e460u: goto label_24e460;
        case 0x24e464u: goto label_24e464;
        case 0x24e468u: goto label_24e468;
        case 0x24e46cu: goto label_24e46c;
        case 0x24e470u: goto label_24e470;
        case 0x24e474u: goto label_24e474;
        default: break;
    }

    ctx->pc = 0x24e218u;

label_24e218:
    // 0x24e218: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24e218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_24e21c:
    // 0x24e21c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24e220:
    // 0x24e220: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x24e220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_24e224:
    // 0x24e224: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x24e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_24e228:
    // 0x24e228: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x24e228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_24e22c:
    // 0x24e22c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24e22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24e230:
    // 0x24e230: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x24e230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_24e234:
    // 0x24e234: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24e234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e238:
    // 0x24e238: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x24e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_24e23c:
    // 0x24e23c: 0x3c130056  lui         $s3, 0x56
    ctx->pc = 0x24e23cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)86 << 16));
label_24e240:
    // 0x24e240: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24e240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_24e244:
    // 0x24e244: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x24e244u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24e248:
    // 0x24e248: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x24e248u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24e24c:
    // 0x24e24c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e24cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24e250:
    // 0x24e250: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24e250u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_24e254:
    // 0x24e254: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24e258:
    // 0x24e258: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e258u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24e25c:
    // 0x24e25c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24e25cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_24e260:
    // 0x24e260: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x24e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_24e264:
    // 0x24e264: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x24e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_24e268:
    // 0x24e268: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x24e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_24e26c:
    // 0x24e26c: 0x2662d290  addiu       $v0, $s3, -0x2D70
    ctx->pc = 0x24e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955664));
label_24e270:
    // 0x24e270: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x24e270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_24e274:
    // 0x24e274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24e278:
    // 0x24e278: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24e278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24e27c:
    // 0x24e27c: 0x800008  jr          $a0
label_24e280:
    if (ctx->pc == 0x24E280u) {
        ctx->pc = 0x24E284u;
        goto label_24e284;
    }
    ctx->pc = 0x24E27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E27Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24E284u;
label_24e284:
    // 0x24e284: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24e284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24e288:
    // 0x24e288: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24e288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e28c:
    // 0x24e28c: 0x24841730  addiu       $a0, $a0, 0x1730
    ctx->pc = 0x24e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
label_24e290:
    // 0x24e290: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x24e290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24e294:
    // 0x24e294: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24e298:
    // 0x24e298: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24e298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24e29c:
    // 0x24e29c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24e2a0:
    // 0x24e2a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e2a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24e2a4:
    // 0x24e2a4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24e2a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_24e2a8:
    // 0x24e2a8: 0x10000052  b           . + 4 + (0x52 << 2)
label_24e2ac:
    if (ctx->pc == 0x24E2ACu) {
        ctx->pc = 0x24E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2A8u;
        // 0x24e2ac: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2B0u;
        goto label_24e2b0;
    }
    ctx->pc = 0x24E2A8u;
    {
        const bool branch_taken_0x24e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2A8u;
        // 0x24e2ac: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2a8) {
            ctx->pc = 0x24E3F4u;
            goto label_24e3f4;
        }
    }
    ctx->pc = 0x24E2B0u;
label_24e2b0:
    // 0x24e2b0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24e2b4:
    // 0x24e2b4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24e2b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e2b8:
    // 0x24e2b8: 0x24841760  addiu       $a0, $a0, 0x1760
    ctx->pc = 0x24e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
label_24e2bc:
    // 0x24e2bc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x24e2bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24e2c0:
    // 0x24e2c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e2c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24e2c4:
    // 0x24e2c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24e2c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24e2c8:
    // 0x24e2c8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e2c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24e2cc:
    // 0x24e2cc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e2ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24e2d0:
    // 0x24e2d0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24e2d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_24e2d4:
    // 0x24e2d4: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x24e2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_24e2d8:
    // 0x24e2d8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x24e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_24e2dc:
    // 0x24e2dc: 0x10000047  b           . + 4 + (0x47 << 2)
label_24e2e0:
    if (ctx->pc == 0x24E2E0u) {
        ctx->pc = 0x24E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2DCu;
        // 0x24e2e0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2E4u;
        goto label_24e2e4;
    }
    ctx->pc = 0x24E2DCu;
    {
        const bool branch_taken_0x24e2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2DCu;
        // 0x24e2e0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2dc) {
            ctx->pc = 0x24E3FCu;
            goto label_24e3fc;
        }
    }
    ctx->pc = 0x24E2E4u;
label_24e2e4:
    // 0x24e2e4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24e2e8:
    // 0x24e2e8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24e2e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e2ec:
    // 0x24e2ec: 0x24841750  addiu       $a0, $a0, 0x1750
    ctx->pc = 0x24e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5968));
label_24e2f0:
    // 0x24e2f0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x24e2f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24e2f4:
    // 0x24e2f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e2f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24e2f8:
    // 0x24e2f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24e2f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24e2fc:
    // 0x24e2fc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24e300:
    // 0x24e300: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e300u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24e304:
    // 0x24e304: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24e304u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_24e308:
    // 0x24e308: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x24e308u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_24e30c:
    // 0x24e30c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x24e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_24e310:
    // 0x24e310: 0x1000003a  b           . + 4 + (0x3A << 2)
label_24e314:
    if (ctx->pc == 0x24E314u) {
        ctx->pc = 0x24E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E310u;
        // 0x24e314: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E318u;
        goto label_24e318;
    }
    ctx->pc = 0x24E310u;
    {
        const bool branch_taken_0x24e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E310u;
        // 0x24e314: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e310) {
            ctx->pc = 0x24E3FCu;
            goto label_24e3fc;
        }
    }
    ctx->pc = 0x24E318u;
label_24e318:
    // 0x24e318: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24e318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24e31c:
    // 0x24e31c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24e31cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e320:
    // 0x24e320: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x24e320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
label_24e324:
    // 0x24e324: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x24e324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24e328:
    // 0x24e328: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24e32c:
    // 0x24e32c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24e32cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24e330:
    // 0x24e330: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24e334:
    // 0x24e334: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e334u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24e338:
    // 0x24e338: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24e338u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_24e33c:
    // 0x24e33c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x24e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_24e340:
    // 0x24e340: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x24e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_24e344:
    // 0x24e344: 0x1000002d  b           . + 4 + (0x2D << 2)
label_24e348:
    if (ctx->pc == 0x24E348u) {
        ctx->pc = 0x24E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E344u;
        // 0x24e348: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E34Cu;
        goto label_24e34c;
    }
    ctx->pc = 0x24E344u;
    {
        const bool branch_taken_0x24e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E344u;
        // 0x24e348: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e344) {
            ctx->pc = 0x24E3FCu;
            goto label_24e3fc;
        }
    }
    ctx->pc = 0x24E34Cu;
label_24e34c:
    // 0x24e34c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24e350:
    // 0x24e350: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24e350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_24e354:
    // 0x24e354: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x24e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_24e358:
    // 0x24e358: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x24e358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e35c:
    // 0x24e35c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24e35cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24e360:
    // 0x24e360: 0x10000015  b           . + 4 + (0x15 << 2)
label_24e364:
    if (ctx->pc == 0x24E364u) {
        ctx->pc = 0x24E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E360u;
        // 0x24e364: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E368u;
        goto label_24e368;
    }
    ctx->pc = 0x24E360u;
    {
        const bool branch_taken_0x24e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E360u;
        // 0x24e364: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e360) {
            ctx->pc = 0x24E3B8u;
            goto label_24e3b8;
        }
    }
    ctx->pc = 0x24E368u;
label_24e368:
    // 0x24e368: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24e368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24e36c:
    // 0x24e36c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_24e370:
    // 0x24e370: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x24e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
label_24e374:
    // 0x24e374: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x24e374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e378:
    // 0x24e378: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24e378u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24e37c:
    // 0x24e37c: 0x1000000e  b           . + 4 + (0xE << 2)
label_24e380:
    if (ctx->pc == 0x24E380u) {
        ctx->pc = 0x24E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E37Cu;
        // 0x24e380: 0x24a51750  addiu       $a1, $a1, 0x1750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E384u;
        goto label_24e384;
    }
    ctx->pc = 0x24E37Cu;
    {
        const bool branch_taken_0x24e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E37Cu;
        // 0x24e380: 0x24a51750  addiu       $a1, $a1, 0x1750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e37c) {
            ctx->pc = 0x24E3B8u;
            goto label_24e3b8;
        }
    }
    ctx->pc = 0x24E384u;
label_24e384:
    // 0x24e384: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24e384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24e388:
    // 0x24e388: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24e388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_24e38c:
    // 0x24e38c: 0x24631750  addiu       $v1, $v1, 0x1750
    ctx->pc = 0x24e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5968));
label_24e390:
    // 0x24e390: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x24e390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e394:
    // 0x24e394: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24e394u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24e398:
    // 0x24e398: 0x10000007  b           . + 4 + (0x7 << 2)
label_24e39c:
    if (ctx->pc == 0x24E39Cu) {
        ctx->pc = 0x24E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E398u;
        // 0x24e39c: 0x24a51730  addiu       $a1, $a1, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3A0u;
        goto label_24e3a0;
    }
    ctx->pc = 0x24E398u;
    {
        const bool branch_taken_0x24e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E398u;
        // 0x24e39c: 0x24a51730  addiu       $a1, $a1, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e398) {
            ctx->pc = 0x24E3B8u;
            goto label_24e3b8;
        }
    }
    ctx->pc = 0x24E3A0u;
label_24e3a0:
    // 0x24e3a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24e3a4:
    // 0x24e3a4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_24e3a8:
    // 0x24e3a8: 0x24631720  addiu       $v1, $v1, 0x1720
    ctx->pc = 0x24e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_24e3ac:
    // 0x24e3ac: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x24e3acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e3b0:
    // 0x24e3b0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24e3b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24e3b4:
    // 0x24e3b4: 0x24a51760  addiu       $a1, $a1, 0x1760
    ctx->pc = 0x24e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5984));
label_24e3b8:
    // 0x24e3b8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x24e3b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_24e3bc:
    // 0x24e3bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24e3bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24e3c0:
    // 0x24e3c0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24e3c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_24e3c4:
    // 0x24e3c4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e3c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24e3c8:
    // 0x24e3c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e3c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24e3cc:
    // 0x24e3cc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x24e3ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_24e3d0:
    // 0x24e3d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24e3d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24e3d4:
    // 0x24e3d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24e3d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24e3d8:
    // 0x24e3d8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e3d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24e3dc:
    // 0x24e3dc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e3dcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24e3e0:
    // 0x24e3e0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24e3e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_24e3e4:
    // 0x24e3e4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x24e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_24e3e8:
    // 0x24e3e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x24e3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_24e3ec:
    // 0x24e3ec: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x24e3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_24e3f0:
    // 0x24e3f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24e3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_24e3f4:
    // 0x24e3f4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x24e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_24e3f8:
    // 0x24e3f8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x24e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_24e3fc:
    // 0x24e3fc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x24e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_24e400:
    // 0x24e400: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24e400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_24e404:
    // 0x24e404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24e404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24e408:
    // 0x24e408: 0xc0d3e54  jal         func_34F950
label_24e40c:
    if (ctx->pc == 0x24E40Cu) {
        ctx->pc = 0x24E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E408u;
        // 0x24e40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E410u;
        goto label_24e410;
    }
    ctx->pc = 0x24E408u;
    SET_GPR_U32(ctx, 31, 0x24E410u);
    ctx->pc = 0x24E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E408u;
    // 0x24e40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x24E408u, 0x24E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E410u;
label_24e410:
    // 0x24e410: 0xc0941c2  jal         func_250708
label_24e414:
    if (ctx->pc == 0x24E414u) {
        ctx->pc = 0x24E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E410u;
        // 0x24e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E418u;
        goto label_24e418;
    }
    ctx->pc = 0x24E410u;
    SET_GPR_U32(ctx, 31, 0x24E418u);
    ctx->pc = 0x24E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E410u;
    // 0x24e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x24E410u, 0x24E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E418u;
label_24e418:
    // 0x24e418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e41c:
    // 0x24e41c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_24e420:
    if (ctx->pc == 0x24E420u) {
        ctx->pc = 0x24E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E41Cu;
        // 0x24e420: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E424u;
        goto label_24e424;
    }
    ctx->pc = 0x24E41Cu;
    {
        const bool branch_taken_0x24e41c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E41Cu;
        // 0x24e420: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e41c) {
            ctx->pc = 0x24E444u;
            goto label_24e444;
        }
    }
    ctx->pc = 0x24E424u;
label_24e424:
    // 0x24e424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24e424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e428:
    // 0x24e428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e42c:
    // 0x24e42c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24e42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e430:
    // 0x24e430: 0xc0937d0  jal         func_24DF40
label_24e434:
    if (ctx->pc == 0x24E434u) {
        ctx->pc = 0x24E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E430u;
        // 0x24e434: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E438u;
        goto label_24e438;
    }
    ctx->pc = 0x24E430u;
    SET_GPR_U32(ctx, 31, 0x24E438u);
    ctx->pc = 0x24E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E430u;
    // 0x24e434: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x24E430u, 0x24E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E438u;
label_24e438:
    // 0x24e438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e43c:
    // 0x24e43c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_24e440:
    if (ctx->pc == 0x24E440u) {
        ctx->pc = 0x24E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E43Cu;
        // 0x24e440: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E444u;
        goto label_24e444;
    }
    ctx->pc = 0x24E43Cu;
    {
        const bool branch_taken_0x24e43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E43Cu;
        // 0x24e440: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e43c) {
            ctx->pc = 0x24E458u;
            goto label_24e458;
        }
    }
    ctx->pc = 0x24E444u;
label_24e444:
    // 0x24e444: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24e444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24e448:
    // 0x24e448: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x24e448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_24e44c:
    // 0x24e44c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_24e450:
    if (ctx->pc == 0x24E450u) {
        ctx->pc = 0x24E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E44Cu;
        // 0x24e450: 0x2662d290  addiu       $v0, $s3, -0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E454u;
        goto label_24e454;
    }
    ctx->pc = 0x24E44Cu;
    {
        const bool branch_taken_0x24e44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E44Cu;
        // 0x24e450: 0x2662d290  addiu       $v0, $s3, -0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e44c) {
            ctx->pc = 0x24E270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e270;
        }
    }
    ctx->pc = 0x24E454u;
label_24e454:
    // 0x24e454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24e454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e458:
    // 0x24e458: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x24e458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24e45c:
    // 0x24e45c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x24e45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24e460:
    // 0x24e460: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x24e460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24e464:
    // 0x24e464: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x24e464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24e468:
    // 0x24e468: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24e468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24e46c:
    // 0x24e46c: 0x3e00008  jr          $ra
label_24e470:
    if (ctx->pc == 0x24E470u) {
        ctx->pc = 0x24E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E46Cu;
        // 0x24e470: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E474u;
        goto label_24e474;
    }
    ctx->pc = 0x24E46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E46Cu;
        // 0x24e470: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E474u;
label_24e474:
    // 0x24e474: 0x0  nop
    ctx->pc = 0x24e474u;
    // NOP
    ctx->pc = 0x24e478u;
}
