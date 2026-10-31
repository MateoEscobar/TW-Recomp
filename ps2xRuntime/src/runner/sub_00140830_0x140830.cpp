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

// Function: sub_00140830
// Address: 0x140830 - 0x140ad0
void sub_00140830_0x140830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140830_0x140830");
#endif

    switch (ctx->pc) {
        case 0x140830u: goto label_140830;
        case 0x140834u: goto label_140834;
        case 0x140838u: goto label_140838;
        case 0x14083cu: goto label_14083c;
        case 0x140840u: goto label_140840;
        case 0x140844u: goto label_140844;
        case 0x140848u: goto label_140848;
        case 0x14084cu: goto label_14084c;
        case 0x140850u: goto label_140850;
        case 0x140854u: goto label_140854;
        case 0x140858u: goto label_140858;
        case 0x14085cu: goto label_14085c;
        case 0x140860u: goto label_140860;
        case 0x140864u: goto label_140864;
        case 0x140868u: goto label_140868;
        case 0x14086cu: goto label_14086c;
        case 0x140870u: goto label_140870;
        case 0x140874u: goto label_140874;
        case 0x140878u: goto label_140878;
        case 0x14087cu: goto label_14087c;
        case 0x140880u: goto label_140880;
        case 0x140884u: goto label_140884;
        case 0x140888u: goto label_140888;
        case 0x14088cu: goto label_14088c;
        case 0x140890u: goto label_140890;
        case 0x140894u: goto label_140894;
        case 0x140898u: goto label_140898;
        case 0x14089cu: goto label_14089c;
        case 0x1408a0u: goto label_1408a0;
        case 0x1408a4u: goto label_1408a4;
        case 0x1408a8u: goto label_1408a8;
        case 0x1408acu: goto label_1408ac;
        case 0x1408b0u: goto label_1408b0;
        case 0x1408b4u: goto label_1408b4;
        case 0x1408b8u: goto label_1408b8;
        case 0x1408bcu: goto label_1408bc;
        case 0x1408c0u: goto label_1408c0;
        case 0x1408c4u: goto label_1408c4;
        case 0x1408c8u: goto label_1408c8;
        case 0x1408ccu: goto label_1408cc;
        case 0x1408d0u: goto label_1408d0;
        case 0x1408d4u: goto label_1408d4;
        case 0x1408d8u: goto label_1408d8;
        case 0x1408dcu: goto label_1408dc;
        case 0x1408e0u: goto label_1408e0;
        case 0x1408e4u: goto label_1408e4;
        case 0x1408e8u: goto label_1408e8;
        case 0x1408ecu: goto label_1408ec;
        case 0x1408f0u: goto label_1408f0;
        case 0x1408f4u: goto label_1408f4;
        case 0x1408f8u: goto label_1408f8;
        case 0x1408fcu: goto label_1408fc;
        case 0x140900u: goto label_140900;
        case 0x140904u: goto label_140904;
        case 0x140908u: goto label_140908;
        case 0x14090cu: goto label_14090c;
        case 0x140910u: goto label_140910;
        case 0x140914u: goto label_140914;
        case 0x140918u: goto label_140918;
        case 0x14091cu: goto label_14091c;
        case 0x140920u: goto label_140920;
        case 0x140924u: goto label_140924;
        case 0x140928u: goto label_140928;
        case 0x14092cu: goto label_14092c;
        case 0x140930u: goto label_140930;
        case 0x140934u: goto label_140934;
        case 0x140938u: goto label_140938;
        case 0x14093cu: goto label_14093c;
        case 0x140940u: goto label_140940;
        case 0x140944u: goto label_140944;
        case 0x140948u: goto label_140948;
        case 0x14094cu: goto label_14094c;
        case 0x140950u: goto label_140950;
        case 0x140954u: goto label_140954;
        case 0x140958u: goto label_140958;
        case 0x14095cu: goto label_14095c;
        case 0x140960u: goto label_140960;
        case 0x140964u: goto label_140964;
        case 0x140968u: goto label_140968;
        case 0x14096cu: goto label_14096c;
        case 0x140970u: goto label_140970;
        case 0x140974u: goto label_140974;
        case 0x140978u: goto label_140978;
        case 0x14097cu: goto label_14097c;
        case 0x140980u: goto label_140980;
        case 0x140984u: goto label_140984;
        case 0x140988u: goto label_140988;
        case 0x14098cu: goto label_14098c;
        case 0x140990u: goto label_140990;
        case 0x140994u: goto label_140994;
        case 0x140998u: goto label_140998;
        case 0x14099cu: goto label_14099c;
        case 0x1409a0u: goto label_1409a0;
        case 0x1409a4u: goto label_1409a4;
        case 0x1409a8u: goto label_1409a8;
        case 0x1409acu: goto label_1409ac;
        case 0x1409b0u: goto label_1409b0;
        case 0x1409b4u: goto label_1409b4;
        case 0x1409b8u: goto label_1409b8;
        case 0x1409bcu: goto label_1409bc;
        case 0x1409c0u: goto label_1409c0;
        case 0x1409c4u: goto label_1409c4;
        case 0x1409c8u: goto label_1409c8;
        case 0x1409ccu: goto label_1409cc;
        case 0x1409d0u: goto label_1409d0;
        case 0x1409d4u: goto label_1409d4;
        case 0x1409d8u: goto label_1409d8;
        case 0x1409dcu: goto label_1409dc;
        case 0x1409e0u: goto label_1409e0;
        case 0x1409e4u: goto label_1409e4;
        case 0x1409e8u: goto label_1409e8;
        case 0x1409ecu: goto label_1409ec;
        case 0x1409f0u: goto label_1409f0;
        case 0x1409f4u: goto label_1409f4;
        case 0x1409f8u: goto label_1409f8;
        case 0x1409fcu: goto label_1409fc;
        case 0x140a00u: goto label_140a00;
        case 0x140a04u: goto label_140a04;
        case 0x140a08u: goto label_140a08;
        case 0x140a0cu: goto label_140a0c;
        case 0x140a10u: goto label_140a10;
        case 0x140a14u: goto label_140a14;
        case 0x140a18u: goto label_140a18;
        case 0x140a1cu: goto label_140a1c;
        case 0x140a20u: goto label_140a20;
        case 0x140a24u: goto label_140a24;
        case 0x140a28u: goto label_140a28;
        case 0x140a2cu: goto label_140a2c;
        case 0x140a30u: goto label_140a30;
        case 0x140a34u: goto label_140a34;
        case 0x140a38u: goto label_140a38;
        case 0x140a3cu: goto label_140a3c;
        case 0x140a40u: goto label_140a40;
        case 0x140a44u: goto label_140a44;
        case 0x140a48u: goto label_140a48;
        case 0x140a4cu: goto label_140a4c;
        case 0x140a50u: goto label_140a50;
        case 0x140a54u: goto label_140a54;
        case 0x140a58u: goto label_140a58;
        case 0x140a5cu: goto label_140a5c;
        case 0x140a60u: goto label_140a60;
        case 0x140a64u: goto label_140a64;
        case 0x140a68u: goto label_140a68;
        case 0x140a6cu: goto label_140a6c;
        case 0x140a70u: goto label_140a70;
        case 0x140a74u: goto label_140a74;
        case 0x140a78u: goto label_140a78;
        case 0x140a7cu: goto label_140a7c;
        case 0x140a80u: goto label_140a80;
        case 0x140a84u: goto label_140a84;
        case 0x140a88u: goto label_140a88;
        case 0x140a8cu: goto label_140a8c;
        case 0x140a90u: goto label_140a90;
        case 0x140a94u: goto label_140a94;
        case 0x140a98u: goto label_140a98;
        case 0x140a9cu: goto label_140a9c;
        case 0x140aa0u: goto label_140aa0;
        case 0x140aa4u: goto label_140aa4;
        case 0x140aa8u: goto label_140aa8;
        case 0x140aacu: goto label_140aac;
        case 0x140ab0u: goto label_140ab0;
        case 0x140ab4u: goto label_140ab4;
        case 0x140ab8u: goto label_140ab8;
        case 0x140abcu: goto label_140abc;
        case 0x140ac0u: goto label_140ac0;
        case 0x140ac4u: goto label_140ac4;
        case 0x140ac8u: goto label_140ac8;
        case 0x140accu: goto label_140acc;
        default: break;
    }

    ctx->pc = 0x140830u;

label_140830:
    // 0x140830: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x140830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_140834:
    // 0x140834: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x140834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_140838:
    // 0x140838: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x140838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_14083c:
    // 0x14083c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x14083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_140840:
    // 0x140840: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x140840u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_140844:
    // 0x140844: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x140844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_140848:
    // 0x140848: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x140848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_14084c:
    // 0x14084c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14084cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140850:
    // 0x140850: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x140850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_140854:
    // 0x140854: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x140854u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140858:
    // 0x140858: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x140858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_14085c:
    // 0x14085c: 0x26720320  addiu       $s2, $s3, 0x320
    ctx->pc = 0x14085cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_140860:
    // 0x140860: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x140860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_140864:
    // 0x140864: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x140864u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140868:
    // 0x140868: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x140868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14086c:
    // 0x14086c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x14086cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_140870:
    // 0x140870: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x140870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_140874:
    // 0x140874: 0x40f809  jalr        $v0
label_140878:
    if (ctx->pc == 0x140878u) {
        ctx->pc = 0x140878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140874u;
        // 0x140878: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14087Cu;
        goto label_14087c;
    }
    ctx->pc = 0x140874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14087Cu);
        ctx->pc = 0x140878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140874u;
        // 0x140878: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140874u, 0x14087Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14087Cu;
label_14087c:
    // 0x14087c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_140880:
    // 0x140880: 0xc0cd8ec  jal         func_3363B0
label_140884:
    if (ctx->pc == 0x140884u) {
        ctx->pc = 0x140884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140880u;
        // 0x140884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140888u;
        goto label_140888;
    }
    ctx->pc = 0x140880u;
    SET_GPR_U32(ctx, 31, 0x140888u);
    ctx->pc = 0x140884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140880u;
    // 0x140884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x140880u, 0x140888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140888u;
label_140888:
    // 0x140888: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x140888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14088c:
    // 0x14088c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14088cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_140890:
    // 0x140890: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140894:
    // 0x140894: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x140894u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_140898:
    // 0x140898: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x140898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_14089c:
    // 0x14089c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x14089cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1408a0:
    // 0x1408a0: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x1408a0u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1408a4:
    // 0x1408a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1408a4u;
    // VWAITQ (Q already resolved in this runtime)
label_1408a8:
    // 0x1408a8: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x1408a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1408ac:
    // 0x1408ac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1408acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1408b0:
    // 0x1408b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1408b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1408b4:
    // 0x1408b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1408b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1408b8:
    // 0x1408b8: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1408b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1408bc:
    // 0x1408bc: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1408bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1408c0:
    // 0x1408c0: 0x40f809  jalr        $v0
label_1408c4:
    if (ctx->pc == 0x1408C4u) {
        ctx->pc = 0x1408C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408C0u;
        // 0x1408c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408C8u;
        goto label_1408c8;
    }
    ctx->pc = 0x1408C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1408C8u);
        ctx->pc = 0x1408C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408C0u;
        // 0x1408c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1408C0u, 0x1408C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1408C8u;
label_1408c8:
    // 0x1408c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1408c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1408cc:
    // 0x1408cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1408ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1408d0:
    // 0x1408d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1408d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1408d4:
    // 0x1408d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1408d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1408d8:
    // 0x1408d8: 0xc136b24  jal         func_4DAC90
label_1408dc:
    if (ctx->pc == 0x1408DCu) {
        ctx->pc = 0x1408DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408D8u;
        // 0x1408dc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408E0u;
        goto label_1408e0;
    }
    ctx->pc = 0x1408D8u;
    SET_GPR_U32(ctx, 31, 0x1408E0u);
    ctx->pc = 0x1408DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1408D8u;
    // 0x1408dc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1408D8u, 0x1408E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408E0u;
label_1408e0:
    // 0x1408e0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1408e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1408e4:
    // 0x1408e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1408e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1408e8:
    // 0x1408e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1408e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1408ec:
    // 0x1408ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1408ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1408f0:
    // 0x1408f0: 0xc136b18  jal         func_4DAC60
label_1408f4:
    if (ctx->pc == 0x1408F4u) {
        ctx->pc = 0x1408F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408F0u;
        // 0x1408f4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408F8u;
        goto label_1408f8;
    }
    ctx->pc = 0x1408F0u;
    SET_GPR_U32(ctx, 31, 0x1408F8u);
    ctx->pc = 0x1408F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1408F0u;
    // 0x1408f4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1408F0u, 0x1408F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408F8u;
label_1408f8:
    // 0x1408f8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x1408f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1408fc:
    // 0x1408fc: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x1408fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
label_140900:
    // 0x140900: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x140900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_140904:
    // 0x140904: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x140904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_140908:
    // 0x140908: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_14090c:
    // 0x14090c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x14090cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_140910:
    // 0x140910: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x140910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140914:
    // 0x140914: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140918:
    // 0x140918: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14091c:
    // 0x14091c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x14091cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_140920:
    // 0x140920: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x140920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140924:
    // 0x140924: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x140924u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140928:
    // 0x140928: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x140928u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_14092c:
    // 0x14092c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_140930:
    // 0x140930: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x140930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_140934:
    // 0x140934: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x140934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_140938:
    // 0x140938: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x140938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14093c:
    // 0x14093c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x14093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_140940:
    // 0x140940: 0xc136b18  jal         func_4DAC60
label_140944:
    if (ctx->pc == 0x140944u) {
        ctx->pc = 0x140944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140940u;
        // 0x140944: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140948u;
        goto label_140948;
    }
    ctx->pc = 0x140940u;
    SET_GPR_U32(ctx, 31, 0x140948u);
    ctx->pc = 0x140944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140940u;
    // 0x140944: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x140940u, 0x140948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140948u;
label_140948:
    // 0x140948: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x140948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14094c:
    // 0x14094c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x14094cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_140950:
    // 0x140950: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x140950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_140954:
    // 0x140954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140958:
    // 0x140958: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x140958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_14095c:
    // 0x14095c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x14095cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140960:
    // 0x140960: 0x84650098  lh          $a1, 0x98($v1)
    ctx->pc = 0x140960u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_140964:
    // 0x140964: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x140964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_140968:
    // 0x140968: 0x40f809  jalr        $v0
label_14096c:
    if (ctx->pc == 0x14096Cu) {
        ctx->pc = 0x14096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140968u;
        // 0x14096c: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140970u;
        goto label_140970;
    }
    ctx->pc = 0x140968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140970u);
        ctx->pc = 0x14096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140968u;
        // 0x14096c: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140968u, 0x140970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140970u;
label_140970:
    // 0x140970: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_140974:
    // 0x140974: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x140974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140978:
    // 0x140978: 0xc136b18  jal         func_4DAC60
label_14097c:
    if (ctx->pc == 0x14097Cu) {
        ctx->pc = 0x14097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140978u;
        // 0x14097c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140980u;
        goto label_140980;
    }
    ctx->pc = 0x140978u;
    SET_GPR_U32(ctx, 31, 0x140980u);
    ctx->pc = 0x14097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140978u;
    // 0x14097c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x140978u, 0x140980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140980u;
label_140980:
    // 0x140980: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x140980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_140984:
    // 0x140984: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x140984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_140988:
    // 0x140988: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x140988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_14098c:
    // 0x14098c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x14098cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_140990:
    // 0x140990: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x140990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_140994:
    // 0x140994: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_140998:
    // 0x140998: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x140998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_14099c:
    // 0x14099c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1409a0:
    // 0x1409a0: 0xc136eda  jal         func_4DBB68
label_1409a4:
    if (ctx->pc == 0x1409A4u) {
        ctx->pc = 0x1409A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409A0u;
        // 0x1409a4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1409A8u;
        goto label_1409a8;
    }
    ctx->pc = 0x1409A0u;
    SET_GPR_U32(ctx, 31, 0x1409A8u);
    ctx->pc = 0x1409A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1409A0u;
    // 0x1409a4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DBB68u, 0x1409A0u, 0x1409A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1409A8u;
label_1409a8:
    // 0x1409a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1409a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1409ac:
    // 0x1409ac: 0x926203ed  lbu         $v0, 0x3ED($s3)
    ctx->pc = 0x1409acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1005)));
label_1409b0:
    // 0x1409b0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1409b4:
    if (ctx->pc == 0x1409B4u) {
        ctx->pc = 0x1409B8u;
        goto label_1409b8;
    }
    ctx->pc = 0x1409B0u;
    {
        const bool branch_taken_0x1409b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1409b0) {
            ctx->pc = 0x140A30u;
            goto label_140a30;
        }
    }
    ctx->pc = 0x1409B8u;
label_1409b8:
    // 0x1409b8: 0x926203e6  lbu         $v0, 0x3E6($s3)
    ctx->pc = 0x1409b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 998)));
label_1409bc:
    // 0x1409bc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1409c0:
    if (ctx->pc == 0x1409C0u) {
        ctx->pc = 0x1409C4u;
        goto label_1409c4;
    }
    ctx->pc = 0x1409BCu;
    {
        const bool branch_taken_0x1409bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1409bc) {
            ctx->pc = 0x140A30u;
            goto label_140a30;
        }
    }
    ctx->pc = 0x1409C4u;
label_1409c4:
    // 0x1409c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1409c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1409c8:
    // 0x1409c8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1409c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1409cc:
    // 0x1409cc: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1409ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1409d0:
    // 0x1409d0: 0x40f809  jalr        $v0
label_1409d4:
    if (ctx->pc == 0x1409D4u) {
        ctx->pc = 0x1409D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409D0u;
        // 0x1409d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1409D8u;
        goto label_1409d8;
    }
    ctx->pc = 0x1409D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1409D8u);
        ctx->pc = 0x1409D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409D0u;
        // 0x1409d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1409D0u, 0x1409D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1409D8u;
label_1409d8:
    // 0x1409d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1409d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1409dc:
    // 0x1409dc: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1409dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1409e0:
    // 0x1409e0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1409e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1409e4:
    // 0x1409e4: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x1409e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_1409e8:
    // 0x1409e8: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x1409e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_1409ec:
    // 0x1409ec: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x1409ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_1409f0:
    // 0x1409f0: 0x40f809  jalr        $v0
label_1409f4:
    if (ctx->pc == 0x1409F4u) {
        ctx->pc = 0x1409F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409F0u;
        // 0x1409f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1409F8u;
        goto label_1409f8;
    }
    ctx->pc = 0x1409F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1409F8u);
        ctx->pc = 0x1409F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409F0u;
        // 0x1409f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1409F0u, 0x1409F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1409F8u;
label_1409f8:
    // 0x1409f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1409f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1409fc:
    // 0x1409fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1409fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140a00:
    // 0x140a00: 0xc0cdc0a  jal         func_337028
label_140a04:
    if (ctx->pc == 0x140A04u) {
        ctx->pc = 0x140A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A00u;
        // 0x140a04: 0x266602f0  addiu       $a2, $s3, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A08u;
        goto label_140a08;
    }
    ctx->pc = 0x140A00u;
    SET_GPR_U32(ctx, 31, 0x140A08u);
    ctx->pc = 0x140A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A00u;
    // 0x140a04: 0x266602f0  addiu       $a2, $s3, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x140A00u, 0x140A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A08u;
label_140a08:
    // 0x140a08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_140a0c:
    if (ctx->pc == 0x140A0Cu) {
        ctx->pc = 0x140A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A08u;
        // 0x140a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A10u;
        goto label_140a10;
    }
    ctx->pc = 0x140A08u;
    {
        const bool branch_taken_0x140a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A08u;
        // 0x140a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a08) {
            ctx->pc = 0x140A20u;
            goto label_140a20;
        }
    }
    ctx->pc = 0x140A10u;
label_140a10:
    // 0x140a10: 0xc0cd972  jal         func_3365C8
label_140a14:
    if (ctx->pc == 0x140A14u) {
        ctx->pc = 0x140A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A10u;
        // 0x140a14: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A18u;
        goto label_140a18;
    }
    ctx->pc = 0x140A10u;
    SET_GPR_U32(ctx, 31, 0x140A18u);
    ctx->pc = 0x140A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A10u;
    // 0x140a14: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x140A10u, 0x140A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A18u;
label_140a18:
    // 0x140a18: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x140a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_140a1c:
    // 0x140a1c: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x140a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_140a20:
    // 0x140a20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x140a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_140a24:
    // 0x140a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140a28:
    // 0x140a28: 0xc048314  jal         func_120C50
label_140a2c:
    if (ctx->pc == 0x140A2Cu) {
        ctx->pc = 0x140A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A28u;
        // 0x140a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A30u;
        goto label_140a30;
    }
    ctx->pc = 0x140A28u;
    SET_GPR_U32(ctx, 31, 0x140A30u);
    ctx->pc = 0x140A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A28u;
    // 0x140a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x140A28u, 0x140A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A30u;
label_140a30:
    // 0x140a30: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_140a34:
    if (ctx->pc == 0x140A34u) {
        ctx->pc = 0x140A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A30u;
        // 0x140a34: 0x26660320  addiu       $a2, $s3, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A38u;
        goto label_140a38;
    }
    ctx->pc = 0x140A30u;
    {
        const bool branch_taken_0x140a30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A30u;
        // 0x140a34: 0x26660320  addiu       $a2, $s3, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a30) {
            ctx->pc = 0x140AA0u;
            goto label_140aa0;
        }
    }
    ctx->pc = 0x140A38u;
label_140a38:
    // 0x140a38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x140a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_140a3c:
    // 0x140a3c: 0xc136afa  jal         func_4DABE8
label_140a40:
    if (ctx->pc == 0x140A40u) {
        ctx->pc = 0x140A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A3Cu;
        // 0x140a40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A44u;
        goto label_140a44;
    }
    ctx->pc = 0x140A3Cu;
    SET_GPR_U32(ctx, 31, 0x140A44u);
    ctx->pc = 0x140A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A3Cu;
    // 0x140a40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x140A3Cu, 0x140A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A44u;
label_140a44:
    // 0x140a44: 0x3405a000  ori         $a1, $zero, 0xA000
    ctx->pc = 0x140a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_140a48:
    // 0x140a48: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x140a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_140a4c:
    // 0x140a4c: 0xc08997c  jal         func_2265F0
label_140a50:
    if (ctx->pc == 0x140A50u) {
        ctx->pc = 0x140A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A4Cu;
        // 0x140a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A54u;
        goto label_140a54;
    }
    ctx->pc = 0x140A4Cu;
    SET_GPR_U32(ctx, 31, 0x140A54u);
    ctx->pc = 0x140A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A4Cu;
    // 0x140a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x140A4Cu, 0x140A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A54u;
label_140a54:
    // 0x140a54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_140a58:
    if (ctx->pc == 0x140A58u) {
        ctx->pc = 0x140A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A54u;
        // 0x140a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A5Cu;
        goto label_140a5c;
    }
    ctx->pc = 0x140A54u;
    {
        const bool branch_taken_0x140a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A54u;
        // 0x140a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a54) {
            ctx->pc = 0x140A68u;
            goto label_140a68;
        }
    }
    ctx->pc = 0x140A5Cu;
label_140a5c:
    // 0x140a5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x140a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_140a60:
    // 0x140a60: 0xc08f824  jal         func_23E090
label_140a64:
    if (ctx->pc == 0x140A64u) {
        ctx->pc = 0x140A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A60u;
        // 0x140a64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A68u;
        goto label_140a68;
    }
    ctx->pc = 0x140A60u;
    SET_GPR_U32(ctx, 31, 0x140A68u);
    ctx->pc = 0x140A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A60u;
    // 0x140a64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E090u, 0x140A60u, 0x140A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A68u;
label_140a68:
    // 0x140a68: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x140a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_140a6c:
    // 0x140a6c: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x140a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_140a70:
    // 0x140a70: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x140a70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_140a74:
    // 0x140a74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x140a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_140a78:
    // 0x140a78: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x140a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_140a7c:
    // 0x140a7c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x140a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_140a80:
    // 0x140a80: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x140a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_140a84:
    // 0x140a84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140a88:
    // 0x140a88: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x140a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_140a8c:
    // 0x140a8c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x140a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_140a90:
    // 0x140a90: 0x84c40068  lh          $a0, 0x68($a2)
    ctx->pc = 0x140a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 104)));
label_140a94:
    // 0x140a94: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x140a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_140a98:
    // 0x140a98: 0x40f809  jalr        $v0
label_140a9c:
    if (ctx->pc == 0x140A9Cu) {
        ctx->pc = 0x140A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A98u;
        // 0x140a9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140AA0u;
        goto label_140aa0;
    }
    ctx->pc = 0x140A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140AA0u);
        ctx->pc = 0x140A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A98u;
        // 0x140a9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140A98u, 0x140AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140AA0u;
label_140aa0:
    // 0x140aa0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x140aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_140aa4:
    // 0x140aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140aa8:
    // 0x140aa8: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x140aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_140aac:
    // 0x140aac: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x140aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_140ab0:
    // 0x140ab0: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x140ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_140ab4:
    // 0x140ab4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x140ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_140ab8:
    // 0x140ab8: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x140ab8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_140abc:
    // 0x140abc: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x140abcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_140ac0:
    // 0x140ac0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x140ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_140ac4:
    // 0x140ac4: 0x3e00008  jr          $ra
label_140ac8:
    if (ctx->pc == 0x140AC8u) {
        ctx->pc = 0x140AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AC4u;
        // 0x140ac8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140ACCu;
        goto label_140acc;
    }
    ctx->pc = 0x140AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AC4u;
        // 0x140ac8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140ACCu;
label_140acc:
    // 0x140acc: 0x0  nop
    ctx->pc = 0x140accu;
    // NOP
    ctx->pc = 0x140ad0u;
}
