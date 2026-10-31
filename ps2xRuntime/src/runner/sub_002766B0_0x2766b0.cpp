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

// Function: sub_002766B0
// Address: 0x2766b0 - 0x276810
void sub_002766B0_0x2766b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002766B0_0x2766b0");
#endif

    switch (ctx->pc) {
        case 0x2767b8u: goto label_2767b8;
        case 0x2767ccu: goto label_2767cc;
        case 0x2767d8u: goto label_2767d8;
        case 0x2767e8u: goto label_2767e8;
        case 0x2767f8u: goto label_2767f8;
        default: break;
    }

    ctx->pc = 0x2766b0u;

    // 0x2766b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2766b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2766b4: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2766b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x2766b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2766b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2766bc: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x2766bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
    // 0x2766c0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2766c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2766c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2766c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766c8: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2766c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2766cc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2766ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2766d0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2766d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2766d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2766d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2766d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2766d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2766dc: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2766dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2766e0: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2766e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2766e4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2766e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2766e8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2766e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2766ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2766ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2766f0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2766f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2766f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2766f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2766f8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2766f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2766fc: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x2766fcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x276700: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x276700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x276704: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x276704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x276708: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x276708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27670c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27670cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276710: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x276710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x276714: 0x84a20092  lh          $v0, 0x92($a1)
    ctx->pc = 0x276714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x276718: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x276718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27671c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x27671cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x276720: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x276720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x276724: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x276724u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276728: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x276728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x27672c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x27672cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x276730: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x276730u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x276734: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x276734u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x276738: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x276738u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x27673c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x27673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x276740: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x276740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x276744: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x276744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x276748: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x276748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27674c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x27674cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x276750: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x276750u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x276754: 0x4a0003bf  vwaitq
    ctx->pc = 0x276754u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x276758: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x276758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27675c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x27675cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x276760: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x276764: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x276764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x276768: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x276768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27676c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x27676cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x276770: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x276770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x276774: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x276774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276778: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x276778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x27677c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x27677cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x276780: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x276780u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x276784: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x276784u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x276788: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x276788u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x27678c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x27678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x276790: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x276790u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x276794: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x276794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x276798: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x276798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x27679c: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x27679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2767a0: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x2767a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x2767a4: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2767a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x2767a8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2767a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2767ac: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2767acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2767b0: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x2767B0u;
    SET_GPR_U32(ctx, 31, 0x2767B8u);
    ctx->pc = 0x2767B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767B0u;
    // 0x2767b4: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2767B0u, 0x2767B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767B8u;
label_2767b8:
    // 0x2767b8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2767b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2767bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2767bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2767c0: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x2767c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2767c4: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x2767C4u;
    SET_GPR_U32(ctx, 31, 0x2767CCu);
    ctx->pc = 0x2767C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767C4u;
    // 0x2767c8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2767C4u, 0x2767CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767CCu;
label_2767cc:
    // 0x2767cc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2767ccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2767d0: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x2767D0u;
    SET_GPR_U32(ctx, 31, 0x2767D8u);
    ctx->pc = 0x2767D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767D0u;
    // 0x2767d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x2767D0u, 0x2767D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767D8u;
label_2767d8:
    // 0x2767d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2767d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767dc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2767dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2767e0: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x2767E0u;
    SET_GPR_U32(ctx, 31, 0x2767E8u);
    ctx->pc = 0x2767E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767E0u;
    // 0x2767e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2767E0u, 0x2767E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767E8u;
label_2767e8:
    // 0x2767e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2767e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2767ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2767f0: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x2767F0u;
    SET_GPR_U32(ctx, 31, 0x2767F8u);
    ctx->pc = 0x2767F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767F0u;
    // 0x2767f4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x2767F0u, 0x2767F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767F8u;
label_2767f8:
    // 0x2767f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2767f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2767fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2767fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276800: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x276800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x276804: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x276804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276808: 0x3e00008  jr          $ra
    ctx->pc = 0x276808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276808u;
        // 0x27680c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276810u;
}
