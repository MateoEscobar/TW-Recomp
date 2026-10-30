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

// Function: sub_002217F0
// Address: 0x2217f0 - 0x221950
void sub_002217F0_0x2217f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002217F0_0x2217f0");
#endif

    switch (ctx->pc) {
        case 0x2217f0u: goto label_2217f0;
        case 0x2217f4u: goto label_2217f4;
        case 0x2217f8u: goto label_2217f8;
        case 0x2217fcu: goto label_2217fc;
        case 0x221800u: goto label_221800;
        case 0x221804u: goto label_221804;
        case 0x221808u: goto label_221808;
        case 0x22180cu: goto label_22180c;
        case 0x221810u: goto label_221810;
        case 0x221814u: goto label_221814;
        case 0x221818u: goto label_221818;
        case 0x22181cu: goto label_22181c;
        case 0x221820u: goto label_221820;
        case 0x221824u: goto label_221824;
        case 0x221828u: goto label_221828;
        case 0x22182cu: goto label_22182c;
        case 0x221830u: goto label_221830;
        case 0x221834u: goto label_221834;
        case 0x221838u: goto label_221838;
        case 0x22183cu: goto label_22183c;
        case 0x221840u: goto label_221840;
        case 0x221844u: goto label_221844;
        case 0x221848u: goto label_221848;
        case 0x22184cu: goto label_22184c;
        case 0x221850u: goto label_221850;
        case 0x221854u: goto label_221854;
        case 0x221858u: goto label_221858;
        case 0x22185cu: goto label_22185c;
        case 0x221860u: goto label_221860;
        case 0x221864u: goto label_221864;
        case 0x221868u: goto label_221868;
        case 0x22186cu: goto label_22186c;
        case 0x221870u: goto label_221870;
        case 0x221874u: goto label_221874;
        case 0x221878u: goto label_221878;
        case 0x22187cu: goto label_22187c;
        case 0x221880u: goto label_221880;
        case 0x221884u: goto label_221884;
        case 0x221888u: goto label_221888;
        case 0x22188cu: goto label_22188c;
        case 0x221890u: goto label_221890;
        case 0x221894u: goto label_221894;
        case 0x221898u: goto label_221898;
        case 0x22189cu: goto label_22189c;
        case 0x2218a0u: goto label_2218a0;
        case 0x2218a4u: goto label_2218a4;
        case 0x2218a8u: goto label_2218a8;
        case 0x2218acu: goto label_2218ac;
        case 0x2218b0u: goto label_2218b0;
        case 0x2218b4u: goto label_2218b4;
        case 0x2218b8u: goto label_2218b8;
        case 0x2218bcu: goto label_2218bc;
        case 0x2218c0u: goto label_2218c0;
        case 0x2218c4u: goto label_2218c4;
        case 0x2218c8u: goto label_2218c8;
        case 0x2218ccu: goto label_2218cc;
        case 0x2218d0u: goto label_2218d0;
        case 0x2218d4u: goto label_2218d4;
        case 0x2218d8u: goto label_2218d8;
        case 0x2218dcu: goto label_2218dc;
        case 0x2218e0u: goto label_2218e0;
        case 0x2218e4u: goto label_2218e4;
        case 0x2218e8u: goto label_2218e8;
        case 0x2218ecu: goto label_2218ec;
        case 0x2218f0u: goto label_2218f0;
        case 0x2218f4u: goto label_2218f4;
        case 0x2218f8u: goto label_2218f8;
        case 0x2218fcu: goto label_2218fc;
        case 0x221900u: goto label_221900;
        case 0x221904u: goto label_221904;
        case 0x221908u: goto label_221908;
        case 0x22190cu: goto label_22190c;
        case 0x221910u: goto label_221910;
        case 0x221914u: goto label_221914;
        case 0x221918u: goto label_221918;
        case 0x22191cu: goto label_22191c;
        case 0x221920u: goto label_221920;
        case 0x221924u: goto label_221924;
        case 0x221928u: goto label_221928;
        case 0x22192cu: goto label_22192c;
        case 0x221930u: goto label_221930;
        case 0x221934u: goto label_221934;
        case 0x221938u: goto label_221938;
        case 0x22193cu: goto label_22193c;
        case 0x221940u: goto label_221940;
        case 0x221944u: goto label_221944;
        case 0x221948u: goto label_221948;
        case 0x22194cu: goto label_22194c;
        default: break;
    }

    ctx->pc = 0x2217f0u;

label_2217f0:
    // 0x2217f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2217f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2217f4:
    // 0x2217f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2217f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2217f8:
    // 0x2217f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2217f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2217fc:
    // 0x2217fc: 0xc0874fa  jal         func_21D3E8
label_221800:
    if (ctx->pc == 0x221800u) {
        ctx->pc = 0x221800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217FCu;
        // 0x221800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221804u;
        goto label_221804;
    }
    ctx->pc = 0x2217FCu;
    SET_GPR_U32(ctx, 31, 0x221804u);
    ctx->pc = 0x221800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217FCu;
    // 0x221800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2217FCu, 0x221804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221804u;
label_221804:
    // 0x221804: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x221804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_221808:
    // 0x221808: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_22180c:
    if (ctx->pc == 0x22180Cu) {
        ctx->pc = 0x221810u;
        goto label_221810;
    }
    ctx->pc = 0x221808u;
    {
        const bool branch_taken_0x221808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x221808) {
            ctx->pc = 0x2218FCu;
            goto label_2218fc;
        }
    }
    ctx->pc = 0x221810u;
label_221810:
    // 0x221810: 0xc0e87c0  jal         func_3A1F00
label_221814:
    if (ctx->pc == 0x221814u) {
        ctx->pc = 0x221814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221810u;
        // 0x221814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221818u;
        goto label_221818;
    }
    ctx->pc = 0x221810u;
    SET_GPR_U32(ctx, 31, 0x221818u);
    ctx->pc = 0x221814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221810u;
    // 0x221814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x221810u, 0x221818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221818u;
label_221818:
    // 0x221818: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x221818u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22181c:
    // 0x22181c: 0x8e0503c0  lw          $a1, 0x3C0($s0)
    ctx->pc = 0x22181cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_221820:
    // 0x221820: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x221820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_221824:
    // 0x221824: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x221824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_221828:
    // 0x221828: 0x28a40003  slti        $a0, $a1, 0x3
    ctx->pc = 0x221828u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_22182c:
    // 0x22182c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x22182cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_221830:
    // 0x221830: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x221830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_221834:
    // 0x221834: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x221834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221838:
    // 0x221838: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x221838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_22183c:
    // 0x22183c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x22183cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221840:
    // 0x221840: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x221840u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_221844:
    // 0x221844: 0x4a0003bf  vwaitq
    ctx->pc = 0x221844u;
    // VWAITQ (Q already resolved in this runtime)
label_221848:
    // 0x221848: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x221848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22184c:
    // 0x22184c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x22184cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_221850:
    // 0x221850: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x221850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_221854:
    // 0x221854: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_221858:
    if (ctx->pc == 0x221858u) {
        ctx->pc = 0x221858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221854u;
        // 0x221858: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22185Cu;
        goto label_22185c;
    }
    ctx->pc = 0x221854u;
    {
        const bool branch_taken_0x221854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221854u;
        // 0x221858: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221854) {
            ctx->pc = 0x221898u;
            goto label_221898;
        }
    }
    ctx->pc = 0x22185Cu;
label_22185c:
    // 0x22185c: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x22185cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_221860:
    // 0x221860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_221864:
    if (ctx->pc == 0x221864u) {
        ctx->pc = 0x221864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221860u;
        // 0x221864: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221868u;
        goto label_221868;
    }
    ctx->pc = 0x221860u;
    {
        const bool branch_taken_0x221860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221860u;
        // 0x221864: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221860) {
            ctx->pc = 0x221878u;
            goto label_221878;
        }
    }
    ctx->pc = 0x221868u;
label_221868:
    // 0x221868: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_22186c:
    if (ctx->pc == 0x22186Cu) {
        ctx->pc = 0x221870u;
        goto label_221870;
    }
    ctx->pc = 0x221868u;
    {
        const bool branch_taken_0x221868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x221868) {
            ctx->pc = 0x221888u;
            goto label_221888;
        }
    }
    ctx->pc = 0x221870u;
label_221870:
    // 0x221870: 0x10000009  b           . + 4 + (0x9 << 2)
label_221874:
    if (ctx->pc == 0x221874u) {
        ctx->pc = 0x221878u;
        goto label_221878;
    }
    ctx->pc = 0x221870u;
    {
        const bool branch_taken_0x221870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221870) {
            ctx->pc = 0x221898u;
            goto label_221898;
        }
    }
    ctx->pc = 0x221878u;
label_221878:
    // 0x221878: 0xc08859c  jal         func_221670
label_22187c:
    if (ctx->pc == 0x22187Cu) {
        ctx->pc = 0x22187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221878u;
        // 0x22187c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221880u;
        goto label_221880;
    }
    ctx->pc = 0x221878u;
    SET_GPR_U32(ctx, 31, 0x221880u);
    ctx->pc = 0x22187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221878u;
    // 0x22187c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x221878u, 0x221880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221880u;
label_221880:
    // 0x221880: 0x10000008  b           . + 4 + (0x8 << 2)
label_221884:
    if (ctx->pc == 0x221884u) {
        ctx->pc = 0x221884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221880u;
        // 0x221884: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221888u;
        goto label_221888;
    }
    ctx->pc = 0x221880u;
    {
        const bool branch_taken_0x221880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221880u;
        // 0x221884: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221880) {
            ctx->pc = 0x2218A4u;
            goto label_2218a4;
        }
    }
    ctx->pc = 0x221888u;
label_221888:
    // 0x221888: 0xc0885b0  jal         func_2216C0
label_22188c:
    if (ctx->pc == 0x22188Cu) {
        ctx->pc = 0x22188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221888u;
        // 0x22188c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221890u;
        goto label_221890;
    }
    ctx->pc = 0x221888u;
    SET_GPR_U32(ctx, 31, 0x221890u);
    ctx->pc = 0x22188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221888u;
    // 0x22188c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x221888u, 0x221890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221890u;
label_221890:
    // 0x221890: 0x10000004  b           . + 4 + (0x4 << 2)
label_221894:
    if (ctx->pc == 0x221894u) {
        ctx->pc = 0x221894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221890u;
        // 0x221894: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221898u;
        goto label_221898;
    }
    ctx->pc = 0x221890u;
    {
        const bool branch_taken_0x221890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221890u;
        // 0x221894: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221890) {
            ctx->pc = 0x2218A4u;
            goto label_2218a4;
        }
    }
    ctx->pc = 0x221898u;
label_221898:
    // 0x221898: 0xc088588  jal         func_221620
label_22189c:
    if (ctx->pc == 0x22189Cu) {
        ctx->pc = 0x22189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221898u;
        // 0x22189c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218A0u;
        goto label_2218a0;
    }
    ctx->pc = 0x221898u;
    SET_GPR_U32(ctx, 31, 0x2218A0u);
    ctx->pc = 0x22189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221898u;
    // 0x22189c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221620u, 0x221898u, 0x2218A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218A0u;
label_2218a0:
    // 0x2218a0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2218a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2218a4:
    // 0x2218a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2218a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2218a8:
    // 0x2218a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2218a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2218ac:
    // 0x2218ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2218acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2218b0:
    // 0x2218b0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2218b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2218b4:
    // 0x2218b4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2218b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2218b8:
    // 0x2218b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2218b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2218bc:
    // 0x2218bc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2218bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2218c0:
    // 0x2218c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2218c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2218c4:
    // 0x2218c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2218c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2218c8:
    // 0x2218c8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2218c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2218cc:
    // 0x2218cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2218ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2218d0:
    // 0x2218d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2218d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2218d4:
    // 0x2218d4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x2218d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_2218d8:
    // 0x2218d8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2218d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_2218dc:
    // 0x2218dc: 0x40f809  jalr        $v0
label_2218e0:
    if (ctx->pc == 0x2218E0u) {
        ctx->pc = 0x2218E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218DCu;
        // 0x2218e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218E4u;
        goto label_2218e4;
    }
    ctx->pc = 0x2218DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2218E4u);
        ctx->pc = 0x2218E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218DCu;
        // 0x2218e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2218DCu, 0x2218E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2218E4u;
label_2218e4:
    // 0x2218e4: 0xc08840e  jal         func_221038
label_2218e8:
    if (ctx->pc == 0x2218E8u) {
        ctx->pc = 0x2218E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218E4u;
        // 0x2218e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218ECu;
        goto label_2218ec;
    }
    ctx->pc = 0x2218E4u;
    SET_GPR_U32(ctx, 31, 0x2218ECu);
    ctx->pc = 0x2218E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218E4u;
    // 0x2218e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x2218E4u, 0x2218ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218ECu;
label_2218ec:
    // 0x2218ec: 0xc089f0a  jal         func_227C28
label_2218f0:
    if (ctx->pc == 0x2218F0u) {
        ctx->pc = 0x2218F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218ECu;
        // 0x2218f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218F4u;
        goto label_2218f4;
    }
    ctx->pc = 0x2218ECu;
    SET_GPR_U32(ctx, 31, 0x2218F4u);
    ctx->pc = 0x2218F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218ECu;
    // 0x2218f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C28u, 0x2218ECu, 0x2218F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218F4u;
label_2218f4:
    // 0x2218f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2218f8:
    if (ctx->pc == 0x2218F8u) {
        ctx->pc = 0x2218F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218F4u;
        // 0x2218f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218FCu;
        goto label_2218fc;
    }
    ctx->pc = 0x2218F4u;
    {
        const bool branch_taken_0x2218f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218F4u;
        // 0x2218f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218f4) {
            ctx->pc = 0x221910u;
            goto label_221910;
        }
    }
    ctx->pc = 0x2218FCu;
label_2218fc:
    // 0x2218fc: 0xc087502  jal         func_21D408
label_221900:
    if (ctx->pc == 0x221900u) {
        ctx->pc = 0x221900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218FCu;
        // 0x221900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221904u;
        goto label_221904;
    }
    ctx->pc = 0x2218FCu;
    SET_GPR_U32(ctx, 31, 0x221904u);
    ctx->pc = 0x221900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218FCu;
    // 0x221900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2218FCu, 0x221904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221904u;
label_221904:
    // 0x221904: 0xc0a6b78  jal         func_29ADE0
label_221908:
    if (ctx->pc == 0x221908u) {
        ctx->pc = 0x221908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221904u;
        // 0x221908: 0x244400e0  addiu       $a0, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22190Cu;
        goto label_22190c;
    }
    ctx->pc = 0x221904u;
    SET_GPR_U32(ctx, 31, 0x22190Cu);
    ctx->pc = 0x221908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221904u;
    // 0x221908: 0x244400e0  addiu       $a0, $v0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ADE0u, 0x221904u, 0x22190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22190Cu;
label_22190c:
    // 0x22190c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_221910:
    // 0x221910: 0x84440150  lh          $a0, 0x150($v0)
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 336)));
label_221914:
    // 0x221914: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x221914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_221918:
    // 0x221918: 0x60f809  jalr        $v1
label_22191c:
    if (ctx->pc == 0x22191Cu) {
        ctx->pc = 0x22191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221918u;
        // 0x22191c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221920u;
        goto label_221920;
    }
    ctx->pc = 0x221918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x221920u);
        ctx->pc = 0x22191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221918u;
        // 0x22191c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221918u, 0x221920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221920u;
label_221920:
    // 0x221920: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x221920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_221924:
    // 0x221924: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x221924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_221928:
    // 0x221928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22192c:
    // 0x22192c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22192cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_221930:
    // 0x221930: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x221930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_221934:
    // 0x221934: 0xc089974  jal         func_2265D0
label_221938:
    if (ctx->pc == 0x221938u) {
        ctx->pc = 0x221938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221934u;
        // 0x221938: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22193Cu;
        goto label_22193c;
    }
    ctx->pc = 0x221934u;
    SET_GPR_U32(ctx, 31, 0x22193Cu);
    ctx->pc = 0x221938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221934u;
    // 0x221938: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x221934u, 0x22193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22193Cu;
label_22193c:
    // 0x22193c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22193cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_221940:
    // 0x221940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x221940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_221944:
    // 0x221944: 0x3e00008  jr          $ra
label_221948:
    if (ctx->pc == 0x221948u) {
        ctx->pc = 0x221948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221944u;
        // 0x221948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22194Cu;
        goto label_22194c;
    }
    ctx->pc = 0x221944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221944u;
        // 0x221948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22194Cu;
label_22194c:
    // 0x22194c: 0x0  nop
    ctx->pc = 0x22194cu;
    // NOP
    ctx->pc = 0x221950u;
}
