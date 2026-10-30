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

// Function: sub_003DC4E8
// Address: 0x3dc4e8 - 0x3dc658
void sub_003DC4E8_0x3dc4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC4E8_0x3dc4e8");
#endif

    switch (ctx->pc) {
        case 0x3dc4e8u: goto label_3dc4e8;
        case 0x3dc4ecu: goto label_3dc4ec;
        case 0x3dc4f0u: goto label_3dc4f0;
        case 0x3dc4f4u: goto label_3dc4f4;
        case 0x3dc4f8u: goto label_3dc4f8;
        case 0x3dc4fcu: goto label_3dc4fc;
        case 0x3dc500u: goto label_3dc500;
        case 0x3dc504u: goto label_3dc504;
        case 0x3dc508u: goto label_3dc508;
        case 0x3dc50cu: goto label_3dc50c;
        case 0x3dc510u: goto label_3dc510;
        case 0x3dc514u: goto label_3dc514;
        case 0x3dc518u: goto label_3dc518;
        case 0x3dc51cu: goto label_3dc51c;
        case 0x3dc520u: goto label_3dc520;
        case 0x3dc524u: goto label_3dc524;
        case 0x3dc528u: goto label_3dc528;
        case 0x3dc52cu: goto label_3dc52c;
        case 0x3dc530u: goto label_3dc530;
        case 0x3dc534u: goto label_3dc534;
        case 0x3dc538u: goto label_3dc538;
        case 0x3dc53cu: goto label_3dc53c;
        case 0x3dc540u: goto label_3dc540;
        case 0x3dc544u: goto label_3dc544;
        case 0x3dc548u: goto label_3dc548;
        case 0x3dc54cu: goto label_3dc54c;
        case 0x3dc550u: goto label_3dc550;
        case 0x3dc554u: goto label_3dc554;
        case 0x3dc558u: goto label_3dc558;
        case 0x3dc55cu: goto label_3dc55c;
        case 0x3dc560u: goto label_3dc560;
        case 0x3dc564u: goto label_3dc564;
        case 0x3dc568u: goto label_3dc568;
        case 0x3dc56cu: goto label_3dc56c;
        case 0x3dc570u: goto label_3dc570;
        case 0x3dc574u: goto label_3dc574;
        case 0x3dc578u: goto label_3dc578;
        case 0x3dc57cu: goto label_3dc57c;
        case 0x3dc580u: goto label_3dc580;
        case 0x3dc584u: goto label_3dc584;
        case 0x3dc588u: goto label_3dc588;
        case 0x3dc58cu: goto label_3dc58c;
        case 0x3dc590u: goto label_3dc590;
        case 0x3dc594u: goto label_3dc594;
        case 0x3dc598u: goto label_3dc598;
        case 0x3dc59cu: goto label_3dc59c;
        case 0x3dc5a0u: goto label_3dc5a0;
        case 0x3dc5a4u: goto label_3dc5a4;
        case 0x3dc5a8u: goto label_3dc5a8;
        case 0x3dc5acu: goto label_3dc5ac;
        case 0x3dc5b0u: goto label_3dc5b0;
        case 0x3dc5b4u: goto label_3dc5b4;
        case 0x3dc5b8u: goto label_3dc5b8;
        case 0x3dc5bcu: goto label_3dc5bc;
        case 0x3dc5c0u: goto label_3dc5c0;
        case 0x3dc5c4u: goto label_3dc5c4;
        case 0x3dc5c8u: goto label_3dc5c8;
        case 0x3dc5ccu: goto label_3dc5cc;
        case 0x3dc5d0u: goto label_3dc5d0;
        case 0x3dc5d4u: goto label_3dc5d4;
        case 0x3dc5d8u: goto label_3dc5d8;
        case 0x3dc5dcu: goto label_3dc5dc;
        case 0x3dc5e0u: goto label_3dc5e0;
        case 0x3dc5e4u: goto label_3dc5e4;
        case 0x3dc5e8u: goto label_3dc5e8;
        case 0x3dc5ecu: goto label_3dc5ec;
        case 0x3dc5f0u: goto label_3dc5f0;
        case 0x3dc5f4u: goto label_3dc5f4;
        case 0x3dc5f8u: goto label_3dc5f8;
        case 0x3dc5fcu: goto label_3dc5fc;
        case 0x3dc600u: goto label_3dc600;
        case 0x3dc604u: goto label_3dc604;
        case 0x3dc608u: goto label_3dc608;
        case 0x3dc60cu: goto label_3dc60c;
        case 0x3dc610u: goto label_3dc610;
        case 0x3dc614u: goto label_3dc614;
        case 0x3dc618u: goto label_3dc618;
        case 0x3dc61cu: goto label_3dc61c;
        case 0x3dc620u: goto label_3dc620;
        case 0x3dc624u: goto label_3dc624;
        case 0x3dc628u: goto label_3dc628;
        case 0x3dc62cu: goto label_3dc62c;
        case 0x3dc630u: goto label_3dc630;
        case 0x3dc634u: goto label_3dc634;
        case 0x3dc638u: goto label_3dc638;
        case 0x3dc63cu: goto label_3dc63c;
        case 0x3dc640u: goto label_3dc640;
        case 0x3dc644u: goto label_3dc644;
        case 0x3dc648u: goto label_3dc648;
        case 0x3dc64cu: goto label_3dc64c;
        case 0x3dc650u: goto label_3dc650;
        case 0x3dc654u: goto label_3dc654;
        default: break;
    }

    ctx->pc = 0x3dc4e8u;

label_3dc4e8:
    // 0x3dc4e8: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x3dc4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_3dc4ec:
    // 0x3dc4ec: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3dc4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3dc4f0:
    // 0x3dc4f0: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x3dc4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
label_3dc4f4:
    // 0x3dc4f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dc4f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc4f8:
    // 0x3dc4f8: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3dc4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3dc4fc:
    // 0x3dc4fc: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3dc4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3dc500:
    // 0x3dc500: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3dc500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
label_3dc504:
    // 0x3dc504: 0xe7b40480  swc1        $f20, 0x480($sp)
    ctx->pc = 0x3dc504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3dc508:
    // 0x3dc508: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3dc508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3dc50c:
    // 0x3dc50c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dc50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dc510:
    // 0x3dc510: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dc510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dc514:
    // 0x3dc514: 0x40f809  jalr        $v0
label_3dc518:
    if (ctx->pc == 0x3DC518u) {
        ctx->pc = 0x3DC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC514u;
        // 0x3dc518: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC51Cu;
        goto label_3dc51c;
    }
    ctx->pc = 0x3DC514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC51Cu);
        ctx->pc = 0x3DC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC514u;
        // 0x3dc518: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC514u, 0x3DC51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC51Cu;
label_3dc51c:
    // 0x3dc51c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dc51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc520:
    // 0x3dc520: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dc520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dc524:
    // 0x3dc524: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dc524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dc528:
    // 0x3dc528: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3dc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3dc52c:
    // 0x3dc52c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dc530:
    // 0x3dc530: 0x0  nop
    ctx->pc = 0x3dc530u;
    // NOP
label_3dc534:
    // 0x3dc534: 0x0  nop
    ctx->pc = 0x3dc534u;
    // NOP
label_3dc538:
    // 0x3dc538: 0x0  nop
    ctx->pc = 0x3dc538u;
    // NOP
label_3dc53c:
    // 0x3dc53c: 0x0  nop
    ctx->pc = 0x3dc53cu;
    // NOP
label_3dc540:
    // 0x3dc540: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3dc544:
    if (ctx->pc == 0x3DC544u) {
        ctx->pc = 0x3DC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC540u;
        // 0x3dc544: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC548u;
        goto label_3dc548;
    }
    ctx->pc = 0x3DC540u;
    {
        const bool branch_taken_0x3dc540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC540u;
        // 0x3dc544: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc540) {
            ctx->pc = 0x3DC530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc530;
        }
    }
    ctx->pc = 0x3DC548u;
label_3dc548:
    // 0x3dc548: 0xc138ddc  jal         func_4E3770
label_3dc54c:
    if (ctx->pc == 0x3DC54Cu) {
        ctx->pc = 0x3DC550u;
        goto label_3dc550;
    }
    ctx->pc = 0x3DC548u;
    SET_GPR_U32(ctx, 31, 0x3DC550u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DC548u, 0x3DC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC550u;
label_3dc550:
    // 0x3dc550: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3dc550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dc554:
    // 0x3dc554: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x3dc554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_3dc558:
    // 0x3dc558: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3dc558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3dc55c:
    // 0x3dc55c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3dc55cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc560:
    // 0x3dc560: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3dc560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc564:
    // 0x3dc564: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3dc564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc568:
    // 0x3dc568: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3dc568u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3dc56c:
    // 0x3dc56c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3dc56cu;
    // VWAITQ (Q already resolved in this runtime)
label_3dc570:
    // 0x3dc570: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3dc570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc574:
    // 0x3dc574: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3dc574u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3dc578:
    // 0x3dc578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dc57c:
    // 0x3dc57c: 0x0  nop
    ctx->pc = 0x3dc57cu;
    // NOP
label_3dc580:
    // 0x3dc580: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3dc580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dc584:
    // 0x3dc584: 0x0  nop
    ctx->pc = 0x3dc584u;
    // NOP
label_3dc588:
    // 0x3dc588: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_3dc58c:
    if (ctx->pc == 0x3DC58Cu) {
        ctx->pc = 0x3DC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC588u;
        // 0x3dc58c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC590u;
        goto label_3dc590;
    }
    ctx->pc = 0x3DC588u;
    {
        const bool branch_taken_0x3dc588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC588u;
        // 0x3dc58c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc588) {
            ctx->pc = 0x3DC5B0u;
            goto label_3dc5b0;
        }
    }
    ctx->pc = 0x3DC590u;
label_3dc590:
    // 0x3dc590: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3dc590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3dc594:
    // 0x3dc594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dc594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc598:
    // 0x3dc598: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x3dc598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3dc59c:
    // 0x3dc59c: 0xc136b24  jal         func_4DAC90
label_3dc5a0:
    if (ctx->pc == 0x3DC5A0u) {
        ctx->pc = 0x3DC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC59Cu;
        // 0x3dc5a0: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC5A4u;
        goto label_3dc5a4;
    }
    ctx->pc = 0x3DC59Cu;
    SET_GPR_U32(ctx, 31, 0x3DC5A4u);
    ctx->pc = 0x3DC5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC59Cu;
    // 0x3dc5a0: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DC59Cu, 0x3DC5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC5A4u;
label_3dc5a4:
    // 0x3dc5a4: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3dc5a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3dc5a8:
    // 0x3dc5a8: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x3dc5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_3dc5ac:
    // 0x3dc5ac: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3dc5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3dc5b0:
    // 0x3dc5b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3dc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3dc5b4:
    // 0x3dc5b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3dc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3dc5b8:
    // 0x3dc5b8: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_3dc5bc:
    if (ctx->pc == 0x3DC5BCu) {
        ctx->pc = 0x3DC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5B8u;
        // 0x3dc5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC5C0u;
        goto label_3dc5c0;
    }
    ctx->pc = 0x3DC5B8u;
    {
        const bool branch_taken_0x3dc5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5B8u;
        // 0x3dc5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc5b8) {
            ctx->pc = 0x3DC634u;
            goto label_3dc634;
        }
    }
    ctx->pc = 0x3DC5C0u;
label_3dc5c0:
    // 0x3dc5c0: 0xc0e9694  jal         func_3A5A50
label_3dc5c4:
    if (ctx->pc == 0x3DC5C4u) {
        ctx->pc = 0x3DC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5C0u;
        // 0x3dc5c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC5C8u;
        goto label_3dc5c8;
    }
    ctx->pc = 0x3DC5C0u;
    SET_GPR_U32(ctx, 31, 0x3DC5C8u);
    ctx->pc = 0x3DC5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC5C0u;
    // 0x3dc5c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DC5C0u, 0x3DC5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC5C8u;
label_3dc5c8:
    // 0x3dc5c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3dc5cc:
    if (ctx->pc == 0x3DC5CCu) {
        ctx->pc = 0x3DC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5C8u;
        // 0x3dc5cc: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC5D0u;
        goto label_3dc5d0;
    }
    ctx->pc = 0x3DC5C8u;
    {
        const bool branch_taken_0x3dc5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5C8u;
        // 0x3dc5cc: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc5c8) {
            ctx->pc = 0x3DC5D8u;
            goto label_3dc5d8;
        }
    }
    ctx->pc = 0x3DC5D0u;
label_3dc5d0:
    // 0x3dc5d0: 0x10000018  b           . + 4 + (0x18 << 2)
label_3dc5d4:
    if (ctx->pc == 0x3DC5D4u) {
        ctx->pc = 0x3DC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5D0u;
        // 0x3dc5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC5D8u;
        goto label_3dc5d8;
    }
    ctx->pc = 0x3DC5D0u;
    {
        const bool branch_taken_0x3dc5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5D0u;
        // 0x3dc5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc5d0) {
            ctx->pc = 0x3DC634u;
            goto label_3dc634;
        }
    }
    ctx->pc = 0x3DC5D8u;
label_3dc5d8:
    // 0x3dc5d8: 0x9651006e  lhu         $s1, 0x6E($s2)
    ctx->pc = 0x3dc5d8u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
label_3dc5dc:
    // 0x3dc5dc: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3dc5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3dc5e0:
    // 0x3dc5e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3dc5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc5e4:
    // 0x3dc5e4: 0xc0cd4ee  jal         func_3353B8
label_3dc5e8:
    if (ctx->pc == 0x3DC5E8u) {
        ctx->pc = 0x3DC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5E4u;
        // 0x3dc5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC5ECu;
        goto label_3dc5ec;
    }
    ctx->pc = 0x3DC5E4u;
    SET_GPR_U32(ctx, 31, 0x3DC5ECu);
    ctx->pc = 0x3DC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC5E4u;
    // 0x3dc5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DC5E4u, 0x3DC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC5ECu;
label_3dc5ec:
    // 0x3dc5ec: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3dc5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3dc5f0:
    // 0x3dc5f0: 0xc0e858c  jal         func_3A1630
label_3dc5f4:
    if (ctx->pc == 0x3DC5F4u) {
        ctx->pc = 0x3DC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5F0u;
        // 0x3dc5f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC5F8u;
        goto label_3dc5f8;
    }
    ctx->pc = 0x3DC5F0u;
    SET_GPR_U32(ctx, 31, 0x3DC5F8u);
    ctx->pc = 0x3DC5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC5F0u;
    // 0x3dc5f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DC5F0u, 0x3DC5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC5F8u;
label_3dc5f8:
    // 0x3dc5f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3dc5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3dc5fc:
    // 0x3dc5fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3dc5fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3dc600:
    // 0x3dc600: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dc600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dc604:
    // 0x3dc604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc608:
    // 0x3dc608: 0xc0cd518  jal         func_335460
label_3dc60c:
    if (ctx->pc == 0x3DC60Cu) {
        ctx->pc = 0x3DC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC608u;
        // 0x3dc60c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC610u;
        goto label_3dc610;
    }
    ctx->pc = 0x3DC608u;
    SET_GPR_U32(ctx, 31, 0x3DC610u);
    ctx->pc = 0x3DC60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC608u;
    // 0x3dc60c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DC608u, 0x3DC610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC610u;
label_3dc610:
    // 0x3dc610: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x3dc610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dc614:
    // 0x3dc614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dc614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc618:
    // 0x3dc618: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x3dc618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dc61c:
    // 0x3dc61c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3dc61cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3dc620:
    // 0x3dc620: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3dc620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3dc624:
    // 0x3dc624: 0xe64100c0  swc1        $f1, 0xC0($s2)
    ctx->pc = 0x3dc624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3dc628:
    // 0x3dc628: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3dc628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3dc62c:
    // 0x3dc62c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dc62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3dc630:
    // 0x3dc630: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3dc630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3dc634:
    // 0x3dc634: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3dc634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3dc638:
    // 0x3dc638: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3dc638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3dc63c:
    // 0x3dc63c: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3dc63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3dc640:
    // 0x3dc640: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x3dc640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dc644:
    // 0x3dc644: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3dc644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_3dc648:
    // 0x3dc648: 0xc7b40480  lwc1        $f20, 0x480($sp)
    ctx->pc = 0x3dc648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dc64c:
    // 0x3dc64c: 0x3e00008  jr          $ra
label_3dc650:
    if (ctx->pc == 0x3DC650u) {
        ctx->pc = 0x3DC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC64Cu;
        // 0x3dc650: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC654u;
        goto label_3dc654;
    }
    ctx->pc = 0x3DC64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC64Cu;
        // 0x3dc650: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC654u;
label_3dc654:
    // 0x3dc654: 0x0  nop
    ctx->pc = 0x3dc654u;
    // NOP
    ctx->pc = 0x3dc658u;
}
