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

// Function: sub_00101360
// Address: 0x101360 - 0x101558
void sub_00101360_0x101360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101360_0x101360");
#endif

    switch (ctx->pc) {
        case 0x101384u: goto label_101384;
        case 0x101398u: goto label_101398;
        case 0x101494u: goto label_101494;
        case 0x1014a0u: goto label_1014a0;
        case 0x1014acu: goto label_1014ac;
        case 0x1014b8u: goto label_1014b8;
        case 0x1014c4u: goto label_1014c4;
        case 0x1014d8u: goto label_1014d8;
        case 0x1014e8u: goto label_1014e8;
        case 0x1014f0u: goto label_1014f0;
        case 0x101500u: goto label_101500;
        case 0x101518u: goto label_101518;
        default: break;
    }

    ctx->pc = 0x101360u;

    // 0x101360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x101360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x101364: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x101364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x101368: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x101368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x10136c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10136cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101370: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x101370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x101374: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x101374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x101378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x101378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10137c: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x10137Cu;
    SET_GPR_U32(ctx, 31, 0x101384u);
    ctx->pc = 0x101380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10137Cu;
    // 0x101380: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x10137Cu, 0x101384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101384u;
label_101384:
    // 0x101384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101388: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x101388u;
    {
        const bool branch_taken_0x101388 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101388u;
        // 0x10138c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101388) {
            ctx->pc = 0x1014F8u;
            goto label_1014f8;
        }
    }
    ctx->pc = 0x101390u;
    // 0x101390: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x101390u;
    {
        const bool branch_taken_0x101390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101390u;
        // 0x101394: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101390) {
            ctx->pc = 0x101540u;
            goto label_101540;
        }
    }
    ctx->pc = 0x101398u;
label_101398:
    // 0x101398: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10139c: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x10139cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x1013a0: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x1013a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x1013a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1013a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1013a8: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x1013a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x1013ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1013acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1013b0: 0x0  nop
    ctx->pc = 0x1013b0u;
    // NOP
    // 0x1013b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1013b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1013b8: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x1013b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
    // 0x1013bc: 0x34211002  ori         $at, $at, 0x1002
    ctx->pc = 0x1013bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4098);
    // 0x1013c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1013c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1013c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1013c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1013c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1013c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1013cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1013ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1013d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1013d4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1013d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1013d8: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1013d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1013dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1013dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1013e0: 0x0  nop
    ctx->pc = 0x1013e0u;
    // NOP
    // 0x1013e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1013e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1013e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1013e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1013ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1013ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1013f0: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1013f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1013f4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1013f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1013f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1013f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1013fc: 0x0  nop
    ctx->pc = 0x1013fcu;
    // NOP
    // 0x101400: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x101400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x101404: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x101404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x101408: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x101408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10140c: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x10140cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x101410: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x101410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x101414: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x101414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x101418: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x101418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x10141c: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x10141cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x101420: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x101420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x101424: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x101424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101428: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x101428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10142c: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x10142cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x101430: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x101430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
    // 0x101434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101438: 0x0  nop
    ctx->pc = 0x101438u;
    // NOP
    // 0x10143c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10143cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x101440: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x101440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x101444: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x101444u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x101448: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x101448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10144c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x10144cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x101450: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x101450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x101454: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x101454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x101458: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x101458u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10145c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x10145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x101460: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x101460u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x101464: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x101464u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x101468: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x101468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10146c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x10146cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x101470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101478: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x101478u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x10147c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x10147cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x101480: 0x0  nop
    ctx->pc = 0x101480u;
    // NOP
    // 0x101484: 0x0  nop
    ctx->pc = 0x101484u;
    // NOP
    // 0x101488: 0x46000004  c1          0x4
    ctx->pc = 0x101488u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x10148c: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x10148Cu;
    SET_GPR_U32(ctx, 31, 0x101494u);
    ctx->pc = 0x101490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10148Cu;
    // 0x101490: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x10148Cu, 0x101494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101494u;
label_101494:
    // 0x101494: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x101494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x101498: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x101498u;
    SET_GPR_U32(ctx, 31, 0x1014A0u);
    ctx->pc = 0x10149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101498u;
    // 0x10149c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x101498u, 0x1014A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014A0u;
label_1014a0:
    // 0x1014a0: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x1014a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1014a4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x1014A4u;
    SET_GPR_U32(ctx, 31, 0x1014ACu);
    ctx->pc = 0x1014A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014A4u;
    // 0x1014a8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1014A4u, 0x1014ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014ACu;
label_1014ac:
    // 0x1014ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1014acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1014b0: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x1014B0u;
    SET_GPR_U32(ctx, 31, 0x1014B8u);
    ctx->pc = 0x1014B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014B0u;
    // 0x1014b4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x1014B0u, 0x1014B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014B8u;
label_1014b8:
    // 0x1014b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1014b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1014bc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x1014BCu;
    SET_GPR_U32(ctx, 31, 0x1014C4u);
    ctx->pc = 0x1014C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014BCu;
    // 0x1014c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x1014BCu, 0x1014C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014C4u;
label_1014c4:
    // 0x1014c4: 0x86650110  lh          $a1, 0x110($s3)
    ctx->pc = 0x1014c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x1014c8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1014c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1014cc: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1014ccu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1014d0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x1014D0u;
    SET_GPR_U32(ctx, 31, 0x1014D8u);
    ctx->pc = 0x1014D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014D0u;
    // 0x1014d4: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1014D0u, 0x1014D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014D8u;
label_1014d8:
    // 0x1014d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1014d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1014dc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1014dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1014e0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x1014E0u;
    SET_GPR_U32(ctx, 31, 0x1014E8u);
    ctx->pc = 0x1014E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014E0u;
    // 0x1014e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x1014E0u, 0x1014E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014E8u;
label_1014e8:
    // 0x1014e8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1014E8u;
    SET_GPR_U32(ctx, 31, 0x1014F0u);
    ctx->pc = 0x1014ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014E8u;
    // 0x1014ec: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1014E8u, 0x1014F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014F0u;
label_1014f0:
    // 0x1014f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1014F0u;
    {
        const bool branch_taken_0x1014f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014F0u;
        // 0x1014f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014f0) {
            ctx->pc = 0x10153Cu;
            goto label_10153c;
        }
    }
    ctx->pc = 0x1014F8u;
label_1014f8:
    // 0x1014f8: 0xc040494  jal         func_101250
    ctx->pc = 0x1014F8u;
    SET_GPR_U32(ctx, 31, 0x101500u);
    ctx->pc = 0x1014FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014F8u;
    // 0x1014fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x1014F8u, 0x101500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101500u;
label_101500:
    // 0x101500: 0x9604001a  lhu         $a0, 0x1A($s0)
    ctx->pc = 0x101500u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x101504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101508: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x101508u;
    {
        const bool branch_taken_0x101508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101508u;
        // 0x10150c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101508) {
            ctx->pc = 0x101538u;
            goto label_101538;
        }
    }
    ctx->pc = 0x101510u;
    // 0x101510: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x101510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x101514: 0x0  nop
    ctx->pc = 0x101514u;
    // NOP
label_101518:
    // 0x101518: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x101518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10151c: 0x5045ff9e  beql        $v0, $a1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x10151Cu;
    {
        const bool branch_taken_0x10151c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x10151c) {
            ctx->pc = 0x101520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10151Cu;
            // 0x101520: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101398;
        }
    }
    ctx->pc = 0x101524u;
    // 0x101524: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x101524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101528: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x101528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x10152c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x10152cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x101530: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x101530u;
    {
        const bool branch_taken_0x101530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101530u;
        // 0x101534: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101530) {
            ctx->pc = 0x101518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101518;
        }
    }
    ctx->pc = 0x101538u;
label_101538:
    // 0x101538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10153c:
    // 0x10153c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x10153cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_101540:
    // 0x101540: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x101540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101544: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x101544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101548: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x101548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10154c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101550: 0x3e00008  jr          $ra
    ctx->pc = 0x101550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101550u;
        // 0x101554: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101558u;
}
