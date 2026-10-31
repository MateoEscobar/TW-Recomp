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

// Function: sub_00267338
// Address: 0x267338 - 0x2674c0
void sub_00267338_0x267338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267338_0x267338");
#endif

    switch (ctx->pc) {
        case 0x26737cu: goto label_26737c;
        default: break;
    }

    ctx->pc = 0x267338u;

    // 0x267338: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x267338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26733c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x26733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x267340: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x267340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x267344: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x267344u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x267348: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x267348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x26734c: 0x24910090  addiu       $s1, $a0, 0x90
    ctx->pc = 0x26734cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x267350: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x267350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x267354: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x267354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x267358: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x267358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26735c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26735cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267360: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x267360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267368: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x267368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x26736c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x26736cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x267370: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x267370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x267374: 0xc0cd940  jal         func_336500
    ctx->pc = 0x267374u;
    SET_GPR_U32(ctx, 31, 0x26737Cu);
    ctx->pc = 0x267378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267374u;
    // 0x267378: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x267374u, 0x26737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26737Cu;
label_26737c:
    // 0x26737c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x26737cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267380: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x267380u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267384: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x267384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x267388: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x267388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x26738c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x26738cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x267390: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x267390u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267394: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x267394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x267398: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x267398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26739c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26739cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2673a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2673a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2673a4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2673a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2673a8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2673a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2673ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2673acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2673b0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2673b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2673b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2673b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2673b8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2673b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2673bc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2673bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2673c0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2673c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2673c4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2673c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2673c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2673c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2673cc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2673ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2673d0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2673d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2673d4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2673d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2673d8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2673d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2673dc: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2673dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2673e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2673e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2673e4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2673e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2673e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2673e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2673ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2673ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2673f0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2673f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2673f4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2673f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2673f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2673f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2673fc: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2673FCu;
    {
        const bool branch_taken_0x2673fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x267400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673FCu;
        // 0x267400: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673fc) {
            ctx->pc = 0x267424u;
            goto label_267424;
        }
    }
    ctx->pc = 0x267404u;
    // 0x267404: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x267404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267408: 0x0  nop
    ctx->pc = 0x267408u;
    // NOP
    // 0x26740c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26740cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267410: 0x0  nop
    ctx->pc = 0x267410u;
    // NOP
    // 0x267414: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x267414u;
    {
        const bool branch_taken_0x267414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267414u;
        // 0x267418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267414) {
            ctx->pc = 0x2674A4u;
            goto label_2674a4;
        }
    }
    ctx->pc = 0x26741Cu;
    // 0x26741c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26741Cu;
    {
        const bool branch_taken_0x26741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26741Cu;
        // 0x267420: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26741c) {
            ctx->pc = 0x2674A4u;
            goto label_2674a4;
        }
    }
    ctx->pc = 0x267424u;
label_267424:
    // 0x267424: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x267424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x267428: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x267428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x26742c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26742cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267430: 0x0  nop
    ctx->pc = 0x267430u;
    // NOP
    // 0x267434: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x267434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267438: 0x0  nop
    ctx->pc = 0x267438u;
    // NOP
    // 0x26743c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x26743Cu;
    {
        const bool branch_taken_0x26743c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x267440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26743Cu;
        // 0x267440: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26743c) {
            ctx->pc = 0x2674A4u;
            goto label_2674a4;
        }
    }
    ctx->pc = 0x267444u;
    // 0x267444: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x267444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
    // 0x267448: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x267448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x26744c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26744cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267450: 0x0  nop
    ctx->pc = 0x267450u;
    // NOP
    // 0x267454: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x267454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267458: 0x0  nop
    ctx->pc = 0x267458u;
    // NOP
    // 0x26745c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26745Cu;
    {
        const bool branch_taken_0x26745c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26745c) {
            ctx->pc = 0x26746Cu;
            goto label_26746c;
        }
    }
    ctx->pc = 0x267464u;
    // 0x267464: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x267464u;
    {
        const bool branch_taken_0x267464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267464u;
        // 0x267468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267464) {
            ctx->pc = 0x2674A4u;
            goto label_2674a4;
        }
    }
    ctx->pc = 0x26746Cu;
label_26746c:
    // 0x26746c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x26746cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x267470: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x267470u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x267474: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x267474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x267478: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x267478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x26747c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x26747cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x267480: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x267480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x267484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x267484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26748c: 0x0  nop
    ctx->pc = 0x26748cu;
    // NOP
    // 0x267490: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x267490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267494: 0x0  nop
    ctx->pc = 0x267494u;
    // NOP
    // 0x267498: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x267498u;
    {
        const bool branch_taken_0x267498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267498u;
        // 0x26749c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267498) {
            ctx->pc = 0x2674A4u;
            goto label_2674a4;
        }
    }
    ctx->pc = 0x2674A0u;
    // 0x2674a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2674a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2674a4:
    // 0x2674a4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2674a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2674a8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2674a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2674ac: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2674acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2674b0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2674b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2674b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2674b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2674b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2674B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2674BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674B8u;
        // 0x2674bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2674B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2674C0u;
}
