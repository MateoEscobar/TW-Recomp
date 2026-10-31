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

// Function: sub_00395330
// Address: 0x395330 - 0x395498
void sub_00395330_0x395330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395330_0x395330");
#endif

    switch (ctx->pc) {
        case 0x395330u: goto label_395330;
        case 0x395334u: goto label_395334;
        case 0x395338u: goto label_395338;
        case 0x39533cu: goto label_39533c;
        case 0x395340u: goto label_395340;
        case 0x395344u: goto label_395344;
        case 0x395348u: goto label_395348;
        case 0x39534cu: goto label_39534c;
        case 0x395350u: goto label_395350;
        case 0x395354u: goto label_395354;
        case 0x395358u: goto label_395358;
        case 0x39535cu: goto label_39535c;
        case 0x395360u: goto label_395360;
        case 0x395364u: goto label_395364;
        case 0x395368u: goto label_395368;
        case 0x39536cu: goto label_39536c;
        case 0x395370u: goto label_395370;
        case 0x395374u: goto label_395374;
        case 0x395378u: goto label_395378;
        case 0x39537cu: goto label_39537c;
        case 0x395380u: goto label_395380;
        case 0x395384u: goto label_395384;
        case 0x395388u: goto label_395388;
        case 0x39538cu: goto label_39538c;
        case 0x395390u: goto label_395390;
        case 0x395394u: goto label_395394;
        case 0x395398u: goto label_395398;
        case 0x39539cu: goto label_39539c;
        case 0x3953a0u: goto label_3953a0;
        case 0x3953a4u: goto label_3953a4;
        case 0x3953a8u: goto label_3953a8;
        case 0x3953acu: goto label_3953ac;
        case 0x3953b0u: goto label_3953b0;
        case 0x3953b4u: goto label_3953b4;
        case 0x3953b8u: goto label_3953b8;
        case 0x3953bcu: goto label_3953bc;
        case 0x3953c0u: goto label_3953c0;
        case 0x3953c4u: goto label_3953c4;
        case 0x3953c8u: goto label_3953c8;
        case 0x3953ccu: goto label_3953cc;
        case 0x3953d0u: goto label_3953d0;
        case 0x3953d4u: goto label_3953d4;
        case 0x3953d8u: goto label_3953d8;
        case 0x3953dcu: goto label_3953dc;
        case 0x3953e0u: goto label_3953e0;
        case 0x3953e4u: goto label_3953e4;
        case 0x3953e8u: goto label_3953e8;
        case 0x3953ecu: goto label_3953ec;
        case 0x3953f0u: goto label_3953f0;
        case 0x3953f4u: goto label_3953f4;
        case 0x3953f8u: goto label_3953f8;
        case 0x3953fcu: goto label_3953fc;
        case 0x395400u: goto label_395400;
        case 0x395404u: goto label_395404;
        case 0x395408u: goto label_395408;
        case 0x39540cu: goto label_39540c;
        case 0x395410u: goto label_395410;
        case 0x395414u: goto label_395414;
        case 0x395418u: goto label_395418;
        case 0x39541cu: goto label_39541c;
        case 0x395420u: goto label_395420;
        case 0x395424u: goto label_395424;
        case 0x395428u: goto label_395428;
        case 0x39542cu: goto label_39542c;
        case 0x395430u: goto label_395430;
        case 0x395434u: goto label_395434;
        case 0x395438u: goto label_395438;
        case 0x39543cu: goto label_39543c;
        case 0x395440u: goto label_395440;
        case 0x395444u: goto label_395444;
        case 0x395448u: goto label_395448;
        case 0x39544cu: goto label_39544c;
        case 0x395450u: goto label_395450;
        case 0x395454u: goto label_395454;
        case 0x395458u: goto label_395458;
        case 0x39545cu: goto label_39545c;
        case 0x395460u: goto label_395460;
        case 0x395464u: goto label_395464;
        case 0x395468u: goto label_395468;
        case 0x39546cu: goto label_39546c;
        case 0x395470u: goto label_395470;
        case 0x395474u: goto label_395474;
        case 0x395478u: goto label_395478;
        case 0x39547cu: goto label_39547c;
        case 0x395480u: goto label_395480;
        case 0x395484u: goto label_395484;
        case 0x395488u: goto label_395488;
        case 0x39548cu: goto label_39548c;
        case 0x395490u: goto label_395490;
        case 0x395494u: goto label_395494;
        default: break;
    }

    ctx->pc = 0x395330u;

label_395330:
    // 0x395330: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x395330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_395334:
    // 0x395334: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x395334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_395338:
    // 0x395338: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x395338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_39533c:
    // 0x39533c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39533cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395340:
    // 0x395340: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x395340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_395344:
    // 0x395344: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x395344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_395348:
    // 0x395348: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x395348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_39534c:
    // 0x39534c: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
label_395350:
    if (ctx->pc == 0x395350u) {
        ctx->pc = 0x395350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39534Cu;
        // 0x395350: 0xa2400108  sb          $zero, 0x108($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395354u;
        goto label_395354;
    }
    ctx->pc = 0x39534Cu;
    {
        const bool branch_taken_0x39534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39534c) {
            ctx->pc = 0x395350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39534Cu;
            // 0x395350: 0xa2400108  sb          $zero, 0x108($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395480u;
            goto label_395480;
        }
    }
    ctx->pc = 0x395354u;
label_395354:
    // 0x395354: 0x92420108  lbu         $v0, 0x108($s2)
    ctx->pc = 0x395354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 264)));
label_395358:
    // 0x395358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x395358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39535c:
    // 0x39535c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_395360:
    if (ctx->pc == 0x395360u) {
        ctx->pc = 0x395360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39535Cu;
        // 0x395360: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395364u;
        goto label_395364;
    }
    ctx->pc = 0x39535Cu;
    {
        const bool branch_taken_0x39535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39535Cu;
        // 0x395360: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39535c) {
            ctx->pc = 0x39542Cu;
            goto label_39542c;
        }
    }
    ctx->pc = 0x395364u;
label_395364:
    // 0x395364: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x395364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_395368:
    // 0x395368: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x395368u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_39536c:
    // 0x39536c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x39536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_395370:
    // 0x395370: 0x60f809  jalr        $v1
label_395374:
    if (ctx->pc == 0x395374u) {
        ctx->pc = 0x395374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395370u;
        // 0x395374: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395378u;
        goto label_395378;
    }
    ctx->pc = 0x395370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x395378u);
        ctx->pc = 0x395374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395370u;
        // 0x395374: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395370u, 0x395378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395378u;
label_395378:
    // 0x395378: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x395378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39537c:
    // 0x39537c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x39537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_395380:
    // 0x395380: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x395380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_395384:
    // 0x395384: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x395384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_395388:
    // 0x395388: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x395388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39538c:
    // 0x39538c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39538cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_395390:
    // 0x395390: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x395390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_395394:
    // 0x395394: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x395394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_395398:
    // 0x395398: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x395398u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_39539c:
    // 0x39539c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x39539cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3953a0:
    // 0x3953a0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3953a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3953a4:
    // 0x3953a4: 0x0  nop
    ctx->pc = 0x3953a4u;
    // NOP
label_3953a8:
    // 0x3953a8: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x3953a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3953ac:
    // 0x3953ac: 0x0  nop
    ctx->pc = 0x3953acu;
    // NOP
label_3953b0:
    // 0x3953b0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_3953b4:
    if (ctx->pc == 0x3953B4u) {
        ctx->pc = 0x3953B8u;
        goto label_3953b8;
    }
    ctx->pc = 0x3953B0u;
    {
        const bool branch_taken_0x3953b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3953b0) {
            ctx->pc = 0x3953D8u;
            goto label_3953d8;
        }
    }
    ctx->pc = 0x3953B8u;
label_3953b8:
    // 0x3953b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3953b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3953bc:
    // 0x3953bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3953bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3953c0:
    // 0x3953c0: 0x0  nop
    ctx->pc = 0x3953c0u;
    // NOP
label_3953c4:
    // 0x3953c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3953c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3953c8:
    // 0x3953c8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3953c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3953cc:
    // 0x3953cc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3953ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3953d0:
    // 0x3953d0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3953d4:
    if (ctx->pc == 0x3953D4u) {
        ctx->pc = 0x3953D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953D0u;
        // 0x3953d4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3953D8u;
        goto label_3953d8;
    }
    ctx->pc = 0x3953D0u;
    {
        const bool branch_taken_0x3953d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3953D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953D0u;
        // 0x3953d4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3953d0) {
            ctx->pc = 0x395408u;
            goto label_395408;
        }
    }
    ctx->pc = 0x3953D8u;
label_3953d8:
    // 0x3953d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3953d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3953dc:
    // 0x3953dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3953dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3953e0:
    // 0x3953e0: 0x0  nop
    ctx->pc = 0x3953e0u;
    // NOP
label_3953e4:
    // 0x3953e4: 0x0  nop
    ctx->pc = 0x3953e4u;
    // NOP
label_3953e8:
    // 0x3953e8: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x3953e8u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[2]);
label_3953ec:
    // 0x3953ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3953ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3953f0:
    // 0x3953f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3953f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3953f4:
    // 0x3953f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3953f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3953f8:
    // 0x3953f8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x3953f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3953fc:
    // 0x3953fc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3953fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_395400:
    // 0x395400: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x395400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_395404:
    // 0x395404: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x395404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_395408:
    // 0x395408: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x395408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39540c:
    // 0x39540c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39540cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_395410:
    // 0x395410: 0xc0cda02  jal         func_336808
label_395414:
    if (ctx->pc == 0x395414u) {
        ctx->pc = 0x395414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395410u;
        // 0x395414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395418u;
        goto label_395418;
    }
    ctx->pc = 0x395410u;
    SET_GPR_U32(ctx, 31, 0x395418u);
    ctx->pc = 0x395414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395410u;
    // 0x395414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336808u, 0x395410u, 0x395418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395418u;
label_395418:
    // 0x395418: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x395418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_39541c:
    // 0x39541c: 0xc0601f8  jal         func_1807E0
label_395420:
    if (ctx->pc == 0x395420u) {
        ctx->pc = 0x395420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39541Cu;
        // 0x395420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395424u;
        goto label_395424;
    }
    ctx->pc = 0x39541Cu;
    SET_GPR_U32(ctx, 31, 0x395424u);
    ctx->pc = 0x395420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39541Cu;
    // 0x395420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1807E0u, 0x39541Cu, 0x395424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395424u;
label_395424:
    // 0x395424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x395424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395428:
    // 0x395428: 0xa2420108  sb          $v0, 0x108($s2)
    ctx->pc = 0x395428u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 2));
label_39542c:
    // 0x39542c: 0x92420108  lbu         $v0, 0x108($s2)
    ctx->pc = 0x39542cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 264)));
label_395430:
    // 0x395430: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x395430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_395434:
    // 0x395434: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_395438:
    if (ctx->pc == 0x395438u) {
        ctx->pc = 0x395438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395434u;
        // 0x395438: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39543Cu;
        goto label_39543c;
    }
    ctx->pc = 0x395434u;
    {
        const bool branch_taken_0x395434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395434u;
        // 0x395438: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395434) {
            ctx->pc = 0x39547Cu;
            goto label_39547c;
        }
    }
    ctx->pc = 0x39543Cu;
label_39543c:
    // 0x39543c: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x39543cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_395440:
    // 0x395440: 0xc0e85a2  jal         func_3A1688
label_395444:
    if (ctx->pc == 0x395444u) {
        ctx->pc = 0x395444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395440u;
        // 0x395444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395448u;
        goto label_395448;
    }
    ctx->pc = 0x395440u;
    SET_GPR_U32(ctx, 31, 0x395448u);
    ctx->pc = 0x395444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395440u;
    // 0x395444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x395440u, 0x395448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395448u;
label_395448:
    // 0x395448: 0x8e4400c8  lw          $a0, 0xC8($s2)
    ctx->pc = 0x395448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_39544c:
    // 0x39544c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39544cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395450:
    // 0x395450: 0x8e4500cc  lw          $a1, 0xCC($s2)
    ctx->pc = 0x395450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_395454:
    // 0x395454: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x395454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_395458:
    // 0x395458: 0xc64d0064  lwc1        $f13, 0x64($s2)
    ctx->pc = 0x395458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_39545c:
    // 0x39545c: 0xc0ce090  jal         func_338240
label_395460:
    if (ctx->pc == 0x395460u) {
        ctx->pc = 0x395460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39545Cu;
        // 0x395460: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395464u;
        goto label_395464;
    }
    ctx->pc = 0x39545Cu;
    SET_GPR_U32(ctx, 31, 0x395464u);
    ctx->pc = 0x395460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39545Cu;
    // 0x395460: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x338240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338240u, 0x39545Cu, 0x395464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395464u;
label_395464:
    // 0x395464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395468:
    // 0x395468: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x395468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_39546c:
    // 0x39546c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x39546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_395470:
    // 0x395470: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_395474:
    if (ctx->pc == 0x395474u) {
        ctx->pc = 0x395474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395470u;
        // 0x395474: 0xac440024  sw          $a0, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395478u;
        goto label_395478;
    }
    ctx->pc = 0x395470u;
    {
        const bool branch_taken_0x395470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395470u;
        // 0x395474: 0xac440024  sw          $a0, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395470) {
            ctx->pc = 0x39547Cu;
            goto label_39547c;
        }
    }
    ctx->pc = 0x395478u;
label_395478:
    // 0x395478: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x395478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_39547c:
    // 0x39547c: 0xa2400108  sb          $zero, 0x108($s2)
    ctx->pc = 0x39547cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 0));
label_395480:
    // 0x395480: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x395480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_395484:
    // 0x395484: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x395484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_395488:
    // 0x395488: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x395488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39548c:
    // 0x39548c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x39548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_395490:
    // 0x395490: 0x3e00008  jr          $ra
label_395494:
    if (ctx->pc == 0x395494u) {
        ctx->pc = 0x395494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395490u;
        // 0x395494: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395498u;
        goto label_fallthrough_0x395490;
    }
    ctx->pc = 0x395490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395490u;
        // 0x395494: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x395490:
    ctx->pc = 0x395498u;
}
