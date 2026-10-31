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

// Function: sub_00140308
// Address: 0x140308 - 0x140708
void sub_00140308_0x140308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140308_0x140308");
#endif

    switch (ctx->pc) {
        case 0x140358u: goto label_140358;
        case 0x14037cu: goto label_14037c;
        case 0x1404a0u: goto label_1404a0;
        case 0x1404c0u: goto label_1404c0;
        case 0x140520u: goto label_140520;
        case 0x14063cu: goto label_14063c;
        case 0x1406b0u: goto label_1406b0;
        case 0x1406c8u: goto label_1406c8;
        default: break;
    }

    ctx->pc = 0x140308u;

    // 0x140308: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x140308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x14030c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x14030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x140310: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x140310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x140314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x140314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140318: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x140318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x14031c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14031cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140320: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x140320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x140324: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x140324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140328: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x140328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14032c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14032cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x140330: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x140330u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x140334: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x140334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x140338: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x140338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x14033c: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x14033cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x140340: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x140340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x140344: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x140344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x140348: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x140348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14034c: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x14034cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    // 0x140350: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x140350u;
    SET_GPR_U32(ctx, 31, 0x140358u);
    ctx->pc = 0x140354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140350u;
    // 0x140354: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x140350u, 0x140358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140358u;
label_140358:
    // 0x140358: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x140358u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x14035c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x140360: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x140360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x140364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140368: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x140368u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14036c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x14036cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x140370: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x140370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x140374: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x140374u;
    SET_GPR_U32(ctx, 31, 0x14037Cu);
    ctx->pc = 0x140378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140374u;
    // 0x140378: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x140374u, 0x14037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14037Cu;
label_14037c:
    // 0x14037c: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x14037cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140380: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x140380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140384: 0x922203ed  lbu         $v0, 0x3ED($s1)
    ctx->pc = 0x140384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
    // 0x140388: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x140388u;
    {
        const bool branch_taken_0x140388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140388u;
        // 0x14038c: 0x7fa40010  sq          $a0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140388) {
            ctx->pc = 0x140444u;
            goto label_140444;
        }
    }
    ctx->pc = 0x140390u;
    // 0x140390: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x140390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140394: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140398: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x140398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14039c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x14039cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1403a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1403a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1403a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1403a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1403a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1403a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1403ac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1403acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1403b0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1403b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1403b4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1403b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1403b8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1403b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1403bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1403bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1403c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1403c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1403c4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x1403c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1403c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1403c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1403cc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1403ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1403d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1403d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1403d4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1403d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1403d8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1403d8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1403dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1403dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1403e0: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x1403e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1403e4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1403e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1403e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1403e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1403ec: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x1403ecu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1403f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1403f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1403f4: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x1403f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1403f8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1403f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1403fc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1403fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140400: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x140400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x140404: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140408: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x140408u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x14040c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x14040cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140410: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140414: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x140414u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x140418: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x140418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14041c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x14041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x140420: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x140420u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x140424: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x140424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x140428: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x140428u;
    {
        const bool branch_taken_0x140428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140428u;
        // 0x14042c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140428) {
            ctx->pc = 0x14048Cu;
            goto label_14048c;
        }
    }
    ctx->pc = 0x140430u;
    // 0x140430: 0x0  nop
    ctx->pc = 0x140430u;
    // NOP
    // 0x140434: 0x0  nop
    ctx->pc = 0x140434u;
    // NOP
    // 0x140438: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x140438u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x14043c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14043Cu;
    {
        const bool branch_taken_0x14043c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14043Cu;
        // 0x140440: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14043c) {
            ctx->pc = 0x140490u;
            goto label_140490;
        }
    }
    ctx->pc = 0x140444u;
label_140444:
    // 0x140444: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x140444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140448: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x14044c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x14044cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x140450: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x140450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x140454: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x140454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x140458: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x140458u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x14045c: 0x4a0003bf  vwaitq
    ctx->pc = 0x14045cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x140460: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x140460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x140464: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x140464u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x140468: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x14046c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x14046cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x140470: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x140470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140474: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140478: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14047c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x14047cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x140480: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x140480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x140484: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x140484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x140488: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x140488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_14048c:
    // 0x14048c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14048cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_140490:
    // 0x140490: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x140490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x140494: 0x86300352  lh          $s0, 0x352($s1)
    ctx->pc = 0x140494u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x140498: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x140498u;
    SET_GPR_U32(ctx, 31, 0x1404A0u);
    ctx->pc = 0x14049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140498u;
    // 0x14049c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x140498u, 0x1404A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404A0u;
label_1404a0:
    // 0x1404a0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1404a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1404a4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1404a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1404a8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1404a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1404ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1404acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1404b0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1404b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1404b4: 0x260501e0  addiu       $a1, $s0, 0x1E0
    ctx->pc = 0x1404b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x1404b8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1404B8u;
    SET_GPR_U32(ctx, 31, 0x1404C0u);
    ctx->pc = 0x1404BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404B8u;
    // 0x1404bc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1404B8u, 0x1404C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404C0u;
label_1404c0:
    // 0x1404c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1404c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1404c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1404c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1404c8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1404c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1404cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1404ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1404d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1404d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1404d4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1404d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1404d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1404d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1404dc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1404dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1404e0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1404e0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1404e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1404e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1404e8: 0x4485a800  mtc1        $a1, $f21
    ctx->pc = 0x1404e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1404ec: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1404ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1404f0: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x1404f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
    // 0x1404f4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1404f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1404f8: 0x0  nop
    ctx->pc = 0x1404f8u;
    // NOP
    // 0x1404fc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1404FCu;
    {
        const bool branch_taken_0x1404fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x140500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404FCu;
        // 0x140500: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404fc) {
            ctx->pc = 0x140558u;
            goto label_140558;
        }
    }
    ctx->pc = 0x140504u;
    // 0x140504: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x140504u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x140508: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x140508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14050c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x14050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x140510: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x140510u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x140514: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x140514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x140518: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x140518u;
    SET_GPR_U32(ctx, 31, 0x140520u);
    ctx->pc = 0x14051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140518u;
    // 0x14051c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x140518u, 0x140520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140520u;
label_140520:
    // 0x140520: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x140520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140524: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140528: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x140528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14052c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14052cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140530: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140534: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x140534u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x140538: 0x4a0003bf  vwaitq
    ctx->pc = 0x140538u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14053c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x14053cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140540: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x140540u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x140544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x140544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140548: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x140548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x14054c: 0x0  nop
    ctx->pc = 0x14054cu;
    // NOP
    // 0x140550: 0x0  nop
    ctx->pc = 0x140550u;
    // NOP
    // 0x140554: 0x46150043  div.s       $f1, $f0, $f21
    ctx->pc = 0x140554u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_140558:
    // 0x140558: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x140558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14055c: 0x0  nop
    ctx->pc = 0x14055cu;
    // NOP
    // 0x140560: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x140560u;
    {
        const bool branch_taken_0x140560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140560) {
            ctx->pc = 0x1405A4u;
            goto label_1405a4;
        }
    }
    ctx->pc = 0x140568u;
    // 0x140568: 0x922203ed  lbu         $v0, 0x3ED($s1)
    ctx->pc = 0x140568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
    // 0x14056c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x14056cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x140570: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140570u;
    {
        const bool branch_taken_0x140570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140570u;
        // 0x140574: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140570) {
            ctx->pc = 0x140584u;
            goto label_140584;
        }
    }
    ctx->pc = 0x140578u;
    // 0x140578: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x140578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x14057c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14057Cu;
    {
        const bool branch_taken_0x14057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14057c) {
            ctx->pc = 0x140588u;
            goto label_140588;
        }
    }
    ctx->pc = 0x140584u;
label_140584:
    // 0x140584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140588:
    // 0x140588: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x140588u;
    {
        const bool branch_taken_0x140588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140588u;
        // 0x14058c: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140588) {
            ctx->pc = 0x140608u;
            goto label_140608;
        }
    }
    ctx->pc = 0x140590u;
    // 0x140590: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x140590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x140594: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x140594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x140598: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x140598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14059c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14059Cu;
    {
        const bool branch_taken_0x14059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1405A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14059Cu;
        // 0x1405a0: 0x784301e0  lq          $v1, 0x1E0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14059c) {
            ctx->pc = 0x140600u;
            goto label_140600;
        }
    }
    ctx->pc = 0x1405A4u;
label_1405a4:
    // 0x1405a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1405a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1405a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1405a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1405ac: 0x0  nop
    ctx->pc = 0x1405acu;
    // NOP
    // 0x1405b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1405b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1405b4: 0x0  nop
    ctx->pc = 0x1405b4u;
    // NOP
    // 0x1405b8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1405B8u;
    {
        const bool branch_taken_0x1405b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1405BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405B8u;
        // 0x1405bc: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405b8) {
            ctx->pc = 0x140608u;
            goto label_140608;
        }
    }
    ctx->pc = 0x1405C0u;
    // 0x1405c0: 0x922203ed  lbu         $v0, 0x3ED($s1)
    ctx->pc = 0x1405c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
    // 0x1405c4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1405c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1405c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1405C8u;
    {
        const bool branch_taken_0x1405c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1405CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405C8u;
        // 0x1405cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405c8) {
            ctx->pc = 0x1405E4u;
            goto label_1405e4;
        }
    }
    ctx->pc = 0x1405D0u;
    // 0x1405d0: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x1405d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x1405d4: 0x86230352  lh          $v1, 0x352($s1)
    ctx->pc = 0x1405d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x1405d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1405d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1405dc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1405DCu;
    {
        const bool branch_taken_0x1405dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1405dc) {
            ctx->pc = 0x1405E8u;
            goto label_1405e8;
        }
    }
    ctx->pc = 0x1405E4u;
label_1405e4:
    // 0x1405e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1405e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1405e8:
    // 0x1405e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1405E8u;
    {
        const bool branch_taken_0x1405e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1405ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405E8u;
        // 0x1405ec: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405e8) {
            ctx->pc = 0x140608u;
            goto label_140608;
        }
    }
    ctx->pc = 0x1405F0u;
    // 0x1405f0: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x1405f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x1405f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1405f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1405f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1405f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1405fc: 0x784301f0  lq          $v1, 0x1F0($v0)
    ctx->pc = 0x1405fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 496)));
label_140600:
    // 0x140600: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x140600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x140604: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x140604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_140608:
    // 0x140608: 0x922303ed  lbu         $v1, 0x3ED($s1)
    ctx->pc = 0x140608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
    // 0x14060c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x14060Cu;
    {
        const bool branch_taken_0x14060c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x140610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14060Cu;
        // 0x140610: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14060c) {
            ctx->pc = 0x1406C8u;
            goto label_1406c8;
        }
    }
    ctx->pc = 0x140614u;
    // 0x140614: 0xc62103c8  lwc1        $f1, 0x3C8($s1)
    ctx->pc = 0x140614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14061c: 0x0  nop
    ctx->pc = 0x14061cu;
    // NOP
    // 0x140620: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x140620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140624: 0x0  nop
    ctx->pc = 0x140624u;
    // NOP
    // 0x140628: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x140628u;
    {
        const bool branch_taken_0x140628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140628u;
        // 0x14062c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140628) {
            ctx->pc = 0x1406C8u;
            goto label_1406c8;
        }
    }
    ctx->pc = 0x140630u;
    // 0x140630: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x140630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x140634: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x140634u;
    SET_GPR_U32(ctx, 31, 0x14063Cu);
    ctx->pc = 0x140638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140634u;
    // 0x140638: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x140634u, 0x14063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14063Cu;
label_14063c:
    // 0x14063c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x14063cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140640: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140644: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x140644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140648: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14064c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x14064cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x140650: 0x4a0003bf  vwaitq
    ctx->pc = 0x140650u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x140654: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x140654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140658: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x140658u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14065c: 0xc62003c8  lwc1        $f0, 0x3C8($s1)
    ctx->pc = 0x14065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140660: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x140660u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x140664: 0x0  nop
    ctx->pc = 0x140664u;
    // NOP
    // 0x140668: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x140668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14066c: 0x0  nop
    ctx->pc = 0x14066cu;
    // NOP
    // 0x140670: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x140670u;
    {
        const bool branch_taken_0x140670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x140674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140670u;
        // 0x140674: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140670) {
            ctx->pc = 0x1406C8u;
            goto label_1406c8;
        }
    }
    ctx->pc = 0x140678u;
    // 0x140678: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x140678u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x14067c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x14067cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140680: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x140680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x140684: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x140684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x140688: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x140688u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x14068c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x14068cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x140690: 0x4a0003bf  vwaitq
    ctx->pc = 0x140690u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x140694: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x140694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x140698: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x140698u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14069c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x14069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1406a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1406a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1406a4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1406a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1406a8: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x1406A8u;
    SET_GPR_U32(ctx, 31, 0x1406B0u);
    ctx->pc = 0x1406ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406A8u;
    // 0x1406ac: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1406A8u, 0x1406B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406B0u;
label_1406b0:
    // 0x1406b0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1406b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1406b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1406b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1406b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1406b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406bc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1406c0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1406C0u;
    SET_GPR_U32(ctx, 31, 0x1406C8u);
    ctx->pc = 0x1406C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406C0u;
    // 0x1406c4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1406C0u, 0x1406C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406C8u;
label_1406c8:
    // 0x1406c8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x1406c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1406cc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1406ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406d0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1406d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1406d4: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x1406d4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x1406d8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1406d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1406dc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1406dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1406e0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1406e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1406e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1406e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1406e8: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1406e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1406ec: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1406ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1406f0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1406f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1406f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1406F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1406F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406F4u;
        // 0x1406f8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1406F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1406FCu;
    // 0x1406fc: 0x0  nop
    ctx->pc = 0x1406fcu;
    // NOP
    // 0x140700: 0x0  nop
    ctx->pc = 0x140700u;
    // NOP
    // 0x140704: 0x0  nop
    ctx->pc = 0x140704u;
    // NOP
    ctx->pc = 0x140708u;
}
