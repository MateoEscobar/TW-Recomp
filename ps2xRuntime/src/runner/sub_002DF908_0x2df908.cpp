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

// Function: sub_002DF908
// Address: 0x2df908 - 0x2dfb00
void sub_002DF908_0x2df908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF908_0x2df908");
#endif

    switch (ctx->pc) {
        case 0x2df908u: goto label_2df908;
        case 0x2df90cu: goto label_2df90c;
        case 0x2df910u: goto label_2df910;
        case 0x2df914u: goto label_2df914;
        case 0x2df918u: goto label_2df918;
        case 0x2df91cu: goto label_2df91c;
        case 0x2df920u: goto label_2df920;
        case 0x2df924u: goto label_2df924;
        case 0x2df928u: goto label_2df928;
        case 0x2df92cu: goto label_2df92c;
        case 0x2df930u: goto label_2df930;
        case 0x2df934u: goto label_2df934;
        case 0x2df938u: goto label_2df938;
        case 0x2df93cu: goto label_2df93c;
        case 0x2df940u: goto label_2df940;
        case 0x2df944u: goto label_2df944;
        case 0x2df948u: goto label_2df948;
        case 0x2df94cu: goto label_2df94c;
        case 0x2df950u: goto label_2df950;
        case 0x2df954u: goto label_2df954;
        case 0x2df958u: goto label_2df958;
        case 0x2df95cu: goto label_2df95c;
        case 0x2df960u: goto label_2df960;
        case 0x2df964u: goto label_2df964;
        case 0x2df968u: goto label_2df968;
        case 0x2df96cu: goto label_2df96c;
        case 0x2df970u: goto label_2df970;
        case 0x2df974u: goto label_2df974;
        case 0x2df978u: goto label_2df978;
        case 0x2df97cu: goto label_2df97c;
        case 0x2df980u: goto label_2df980;
        case 0x2df984u: goto label_2df984;
        case 0x2df988u: goto label_2df988;
        case 0x2df98cu: goto label_2df98c;
        case 0x2df990u: goto label_2df990;
        case 0x2df994u: goto label_2df994;
        case 0x2df998u: goto label_2df998;
        case 0x2df99cu: goto label_2df99c;
        case 0x2df9a0u: goto label_2df9a0;
        case 0x2df9a4u: goto label_2df9a4;
        case 0x2df9a8u: goto label_2df9a8;
        case 0x2df9acu: goto label_2df9ac;
        case 0x2df9b0u: goto label_2df9b0;
        case 0x2df9b4u: goto label_2df9b4;
        case 0x2df9b8u: goto label_2df9b8;
        case 0x2df9bcu: goto label_2df9bc;
        case 0x2df9c0u: goto label_2df9c0;
        case 0x2df9c4u: goto label_2df9c4;
        case 0x2df9c8u: goto label_2df9c8;
        case 0x2df9ccu: goto label_2df9cc;
        case 0x2df9d0u: goto label_2df9d0;
        case 0x2df9d4u: goto label_2df9d4;
        case 0x2df9d8u: goto label_2df9d8;
        case 0x2df9dcu: goto label_2df9dc;
        case 0x2df9e0u: goto label_2df9e0;
        case 0x2df9e4u: goto label_2df9e4;
        case 0x2df9e8u: goto label_2df9e8;
        case 0x2df9ecu: goto label_2df9ec;
        case 0x2df9f0u: goto label_2df9f0;
        case 0x2df9f4u: goto label_2df9f4;
        case 0x2df9f8u: goto label_2df9f8;
        case 0x2df9fcu: goto label_2df9fc;
        case 0x2dfa00u: goto label_2dfa00;
        case 0x2dfa04u: goto label_2dfa04;
        case 0x2dfa08u: goto label_2dfa08;
        case 0x2dfa0cu: goto label_2dfa0c;
        case 0x2dfa10u: goto label_2dfa10;
        case 0x2dfa14u: goto label_2dfa14;
        case 0x2dfa18u: goto label_2dfa18;
        case 0x2dfa1cu: goto label_2dfa1c;
        case 0x2dfa20u: goto label_2dfa20;
        case 0x2dfa24u: goto label_2dfa24;
        case 0x2dfa28u: goto label_2dfa28;
        case 0x2dfa2cu: goto label_2dfa2c;
        case 0x2dfa30u: goto label_2dfa30;
        case 0x2dfa34u: goto label_2dfa34;
        case 0x2dfa38u: goto label_2dfa38;
        case 0x2dfa3cu: goto label_2dfa3c;
        case 0x2dfa40u: goto label_2dfa40;
        case 0x2dfa44u: goto label_2dfa44;
        case 0x2dfa48u: goto label_2dfa48;
        case 0x2dfa4cu: goto label_2dfa4c;
        case 0x2dfa50u: goto label_2dfa50;
        case 0x2dfa54u: goto label_2dfa54;
        case 0x2dfa58u: goto label_2dfa58;
        case 0x2dfa5cu: goto label_2dfa5c;
        case 0x2dfa60u: goto label_2dfa60;
        case 0x2dfa64u: goto label_2dfa64;
        case 0x2dfa68u: goto label_2dfa68;
        case 0x2dfa6cu: goto label_2dfa6c;
        case 0x2dfa70u: goto label_2dfa70;
        case 0x2dfa74u: goto label_2dfa74;
        case 0x2dfa78u: goto label_2dfa78;
        case 0x2dfa7cu: goto label_2dfa7c;
        case 0x2dfa80u: goto label_2dfa80;
        case 0x2dfa84u: goto label_2dfa84;
        case 0x2dfa88u: goto label_2dfa88;
        case 0x2dfa8cu: goto label_2dfa8c;
        case 0x2dfa90u: goto label_2dfa90;
        case 0x2dfa94u: goto label_2dfa94;
        case 0x2dfa98u: goto label_2dfa98;
        case 0x2dfa9cu: goto label_2dfa9c;
        case 0x2dfaa0u: goto label_2dfaa0;
        case 0x2dfaa4u: goto label_2dfaa4;
        case 0x2dfaa8u: goto label_2dfaa8;
        case 0x2dfaacu: goto label_2dfaac;
        case 0x2dfab0u: goto label_2dfab0;
        case 0x2dfab4u: goto label_2dfab4;
        case 0x2dfab8u: goto label_2dfab8;
        case 0x2dfabcu: goto label_2dfabc;
        case 0x2dfac0u: goto label_2dfac0;
        case 0x2dfac4u: goto label_2dfac4;
        case 0x2dfac8u: goto label_2dfac8;
        case 0x2dfaccu: goto label_2dfacc;
        case 0x2dfad0u: goto label_2dfad0;
        case 0x2dfad4u: goto label_2dfad4;
        case 0x2dfad8u: goto label_2dfad8;
        case 0x2dfadcu: goto label_2dfadc;
        case 0x2dfae0u: goto label_2dfae0;
        case 0x2dfae4u: goto label_2dfae4;
        case 0x2dfae8u: goto label_2dfae8;
        case 0x2dfaecu: goto label_2dfaec;
        case 0x2dfaf0u: goto label_2dfaf0;
        case 0x2dfaf4u: goto label_2dfaf4;
        case 0x2dfaf8u: goto label_2dfaf8;
        case 0x2dfafcu: goto label_2dfafc;
        default: break;
    }

    ctx->pc = 0x2df908u;

label_2df908:
    // 0x2df908: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2df908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2df90c:
    // 0x2df90c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2df90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2df910:
    // 0x2df910: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2df910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2df914:
    // 0x2df914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df918:
    // 0x2df918: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2df918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2df91c:
    // 0x2df91c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2df91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2df920:
    // 0x2df920: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2df920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2df924:
    // 0x2df924: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2df924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df928:
    // 0x2df928: 0xc0e4060  jal         func_390180
label_2df92c:
    if (ctx->pc == 0x2DF92Cu) {
        ctx->pc = 0x2DF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF928u;
        // 0x2df92c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF930u;
        goto label_2df930;
    }
    ctx->pc = 0x2DF928u;
    SET_GPR_U32(ctx, 31, 0x2DF930u);
    ctx->pc = 0x2DF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF928u;
    // 0x2df92c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DF928u, 0x2DF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF930u;
label_2df930:
    // 0x2df930: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2df930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df934:
    // 0x2df934: 0x10c0006c  beqz        $a2, . + 4 + (0x6C << 2)
label_2df938:
    if (ctx->pc == 0x2DF938u) {
        ctx->pc = 0x2DF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF934u;
        // 0x2df938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF93Cu;
        goto label_2df93c;
    }
    ctx->pc = 0x2DF934u;
    {
        const bool branch_taken_0x2df934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF934u;
        // 0x2df938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df934) {
            ctx->pc = 0x2DFAE8u;
            goto label_2dfae8;
        }
    }
    ctx->pc = 0x2DF93Cu;
label_2df93c:
    // 0x2df93c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2df93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2df940:
    // 0x2df940: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2df940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2df944:
    // 0x2df944: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2df944u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2df948:
    // 0x2df948: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2df948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2df94c:
    // 0x2df94c: 0x60f809  jalr        $v1
label_2df950:
    if (ctx->pc == 0x2DF950u) {
        ctx->pc = 0x2DF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF94Cu;
        // 0x2df950: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF954u;
        goto label_2df954;
    }
    ctx->pc = 0x2DF94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DF954u);
        ctx->pc = 0x2DF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF94Cu;
        // 0x2df950: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF94Cu, 0x2DF954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF954u;
label_2df954:
    // 0x2df954: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2df954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2df958:
    // 0x2df958: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x2df958u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2df95c:
    // 0x2df95c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2df95cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2df960:
    // 0x2df960: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2df960u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2df964:
    // 0x2df964: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2df964u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2df968:
    // 0x2df968: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2df968u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2df96c:
    // 0x2df96c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2df96cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2df970:
    // 0x2df970: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2df970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2df974:
    // 0x2df974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2df978:
    // 0x2df978: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x2df978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_2df97c:
    // 0x2df97c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2df97cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2df980:
    // 0x2df980: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2df980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2df984:
    // 0x2df984: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2df984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2df988:
    // 0x2df988: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2df988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2df98c:
    // 0x2df98c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2df98cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2df990:
    // 0x2df990: 0x4a0003bf  vwaitq
    ctx->pc = 0x2df990u;
    // VWAITQ (Q already resolved in this runtime)
label_2df994:
    // 0x2df994: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2df994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2df998:
    // 0x2df998: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2df998u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2df99c:
    // 0x2df99c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2df99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2df9a0:
    // 0x2df9a0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2df9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2df9a4:
    // 0x2df9a4: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x2df9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
label_2df9a8:
    // 0x2df9a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df9ac:
    // 0x2df9ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2df9acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2df9b0:
    // 0x2df9b0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2df9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2df9b4:
    // 0x2df9b4: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2df9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2df9b8:
    // 0x2df9b8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2df9b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2df9bc:
    // 0x2df9bc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2df9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2df9c0:
    // 0x2df9c0: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2df9c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2df9c4:
    // 0x2df9c4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2df9c8:
    if (ctx->pc == 0x2DF9C8u) {
        ctx->pc = 0x2DF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9C4u;
        // 0x2df9c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF9CCu;
        goto label_2df9cc;
    }
    ctx->pc = 0x2DF9C4u;
    {
        const bool branch_taken_0x2df9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df9c4) {
            ctx->pc = 0x2DF9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF9C4u;
            // 0x2df9c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF9CCu;
            goto label_2df9cc;
        }
    }
    ctx->pc = 0x2DF9CCu;
label_2df9cc:
    // 0x2df9cc: 0x2810  mfhi        $a1
    ctx->pc = 0x2df9ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2df9d0:
    // 0x2df9d0: 0x54a00032  bnel        $a1, $zero, . + 4 + (0x32 << 2)
label_2df9d4:
    if (ctx->pc == 0x2DF9D4u) {
        ctx->pc = 0x2DF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9D0u;
        // 0x2df9d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF9D8u;
        goto label_2df9d8;
    }
    ctx->pc = 0x2DF9D0u;
    {
        const bool branch_taken_0x2df9d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df9d0) {
            ctx->pc = 0x2DF9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF9D0u;
            // 0x2df9d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA9Cu;
            goto label_2dfa9c;
        }
    }
    ctx->pc = 0x2DF9D8u;
label_2df9d8:
    // 0x2df9d8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2df9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2df9dc:
    // 0x2df9dc: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2df9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2df9e0:
    // 0x2df9e0: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2df9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2df9e4:
    // 0x2df9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df9e8:
    // 0x2df9e8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2df9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2df9ec:
    // 0x2df9ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2df9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2df9f0:
    // 0x2df9f0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2df9f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2df9f4:
    // 0x2df9f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2df9f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2df9f8:
    // 0x2df9f8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2df9f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2df9fc:
    // 0x2df9fc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2df9fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dfa00:
    // 0x2dfa00: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dfa00u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2dfa04:
    // 0x2dfa04: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2dfa04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2dfa08:
    // 0x2dfa08: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dfa08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dfa0c:
    // 0x2dfa0c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2dfa0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2dfa10:
    // 0x2dfa10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2dfa10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2dfa14:
    // 0x2dfa14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2dfa14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2dfa18:
    // 0x2dfa18: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2dfa18u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2dfa1c:
    // 0x2dfa1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2dfa1cu;
    // VWAITQ (Q already resolved in this runtime)
label_2dfa20:
    // 0x2dfa20: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2dfa20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2dfa24:
    // 0x2dfa24: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2dfa24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2dfa28:
    // 0x2dfa28: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2dfa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2dfa2c:
    // 0x2dfa2c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2dfa2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dfa30:
    // 0x2dfa30: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2dfa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2dfa34:
    // 0x2dfa34: 0xc0b7de8  jal         func_2DF7A0
label_2dfa38:
    if (ctx->pc == 0x2DFA38u) {
        ctx->pc = 0x2DFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA34u;
        // 0x2dfa38: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA3Cu;
        goto label_2dfa3c;
    }
    ctx->pc = 0x2DFA34u;
    SET_GPR_U32(ctx, 31, 0x2DFA3Cu);
    ctx->pc = 0x2DFA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA34u;
    // 0x2dfa38: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF7A0u, 0x2DFA34u, 0x2DFA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA3Cu;
label_2dfa3c:
    // 0x2dfa3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dfa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dfa40:
    // 0x2dfa40: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2dfa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2dfa44:
    // 0x2dfa44: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2dfa44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2dfa48:
    // 0x2dfa48: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_2dfa4c:
    if (ctx->pc == 0x2DFA4Cu) {
        ctx->pc = 0x2DFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA48u;
        // 0x2dfa4c: 0x2902a  slt         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA50u;
        goto label_2dfa50;
    }
    ctx->pc = 0x2DFA48u;
    {
        const bool branch_taken_0x2dfa48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA48u;
        // 0x2dfa4c: 0x2902a  slt         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa48) {
            ctx->pc = 0x2DFA98u;
            goto label_2dfa98;
        }
    }
    ctx->pc = 0x2DFA50u;
label_2dfa50:
    // 0x2dfa50: 0xc0a36c2  jal         func_28DB08
label_2dfa54:
    if (ctx->pc == 0x2DFA54u) {
        ctx->pc = 0x2DFA58u;
        goto label_2dfa58;
    }
    ctx->pc = 0x2DFA50u;
    SET_GPR_U32(ctx, 31, 0x2DFA58u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2DFA50u, 0x2DFA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA58u;
label_2dfa58:
    // 0x2dfa58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfa58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfa5c:
    // 0x2dfa5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2dfa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2dfa60:
    // 0x2dfa60: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2dfa60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2dfa64:
    // 0x2dfa64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2dfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2dfa68:
    // 0x2dfa68: 0x40f809  jalr        $v0
label_2dfa6c:
    if (ctx->pc == 0x2DFA6Cu) {
        ctx->pc = 0x2DFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA68u;
        // 0x2dfa6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA70u;
        goto label_2dfa70;
    }
    ctx->pc = 0x2DFA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DFA70u);
        ctx->pc = 0x2DFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA68u;
        // 0x2dfa6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFA68u, 0x2DFA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFA70u;
label_2dfa70:
    // 0x2dfa70: 0x5452000a  bnel        $v0, $s2, . + 4 + (0xA << 2)
label_2dfa74:
    if (ctx->pc == 0x2DFA74u) {
        ctx->pc = 0x2DFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA70u;
        // 0x2dfa74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA78u;
        goto label_2dfa78;
    }
    ctx->pc = 0x2DFA70u;
    {
        const bool branch_taken_0x2dfa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2dfa70) {
            ctx->pc = 0x2DFA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFA70u;
            // 0x2dfa74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA9Cu;
            goto label_2dfa9c;
        }
    }
    ctx->pc = 0x2DFA78u;
label_2dfa78:
    // 0x2dfa78: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x2dfa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dfa7c:
    // 0x2dfa7c: 0xc0beef8  jal         func_2FBBE0
label_2dfa80:
    if (ctx->pc == 0x2DFA80u) {
        ctx->pc = 0x2DFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA7Cu;
        // 0x2dfa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA84u;
        goto label_2dfa84;
    }
    ctx->pc = 0x2DFA7Cu;
    SET_GPR_U32(ctx, 31, 0x2DFA84u);
    ctx->pc = 0x2DFA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA7Cu;
    // 0x2dfa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE0u, 0x2DFA7Cu, 0x2DFA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA84u;
label_2dfa84:
    // 0x2dfa84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfa88:
    // 0x2dfa88: 0xc0beefa  jal         func_2FBBE8
label_2dfa8c:
    if (ctx->pc == 0x2DFA8Cu) {
        ctx->pc = 0x2DFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA88u;
        // 0x2dfa8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA90u;
        goto label_2dfa90;
    }
    ctx->pc = 0x2DFA88u;
    SET_GPR_U32(ctx, 31, 0x2DFA90u);
    ctx->pc = 0x2DFA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA88u;
    // 0x2dfa8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE8u, 0x2DFA88u, 0x2DFA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA90u;
label_2dfa90:
    // 0x2dfa90: 0x10000015  b           . + 4 + (0x15 << 2)
label_2dfa94:
    if (ctx->pc == 0x2DFA94u) {
        ctx->pc = 0x2DFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA90u;
        // 0x2dfa94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA98u;
        goto label_2dfa98;
    }
    ctx->pc = 0x2DFA90u;
    {
        const bool branch_taken_0x2dfa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA90u;
        // 0x2dfa94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa90) {
            ctx->pc = 0x2DFAE8u;
            goto label_2dfae8;
        }
    }
    ctx->pc = 0x2DFA98u;
label_2dfa98:
    // 0x2dfa98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dfa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dfa9c:
    // 0x2dfa9c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2dfa9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2dfaa0:
    // 0x2dfaa0: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
label_2dfaa4:
    if (ctx->pc == 0x2DFAA4u) {
        ctx->pc = 0x2DFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAA0u;
        // 0x2dfaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFAA8u;
        goto label_2dfaa8;
    }
    ctx->pc = 0x2DFAA0u;
    {
        const bool branch_taken_0x2dfaa0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAA0u;
        // 0x2dfaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfaa0) {
            ctx->pc = 0x2DFAE8u;
            goto label_2dfae8;
        }
    }
    ctx->pc = 0x2DFAA8u;
label_2dfaa8:
    // 0x2dfaa8: 0xc0a367c  jal         func_28D9F0
label_2dfaac:
    if (ctx->pc == 0x2DFAACu) {
        ctx->pc = 0x2DFAB0u;
        goto label_2dfab0;
    }
    ctx->pc = 0x2DFAA8u;
    SET_GPR_U32(ctx, 31, 0x2DFAB0u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DFAA8u, 0x2DFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFAB0u;
label_2dfab0:
    // 0x2dfab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dfab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfab4:
    // 0x2dfab4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2dfab8:
    if (ctx->pc == 0x2DFAB8u) {
        ctx->pc = 0x2DFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAB4u;
        // 0x2dfab8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFABCu;
        goto label_2dfabc;
    }
    ctx->pc = 0x2DFAB4u;
    {
        const bool branch_taken_0x2dfab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAB4u;
        // 0x2dfab8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfab4) {
            ctx->pc = 0x2DFAE4u;
            goto label_2dfae4;
        }
    }
    ctx->pc = 0x2DFABCu;
label_2dfabc:
    // 0x2dfabc: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x2dfabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dfac0:
    // 0x2dfac0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2dfac0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2dfac4:
    // 0x2dfac4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dfac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dfac8:
    // 0x2dfac8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dfac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dfacc:
    // 0x2dfacc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dfaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfad0:
    // 0x2dfad0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2dfad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2dfad4:
    // 0x2dfad4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2dfad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dfad8:
    // 0x2dfad8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dfad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfadc:
    // 0x2dfadc: 0xc0beeb8  jal         func_2FBAE0
label_2dfae0:
    if (ctx->pc == 0x2DFAE0u) {
        ctx->pc = 0x2DFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFADCu;
        // 0x2dfae0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFAE4u;
        goto label_2dfae4;
    }
    ctx->pc = 0x2DFADCu;
    SET_GPR_U32(ctx, 31, 0x2DFAE4u);
    ctx->pc = 0x2DFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFADCu;
    // 0x2dfae0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBAE0u, 0x2DFADCu, 0x2DFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFAE4u;
label_2dfae4:
    // 0x2dfae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dfae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfae8:
    // 0x2dfae8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2dfae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dfaec:
    // 0x2dfaec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2dfaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dfaf0:
    // 0x2dfaf0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2dfaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dfaf4:
    // 0x2dfaf4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dfaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2dfaf8:
    // 0x2dfaf8: 0x3e00008  jr          $ra
label_2dfafc:
    if (ctx->pc == 0x2DFAFCu) {
        ctx->pc = 0x2DFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAF8u;
        // 0x2dfafc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB00u;
        goto label_fallthrough_0x2dfaf8;
    }
    ctx->pc = 0x2DFAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAF8u;
        // 0x2dfafc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dfaf8:
    ctx->pc = 0x2DFB00u;
}
