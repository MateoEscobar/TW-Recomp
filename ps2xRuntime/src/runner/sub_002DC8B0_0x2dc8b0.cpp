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

// Function: sub_002DC8B0
// Address: 0x2dc8b0 - 0x2dc9d8
void sub_002DC8B0_0x2dc8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC8B0_0x2dc8b0");
#endif

    switch (ctx->pc) {
        case 0x2dc8b0u: goto label_2dc8b0;
        case 0x2dc8b4u: goto label_2dc8b4;
        case 0x2dc8b8u: goto label_2dc8b8;
        case 0x2dc8bcu: goto label_2dc8bc;
        case 0x2dc8c0u: goto label_2dc8c0;
        case 0x2dc8c4u: goto label_2dc8c4;
        case 0x2dc8c8u: goto label_2dc8c8;
        case 0x2dc8ccu: goto label_2dc8cc;
        case 0x2dc8d0u: goto label_2dc8d0;
        case 0x2dc8d4u: goto label_2dc8d4;
        case 0x2dc8d8u: goto label_2dc8d8;
        case 0x2dc8dcu: goto label_2dc8dc;
        case 0x2dc8e0u: goto label_2dc8e0;
        case 0x2dc8e4u: goto label_2dc8e4;
        case 0x2dc8e8u: goto label_2dc8e8;
        case 0x2dc8ecu: goto label_2dc8ec;
        case 0x2dc8f0u: goto label_2dc8f0;
        case 0x2dc8f4u: goto label_2dc8f4;
        case 0x2dc8f8u: goto label_2dc8f8;
        case 0x2dc8fcu: goto label_2dc8fc;
        case 0x2dc900u: goto label_2dc900;
        case 0x2dc904u: goto label_2dc904;
        case 0x2dc908u: goto label_2dc908;
        case 0x2dc90cu: goto label_2dc90c;
        case 0x2dc910u: goto label_2dc910;
        case 0x2dc914u: goto label_2dc914;
        case 0x2dc918u: goto label_2dc918;
        case 0x2dc91cu: goto label_2dc91c;
        case 0x2dc920u: goto label_2dc920;
        case 0x2dc924u: goto label_2dc924;
        case 0x2dc928u: goto label_2dc928;
        case 0x2dc92cu: goto label_2dc92c;
        case 0x2dc930u: goto label_2dc930;
        case 0x2dc934u: goto label_2dc934;
        case 0x2dc938u: goto label_2dc938;
        case 0x2dc93cu: goto label_2dc93c;
        case 0x2dc940u: goto label_2dc940;
        case 0x2dc944u: goto label_2dc944;
        case 0x2dc948u: goto label_2dc948;
        case 0x2dc94cu: goto label_2dc94c;
        case 0x2dc950u: goto label_2dc950;
        case 0x2dc954u: goto label_2dc954;
        case 0x2dc958u: goto label_2dc958;
        case 0x2dc95cu: goto label_2dc95c;
        case 0x2dc960u: goto label_2dc960;
        case 0x2dc964u: goto label_2dc964;
        case 0x2dc968u: goto label_2dc968;
        case 0x2dc96cu: goto label_2dc96c;
        case 0x2dc970u: goto label_2dc970;
        case 0x2dc974u: goto label_2dc974;
        case 0x2dc978u: goto label_2dc978;
        case 0x2dc97cu: goto label_2dc97c;
        case 0x2dc980u: goto label_2dc980;
        case 0x2dc984u: goto label_2dc984;
        case 0x2dc988u: goto label_2dc988;
        case 0x2dc98cu: goto label_2dc98c;
        case 0x2dc990u: goto label_2dc990;
        case 0x2dc994u: goto label_2dc994;
        case 0x2dc998u: goto label_2dc998;
        case 0x2dc99cu: goto label_2dc99c;
        case 0x2dc9a0u: goto label_2dc9a0;
        case 0x2dc9a4u: goto label_2dc9a4;
        case 0x2dc9a8u: goto label_2dc9a8;
        case 0x2dc9acu: goto label_2dc9ac;
        case 0x2dc9b0u: goto label_2dc9b0;
        case 0x2dc9b4u: goto label_2dc9b4;
        case 0x2dc9b8u: goto label_2dc9b8;
        case 0x2dc9bcu: goto label_2dc9bc;
        case 0x2dc9c0u: goto label_2dc9c0;
        case 0x2dc9c4u: goto label_2dc9c4;
        case 0x2dc9c8u: goto label_2dc9c8;
        case 0x2dc9ccu: goto label_2dc9cc;
        case 0x2dc9d0u: goto label_2dc9d0;
        case 0x2dc9d4u: goto label_2dc9d4;
        default: break;
    }

    ctx->pc = 0x2dc8b0u;

label_2dc8b0:
    // 0x2dc8b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dc8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2dc8b4:
    // 0x2dc8b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2dc8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2dc8b8:
    // 0x2dc8b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2dc8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2dc8bc:
    // 0x2dc8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dc8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8c0:
    // 0x2dc8c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2dc8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2dc8c4:
    // 0x2dc8c4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2dc8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2dc8c8:
    // 0x2dc8c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dc8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2dc8cc:
    // 0x2dc8cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dc8d0:
    // 0x2dc8d0: 0xc0e4060  jal         func_390180
label_2dc8d4:
    if (ctx->pc == 0x2DC8D4u) {
        ctx->pc = 0x2DC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8D0u;
        // 0x2dc8d4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC8D8u;
        goto label_2dc8d8;
    }
    ctx->pc = 0x2DC8D0u;
    SET_GPR_U32(ctx, 31, 0x2DC8D8u);
    ctx->pc = 0x2DC8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8D0u;
    // 0x2dc8d4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DC8D0u, 0x2DC8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8D8u;
label_2dc8d8:
    // 0x2dc8d8: 0xc0e57ce  jal         func_395F38
label_2dc8dc:
    if (ctx->pc == 0x2DC8DCu) {
        ctx->pc = 0x2DC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8D8u;
        // 0x2dc8dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC8E0u;
        goto label_2dc8e0;
    }
    ctx->pc = 0x2DC8D8u;
    SET_GPR_U32(ctx, 31, 0x2DC8E0u);
    ctx->pc = 0x2DC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8D8u;
    // 0x2dc8dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2DC8D8u, 0x2DC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8E0u;
label_2dc8e0:
    // 0x2dc8e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dc8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8e4:
    // 0x2dc8e4: 0x50c00035  beql        $a2, $zero, . + 4 + (0x35 << 2)
label_2dc8e8:
    if (ctx->pc == 0x2DC8E8u) {
        ctx->pc = 0x2DC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8E4u;
        // 0x2dc8e8: 0xa2000032  sb          $zero, 0x32($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC8ECu;
        goto label_2dc8ec;
    }
    ctx->pc = 0x2DC8E4u;
    {
        const bool branch_taken_0x2dc8e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8e4) {
            ctx->pc = 0x2DC8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC8E4u;
            // 0x2dc8e8: 0xa2000032  sb          $zero, 0x32($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC9BCu;
            goto label_2dc9bc;
        }
    }
    ctx->pc = 0x2DC8ECu;
label_2dc8ec:
    // 0x2dc8ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2dc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2dc8f0:
    // 0x2dc8f0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2dc8f4:
    if (ctx->pc == 0x2DC8F4u) {
        ctx->pc = 0x2DC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8F0u;
        // 0x2dc8f4: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC8F8u;
        goto label_2dc8f8;
    }
    ctx->pc = 0x2DC8F0u;
    {
        const bool branch_taken_0x2dc8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8F0u;
        // 0x2dc8f4: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8f0) {
            ctx->pc = 0x2DC9B8u;
            goto label_2dc9b8;
        }
    }
    ctx->pc = 0x2DC8F8u;
label_2dc8f8:
    // 0x2dc8f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2dc8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2dc8fc:
    // 0x2dc8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc900:
    // 0x2dc900: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x2dc900u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_2dc904:
    // 0x2dc904: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2dc904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2dc908:
    // 0x2dc908: 0x40f809  jalr        $v0
label_2dc90c:
    if (ctx->pc == 0x2DC90Cu) {
        ctx->pc = 0x2DC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC908u;
        // 0x2dc90c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC910u;
        goto label_2dc910;
    }
    ctx->pc = 0x2DC908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DC910u);
        ctx->pc = 0x2DC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC908u;
        // 0x2dc90c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC908u, 0x2DC910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC910u;
label_2dc910:
    // 0x2dc910: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x2dc910u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc914:
    // 0x2dc914: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2dc914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2dc918:
    // 0x2dc918: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x2dc918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2dc91c:
    // 0x2dc91c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2dc91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2dc920:
    // 0x2dc920: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x2dc920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_2dc924:
    // 0x2dc924: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x2dc924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2dc928:
    // 0x2dc928: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2dc928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2dc92c:
    // 0x2dc92c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2dc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2dc930:
    // 0x2dc930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2dc930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2dc934:
    // 0x2dc934: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2dc934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dc938:
    // 0x2dc938: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2dc938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2dc93c:
    // 0x2dc93c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2dc93cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2dc940:
    // 0x2dc940: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2dc940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dc944:
    // 0x2dc944: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dc944u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2dc948:
    // 0x2dc948: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2dc948u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2dc94c:
    // 0x2dc94c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2dc94cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2dc950:
    // 0x2dc950: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2dc950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dc954:
    // 0x2dc954: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2dc954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dc958:
    // 0x2dc958: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2dc958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dc95c:
    // 0x2dc95c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2dc95cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2dc960:
    // 0x2dc960: 0x4a0003bf  vwaitq
    ctx->pc = 0x2dc960u;
    // VWAITQ (Q already resolved in this runtime)
label_2dc964:
    // 0x2dc964: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2dc964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dc968:
    // 0x2dc968: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2dc968u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2dc96c:
    // 0x2dc96c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2dc96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2dc970:
    // 0x2dc970: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2dc970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2dc974:
    // 0x2dc974: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2dc974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2dc978:
    // 0x2dc978: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2dc978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2dc97c:
    // 0x2dc97c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2dc97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2dc980:
    // 0x2dc980: 0xc4c10078  lwc1        $f1, 0x78($a2)
    ctx->pc = 0x2dc980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc984:
    // 0x2dc984: 0xc4c0007c  lwc1        $f0, 0x7C($a2)
    ctx->pc = 0x2dc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc988:
    // 0x2dc988: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dc988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dc98c:
    // 0x2dc98c: 0x0  nop
    ctx->pc = 0x2dc98cu;
    // NOP
label_2dc990:
    // 0x2dc990: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dc994:
    if (ctx->pc == 0x2DC994u) {
        ctx->pc = 0x2DC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC990u;
        // 0x2dc994: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC998u;
        goto label_2dc998;
    }
    ctx->pc = 0x2DC990u;
    {
        const bool branch_taken_0x2dc990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC990u;
        // 0x2dc994: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc990) {
            ctx->pc = 0x2DC99Cu;
            goto label_2dc99c;
        }
    }
    ctx->pc = 0x2DC998u;
label_2dc998:
    // 0x2dc998: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2dc998u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2dc99c:
    // 0x2dc99c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dc99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc9a0:
    // 0x2dc9a0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2dc9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2dc9a4:
    // 0x2dc9a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dc9a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dc9a8:
    // 0x2dc9a8: 0xc094904  jal         func_252410
label_2dc9ac:
    if (ctx->pc == 0x2DC9ACu) {
        ctx->pc = 0x2DC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9A8u;
        // 0x2dc9ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC9B0u;
        goto label_2dc9b0;
    }
    ctx->pc = 0x2DC9A8u;
    SET_GPR_U32(ctx, 31, 0x2DC9B0u);
    ctx->pc = 0x2DC9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9A8u;
    // 0x2dc9ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2DC9A8u, 0x2DC9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC9B0u;
label_2dc9b0:
    // 0x2dc9b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2dc9b4:
    if (ctx->pc == 0x2DC9B4u) {
        ctx->pc = 0x2DC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9B0u;
        // 0x2dc9b4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC9B8u;
        goto label_2dc9b8;
    }
    ctx->pc = 0x2DC9B0u;
    {
        const bool branch_taken_0x2dc9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc9b0) {
            ctx->pc = 0x2DC9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC9B0u;
            // 0x2dc9b4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC9C0u;
            goto label_2dc9c0;
        }
    }
    ctx->pc = 0x2DC9B8u;
label_2dc9b8:
    // 0x2dc9b8: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x2dc9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
label_2dc9bc:
    // 0x2dc9bc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2dc9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dc9c0:
    // 0x2dc9c0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2dc9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dc9c4:
    // 0x2dc9c4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2dc9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dc9c8:
    // 0x2dc9c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dc9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc9cc:
    // 0x2dc9cc: 0x3e00008  jr          $ra
label_2dc9d0:
    if (ctx->pc == 0x2DC9D0u) {
        ctx->pc = 0x2DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9CCu;
        // 0x2dc9d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC9D4u;
        goto label_2dc9d4;
    }
    ctx->pc = 0x2DC9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9CCu;
        // 0x2dc9d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC9D4u;
label_2dc9d4:
    // 0x2dc9d4: 0x0  nop
    ctx->pc = 0x2dc9d4u;
    // NOP
    ctx->pc = 0x2dc9d8u;
}
