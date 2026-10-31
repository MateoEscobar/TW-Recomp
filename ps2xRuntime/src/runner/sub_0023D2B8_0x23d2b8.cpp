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

// Function: sub_0023D2B8
// Address: 0x23d2b8 - 0x23d440
void sub_0023D2B8_0x23d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D2B8_0x23d2b8");
#endif

    switch (ctx->pc) {
        case 0x23d2b8u: goto label_23d2b8;
        case 0x23d2bcu: goto label_23d2bc;
        case 0x23d2c0u: goto label_23d2c0;
        case 0x23d2c4u: goto label_23d2c4;
        case 0x23d2c8u: goto label_23d2c8;
        case 0x23d2ccu: goto label_23d2cc;
        case 0x23d2d0u: goto label_23d2d0;
        case 0x23d2d4u: goto label_23d2d4;
        case 0x23d2d8u: goto label_23d2d8;
        case 0x23d2dcu: goto label_23d2dc;
        case 0x23d2e0u: goto label_23d2e0;
        case 0x23d2e4u: goto label_23d2e4;
        case 0x23d2e8u: goto label_23d2e8;
        case 0x23d2ecu: goto label_23d2ec;
        case 0x23d2f0u: goto label_23d2f0;
        case 0x23d2f4u: goto label_23d2f4;
        case 0x23d2f8u: goto label_23d2f8;
        case 0x23d2fcu: goto label_23d2fc;
        case 0x23d300u: goto label_23d300;
        case 0x23d304u: goto label_23d304;
        case 0x23d308u: goto label_23d308;
        case 0x23d30cu: goto label_23d30c;
        case 0x23d310u: goto label_23d310;
        case 0x23d314u: goto label_23d314;
        case 0x23d318u: goto label_23d318;
        case 0x23d31cu: goto label_23d31c;
        case 0x23d320u: goto label_23d320;
        case 0x23d324u: goto label_23d324;
        case 0x23d328u: goto label_23d328;
        case 0x23d32cu: goto label_23d32c;
        case 0x23d330u: goto label_23d330;
        case 0x23d334u: goto label_23d334;
        case 0x23d338u: goto label_23d338;
        case 0x23d33cu: goto label_23d33c;
        case 0x23d340u: goto label_23d340;
        case 0x23d344u: goto label_23d344;
        case 0x23d348u: goto label_23d348;
        case 0x23d34cu: goto label_23d34c;
        case 0x23d350u: goto label_23d350;
        case 0x23d354u: goto label_23d354;
        case 0x23d358u: goto label_23d358;
        case 0x23d35cu: goto label_23d35c;
        case 0x23d360u: goto label_23d360;
        case 0x23d364u: goto label_23d364;
        case 0x23d368u: goto label_23d368;
        case 0x23d36cu: goto label_23d36c;
        case 0x23d370u: goto label_23d370;
        case 0x23d374u: goto label_23d374;
        case 0x23d378u: goto label_23d378;
        case 0x23d37cu: goto label_23d37c;
        case 0x23d380u: goto label_23d380;
        case 0x23d384u: goto label_23d384;
        case 0x23d388u: goto label_23d388;
        case 0x23d38cu: goto label_23d38c;
        case 0x23d390u: goto label_23d390;
        case 0x23d394u: goto label_23d394;
        case 0x23d398u: goto label_23d398;
        case 0x23d39cu: goto label_23d39c;
        case 0x23d3a0u: goto label_23d3a0;
        case 0x23d3a4u: goto label_23d3a4;
        case 0x23d3a8u: goto label_23d3a8;
        case 0x23d3acu: goto label_23d3ac;
        case 0x23d3b0u: goto label_23d3b0;
        case 0x23d3b4u: goto label_23d3b4;
        case 0x23d3b8u: goto label_23d3b8;
        case 0x23d3bcu: goto label_23d3bc;
        case 0x23d3c0u: goto label_23d3c0;
        case 0x23d3c4u: goto label_23d3c4;
        case 0x23d3c8u: goto label_23d3c8;
        case 0x23d3ccu: goto label_23d3cc;
        case 0x23d3d0u: goto label_23d3d0;
        case 0x23d3d4u: goto label_23d3d4;
        case 0x23d3d8u: goto label_23d3d8;
        case 0x23d3dcu: goto label_23d3dc;
        case 0x23d3e0u: goto label_23d3e0;
        case 0x23d3e4u: goto label_23d3e4;
        case 0x23d3e8u: goto label_23d3e8;
        case 0x23d3ecu: goto label_23d3ec;
        case 0x23d3f0u: goto label_23d3f0;
        case 0x23d3f4u: goto label_23d3f4;
        case 0x23d3f8u: goto label_23d3f8;
        case 0x23d3fcu: goto label_23d3fc;
        case 0x23d400u: goto label_23d400;
        case 0x23d404u: goto label_23d404;
        case 0x23d408u: goto label_23d408;
        case 0x23d40cu: goto label_23d40c;
        case 0x23d410u: goto label_23d410;
        case 0x23d414u: goto label_23d414;
        case 0x23d418u: goto label_23d418;
        case 0x23d41cu: goto label_23d41c;
        case 0x23d420u: goto label_23d420;
        case 0x23d424u: goto label_23d424;
        case 0x23d428u: goto label_23d428;
        case 0x23d42cu: goto label_23d42c;
        case 0x23d430u: goto label_23d430;
        case 0x23d434u: goto label_23d434;
        case 0x23d438u: goto label_23d438;
        case 0x23d43cu: goto label_23d43c;
        default: break;
    }

    ctx->pc = 0x23d2b8u;

label_23d2b8:
    // 0x23d2b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23d2bc:
    // 0x23d2bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x23d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_23d2c0:
    // 0x23d2c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x23d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_23d2c4:
    // 0x23d2c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d2c8:
    // 0x23d2c8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x23d2c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_23d2cc:
    // 0x23d2cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23d2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d2d0:
    // 0x23d2d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23d2d4:
    // 0x23d2d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23d2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d2d8:
    // 0x23d2d8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x23d2d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_23d2dc:
    // 0x23d2dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23d2e0:
    // 0x23d2e0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x23d2e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_23d2e4:
    // 0x23d2e4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x23d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_23d2e8:
    // 0x23d2e8: 0x40f809  jalr        $v0
label_23d2ec:
    if (ctx->pc == 0x23D2ECu) {
        ctx->pc = 0x23D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2E8u;
        // 0x23d2ec: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2F0u;
        goto label_23d2f0;
    }
    ctx->pc = 0x23D2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D2F0u);
        ctx->pc = 0x23D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2E8u;
        // 0x23d2ec: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D2E8u, 0x23D2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D2F0u;
label_23d2f0:
    // 0x23d2f0: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x23d2f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_23d2f4:
    // 0x23d2f4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23d2f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23d2f8:
    // 0x23d2f8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23d2f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23d2fc:
    // 0x23d2fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23d2fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23d300:
    // 0x23d300: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23d300u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23d304:
    // 0x23d304: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23d304u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23d308:
    // 0x23d308: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x23d308u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_23d30c:
    // 0x23d30c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x23d30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_23d310:
    // 0x23d310: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x23d310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_23d314:
    // 0x23d314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d318:
    // 0x23d318: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23d318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23d31c:
    // 0x23d31c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x23d31cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23d320:
    // 0x23d320: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23d320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23d324:
    // 0x23d324: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23d324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23d328:
    // 0x23d328: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x23d328u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_23d32c:
    // 0x23d32c: 0x4a0003bf  vwaitq
    ctx->pc = 0x23d32cu;
    // VWAITQ (Q already resolved in this runtime)
label_23d330:
    // 0x23d330: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x23d330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23d334:
    // 0x23d334: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x23d334u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_23d338:
    // 0x23d338: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23d338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_23d33c:
    // 0x23d33c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x23d33cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23d340:
    // 0x23d340: 0x0  nop
    ctx->pc = 0x23d340u;
    // NOP
label_23d344:
    // 0x23d344: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d348:
    // 0x23d348: 0x0  nop
    ctx->pc = 0x23d348u;
    // NOP
label_23d34c:
    // 0x23d34c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_23d350:
    if (ctx->pc == 0x23D350u) {
        ctx->pc = 0x23D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D34Cu;
        // 0x23d350: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D354u;
        goto label_23d354;
    }
    ctx->pc = 0x23D34Cu;
    {
        const bool branch_taken_0x23d34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D34Cu;
        // 0x23d350: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d34c) {
            ctx->pc = 0x23D364u;
            goto label_23d364;
        }
    }
    ctx->pc = 0x23D354u;
label_23d354:
    // 0x23d354: 0x7e030310  sq          $v1, 0x310($s0)
    ctx->pc = 0x23d354u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 784), GPR_VEC(ctx, 3));
label_23d358:
    // 0x23d358: 0xa2000331  sb          $zero, 0x331($s0)
    ctx->pc = 0x23d358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 0));
label_23d35c:
    // 0x23d35c: 0x10000032  b           . + 4 + (0x32 << 2)
label_23d360:
    if (ctx->pc == 0x23D360u) {
        ctx->pc = 0x23D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D35Cu;
        // 0x23d360: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D364u;
        goto label_23d364;
    }
    ctx->pc = 0x23D35Cu;
    {
        const bool branch_taken_0x23d35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D35Cu;
        // 0x23d360: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d35c) {
            ctx->pc = 0x23D428u;
            goto label_23d428;
        }
    }
    ctx->pc = 0x23D364u;
label_23d364:
    // 0x23d364: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x23d364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
label_23d368:
    // 0x23d368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d36c:
    // 0x23d36c: 0x0  nop
    ctx->pc = 0x23d36cu;
    // NOP
label_23d370:
    // 0x23d370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d374:
    // 0x23d374: 0x0  nop
    ctx->pc = 0x23d374u;
    // NOP
label_23d378:
    // 0x23d378: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
label_23d37c:
    if (ctx->pc == 0x23D37Cu) {
        ctx->pc = 0x23D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D378u;
        // 0x23d37c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D380u;
        goto label_23d380;
    }
    ctx->pc = 0x23D378u;
    {
        const bool branch_taken_0x23d378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d378) {
            ctx->pc = 0x23D37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D378u;
            // 0x23d37c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D42Cu;
            goto label_23d42c;
        }
    }
    ctx->pc = 0x23D380u;
label_23d380:
    // 0x23d380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23d380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23d384:
    // 0x23d384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d388:
    // 0x23d388: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x23d388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_23d38c:
    // 0x23d38c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x23d38cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_23d390:
    // 0x23d390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23d394:
    // 0x23d394: 0x0  nop
    ctx->pc = 0x23d394u;
    // NOP
label_23d398:
    // 0x23d398: 0x0  nop
    ctx->pc = 0x23d398u;
    // NOP
label_23d39c:
    // 0x23d39c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x23d39cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_23d3a0:
    // 0x23d3a0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x23d3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d3a4:
    // 0x23d3a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x23d3a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_23d3a8:
    // 0x23d3a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23d3a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23d3ac:
    // 0x23d3ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23d3acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23d3b0:
    // 0x23d3b0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23d3b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d3b4:
    // 0x23d3b4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23d3b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_23d3b8:
    // 0x23d3b8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23d3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_23d3bc:
    // 0x23d3bc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_23d3c0:
    if (ctx->pc == 0x23D3C0u) {
        ctx->pc = 0x23D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3BCu;
        // 0x23d3c0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3C4u;
        goto label_23d3c4;
    }
    ctx->pc = 0x23D3BCu;
    {
        const bool branch_taken_0x23d3bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3BCu;
        // 0x23d3c0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3bc) {
            ctx->pc = 0x23D40Cu;
            goto label_23d40c;
        }
    }
    ctx->pc = 0x23D3C4u;
label_23d3c4:
    // 0x23d3c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23d3c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23d3c8:
    // 0x23d3c8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x23d3c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23d3cc:
    // 0x23d3cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23d3ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23d3d0:
    // 0x23d3d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23d3d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23d3d4:
    // 0x23d3d4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x23d3d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_23d3d8:
    // 0x23d3d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x23d3d8u;
    // VWAITQ (Q already resolved in this runtime)
label_23d3dc:
    // 0x23d3dc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x23d3dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23d3e0:
    // 0x23d3e0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x23d3e0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_23d3e4:
    // 0x23d3e4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x23d3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_23d3e8:
    // 0x23d3e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23d3ec:
    // 0x23d3ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23d3ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d3f0:
    // 0x23d3f0: 0x0  nop
    ctx->pc = 0x23d3f0u;
    // NOP
label_23d3f4:
    // 0x23d3f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d3f8:
    // 0x23d3f8: 0x0  nop
    ctx->pc = 0x23d3f8u;
    // NOP
label_23d3fc:
    // 0x23d3fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_23d400:
    if (ctx->pc == 0x23D400u) {
        ctx->pc = 0x23D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3FCu;
        // 0x23d400: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D404u;
        goto label_23d404;
    }
    ctx->pc = 0x23D3FCu;
    {
        const bool branch_taken_0x23d3fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3FCu;
        // 0x23d400: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3fc) {
            ctx->pc = 0x23D410u;
            goto label_23d410;
        }
    }
    ctx->pc = 0x23D404u;
label_23d404:
    // 0x23d404: 0x10000008  b           . + 4 + (0x8 << 2)
label_23d408:
    if (ctx->pc == 0x23D408u) {
        ctx->pc = 0x23D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D404u;
        // 0x23d408: 0xa2000331  sb          $zero, 0x331($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D40Cu;
        goto label_23d40c;
    }
    ctx->pc = 0x23D404u;
    {
        const bool branch_taken_0x23d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D404u;
        // 0x23d408: 0xa2000331  sb          $zero, 0x331($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d404) {
            ctx->pc = 0x23D428u;
            goto label_23d428;
        }
    }
    ctx->pc = 0x23D40Cu;
label_23d40c:
    // 0x23d40c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x23d40cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23d410:
    // 0x23d410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d414:
    // 0x23d414: 0x7e0202e0  sq          $v0, 0x2E0($s0)
    ctx->pc = 0x23d414u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), GPR_VEC(ctx, 2));
label_23d418:
    // 0x23d418: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x23d418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_23d41c:
    // 0x23d41c: 0xa2040331  sb          $a0, 0x331($s0)
    ctx->pc = 0x23d41cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 4));
label_23d420:
    // 0x23d420: 0x7e030310  sq          $v1, 0x310($s0)
    ctx->pc = 0x23d420u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 784), GPR_VEC(ctx, 3));
label_23d424:
    // 0x23d424: 0xe6140300  swc1        $f20, 0x300($s0)
    ctx->pc = 0x23d424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_23d428:
    // 0x23d428: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x23d428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23d42c:
    // 0x23d42c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23d42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23d430:
    // 0x23d430: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23d430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23d434:
    // 0x23d434: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x23d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23d438:
    // 0x23d438: 0x3e00008  jr          $ra
label_23d43c:
    if (ctx->pc == 0x23D43Cu) {
        ctx->pc = 0x23D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D438u;
        // 0x23d43c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D440u;
        goto label_fallthrough_0x23d438;
    }
    ctx->pc = 0x23D438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D438u;
        // 0x23d43c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23d438:
    ctx->pc = 0x23D440u;
}
