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

// Function: sub_0027A2F8
// Address: 0x27a2f8 - 0x27a4b0
void sub_0027A2F8_0x27a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A2F8_0x27a2f8");
#endif

    switch (ctx->pc) {
        case 0x27a3e8u: goto label_27a3e8;
        case 0x27a41cu: goto label_27a41c;
        case 0x27a448u: goto label_27a448;
        case 0x27a474u: goto label_27a474;
        case 0x27a484u: goto label_27a484;
        default: break;
    }

    ctx->pc = 0x27a2f8u;

    // 0x27a2f8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x27a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x27a2fc: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x27a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
    // 0x27a300: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27a300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
    // 0x27a304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a308: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x27a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x27a30c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x27a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x27a310: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x27a310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x27a314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a318: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x27a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x27a31c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x27a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x27a320: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x27a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x27a324: 0x26110090  addiu       $s1, $s0, 0x90
    ctx->pc = 0x27a324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x27a328: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x27a328u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x27a32c: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x27a32cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x27a330: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x27a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x27a334: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27a334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a338: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x27a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x27a33c: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x27a33cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a340: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x27a340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27a344: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x27a344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x27a348: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x27a348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27a34c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x27a34cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27a350: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x27a350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27a354: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x27a354u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x27a358: 0x4a0003bf  vwaitq
    ctx->pc = 0x27a358u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x27a35c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x27a35cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27a360: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x27a360u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x27a364: 0xe460096c  swc1        $f0, 0x96C($v1)
    ctx->pc = 0x27a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2412), bits); }
    // 0x27a368: 0xacc000d8  sw          $zero, 0xD8($a2)
    ctx->pc = 0x27a368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 0));
    // 0x27a36c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27a36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a370: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x27a370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27a374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27a378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a37c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x27a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x27a380: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x27a380u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a384: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x27a384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x27a388: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x27a388u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a38c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x27a38cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27a390: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x27a390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x27a394: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x27a394u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x27a398: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x27a398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27a39c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x27a39cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x27a3a0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x27a3a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27a3a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x27a3a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27a3a8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x27a3a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x27a3ac: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x27a3acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x27a3b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x27a3b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27a3b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x27a3b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27a3b8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x27a3b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27a3bc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x27a3bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x27a3c0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x27a3c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x27a3c4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x27a3c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27a3c8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x27a3c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x27a3cc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x27a3ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x27a3d0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x27a3d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27a3d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x27a3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x27a3d8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x27a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x27a3dc: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x27a3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27a3e0: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x27A3E0u;
    SET_GPR_U32(ctx, 31, 0x27A3E8u);
    ctx->pc = 0x27A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A3E0u;
    // 0x27a3e4: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x27A3E0u, 0x27A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A3E8u;
label_27a3e8:
    // 0x27a3e8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27a3ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a3f0: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27a3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27a3f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27a3f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a3f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x27a3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x27a3fc: 0x250898c0  addiu       $t0, $t0, -0x6740
    ctx->pc = 0x27a3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940864));
    // 0x27a400: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27a400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27a404: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a408: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x27a408u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27a40c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27a40cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27a410: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a410u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27a414: 0xc089d66  jal         func_227598
    ctx->pc = 0x27A414u;
    SET_GPR_U32(ctx, 31, 0x27A41Cu);
    ctx->pc = 0x27A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A414u;
    // 0x27a418: 0xf33821  addu        $a3, $a3, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A414u, 0x27A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A41Cu;
label_27a41c:
    // 0x27a41c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27A41Cu;
    {
        const bool branch_taken_0x27a41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A41Cu;
        // 0x27a420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a41c) {
            ctx->pc = 0x27A47Cu;
            goto label_27a47c;
        }
    }
    ctx->pc = 0x27A424u;
    // 0x27a424: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x27a424u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27a428: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27a428u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27a42c: 0x25089b30  addiu       $t0, $t0, -0x64D0
    ctx->pc = 0x27a42cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941488));
    // 0x27a430: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27a434: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27a438: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27a438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27a43c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a440: 0xc089d66  jal         func_227598
    ctx->pc = 0x27A440u;
    SET_GPR_U32(ctx, 31, 0x27A448u);
    ctx->pc = 0x27A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A440u;
    // 0x27a444: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A440u, 0x27A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A448u;
label_27a448:
    // 0x27a448: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27A448u;
    {
        const bool branch_taken_0x27a448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A448u;
        // 0x27a44c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a448) {
            ctx->pc = 0x27A47Cu;
            goto label_27a47c;
        }
    }
    ctx->pc = 0x27A450u;
    // 0x27a450: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x27a450u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27a454: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27a454u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27a458: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a45c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27a45cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27a460: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a460u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27a464: 0x25089a08  addiu       $t0, $t0, -0x65F8
    ctx->pc = 0x27a464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941192));
    // 0x27a468: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27a468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27a46c: 0xc089d66  jal         func_227598
    ctx->pc = 0x27A46Cu;
    SET_GPR_U32(ctx, 31, 0x27A474u);
    ctx->pc = 0x27A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A46Cu;
    // 0x27a470: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A46Cu, 0x27A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A474u;
label_27a474:
    // 0x27a474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A474u;
    {
        const bool branch_taken_0x27a474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A474u;
        // 0x27a478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a474) {
            ctx->pc = 0x27A488u;
            goto label_27a488;
        }
    }
    ctx->pc = 0x27A47Cu;
label_27a47c:
    // 0x27a47c: 0xc0e1a34  jal         func_3868D0
    ctx->pc = 0x27A47Cu;
    SET_GPR_U32(ctx, 31, 0x27A484u);
    ctx->pc = 0x27A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A47Cu;
    // 0x27a480: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27A47Cu, 0x27A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A484u;
label_27a484:
    // 0x27a484: 0x8fb40010  lw          $s4, 0x10($sp)
    ctx->pc = 0x27a484u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_27a488:
    // 0x27a488: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27a488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a48c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x27a48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x27a490: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x27a490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27a494: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x27a494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27a498: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x27a498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27a49c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x27a49cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27a4a0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x27a4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27a4a4: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x27a4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27a4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4A8u;
        // 0x27a4ac: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A4B0u;
}
