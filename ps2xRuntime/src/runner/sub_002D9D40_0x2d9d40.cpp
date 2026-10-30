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

// Function: sub_002D9D40
// Address: 0x2d9d40 - 0x2da2c0
void sub_002D9D40_0x2d9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9D40_0x2d9d40");
#endif

    switch (ctx->pc) {
        case 0x2d9d98u: goto label_2d9d98;
        case 0x2d9e30u: goto label_2d9e30;
        case 0x2d9e44u: goto label_2d9e44;
        case 0x2d9efcu: goto label_2d9efc;
        case 0x2d9f1cu: goto label_2d9f1c;
        case 0x2d9f80u: goto label_2d9f80;
        case 0x2d9fe8u: goto label_2d9fe8;
        case 0x2da038u: goto label_2da038;
        case 0x2da058u: goto label_2da058;
        case 0x2da078u: goto label_2da078;
        case 0x2da090u: goto label_2da090;
        case 0x2da0b0u: goto label_2da0b0;
        case 0x2da1bcu: goto label_2da1bc;
        case 0x2da1c8u: goto label_2da1c8;
        case 0x2da1e0u: goto label_2da1e0;
        case 0x2da200u: goto label_2da200;
        case 0x2da230u: goto label_2da230;
        case 0x2da254u: goto label_2da254;
        case 0x2da26cu: goto label_2da26c;
        default: break;
    }

    ctx->pc = 0x2d9d40u;

    // 0x2d9d40: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x2d9d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x2d9d44: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x2d9d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x2d9d48: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x2d9d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x2d9d4c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2d9d4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d50: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x2d9d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x2d9d54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d9d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d58: 0xe7b50268  swc1        $f21, 0x268($sp)
    ctx->pc = 0x2d9d58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2d9d5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9d5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d60: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x2d9d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x2d9d64: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2d9d64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2d9d68: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x2d9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x2d9d6c: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x2d9d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x2d9d70: 0x27d10090  addiu       $s1, $fp, 0x90
    ctx->pc = 0x2d9d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x2d9d74: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x2d9d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x2d9d78: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x2d9d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x2d9d7c: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x2d9d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x2d9d80: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x2d9d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x2d9d84: 0xe7b80280  swc1        $f24, 0x280($sp)
    ctx->pc = 0x2d9d84u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x2d9d88: 0xe7b70278  swc1        $f23, 0x278($sp)
    ctx->pc = 0x2d9d88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2d9d8c: 0xe7b60270  swc1        $f22, 0x270($sp)
    ctx->pc = 0x2d9d8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x2d9d90: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D9D90u;
    SET_GPR_U32(ctx, 31, 0x2D9D98u);
    ctx->pc = 0x2D9D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D90u;
    // 0x2d9d94: 0xe7b40260  swc1        $f20, 0x260($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D9D90u, 0x2D9D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D98u;
label_2d9d98:
    // 0x2d9d98: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2d9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x2d9d9c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2d9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2d9da0: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2d9da0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d9da4: 0x24724b00  addiu       $s2, $v1, 0x4B00
    ctx->pc = 0x2d9da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2d9da8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d9dac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d9db0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2d9db0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9db4: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D9DB4u;
    {
        const bool branch_taken_0x2d9db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DB4u;
        // 0x2d9db8: 0x7fa60000  sq          $a2, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9db4) {
            ctx->pc = 0x2D9EDCu;
            goto label_2d9edc;
        }
    }
    ctx->pc = 0x2D9DBCu;
    // 0x2d9dbc: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2d9dbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2d9dc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d9dc4: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x2d9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x2d9dc8: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x2d9dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x2d9dcc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d9dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d9dd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9dd4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2d9dd8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2d9dd8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9ddc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2d9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d9de0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d9de0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9de4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d9de4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d9de8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2d9de8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2d9dec: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d9decu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d9df0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d9df0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d9df4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d9df4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d9df8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d9df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d9dfc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2d9dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d9e00: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d9e00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d9e04: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d9e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d9e08: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d9e08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2d9e0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d9e0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d9e10: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2d9e10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d9e14: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2d9e14u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d9e18: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2d9e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2d9e1c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2d9e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2d9e20: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2d9e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2d9e24: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d9e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d9e28: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x2D9E28u;
    SET_GPR_U32(ctx, 31, 0x2D9E30u);
    ctx->pc = 0x2D9E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9E28u;
    // 0x2d9e2c: 0x7fa40050  sq          $a0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2D9E28u, 0x2D9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E30u;
label_2d9e30:
    // 0x2d9e30: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x2d9e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x2d9e34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d9e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d9e38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9e3c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2D9E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D9E44u);
    ctx->pc = 0x2D9E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9E3Cu;
    // 0x2d9e40: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2D9E3Cu, 0x2D9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E44u;
label_2d9e44:
    // 0x2d9e44: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2d9e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9e48: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2d9e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d9e4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d9e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d9e50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d9e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d9e54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d9e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d9e58: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d9e58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d9e5c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d9e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d9e60: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2d9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2d9e64: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2d9e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2d9e68: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9e6c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2d9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9e70: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2d9e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d9e74: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d9e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d9e78: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2d9e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d9e7c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2d9e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d9e80: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d9e80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9e84: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2d9e84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9e88: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d9e88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d9e8c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d9e8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d9e90: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2d9e90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d9e94: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2d9e94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d9e98: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2d9e98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d9e9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2d9e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d9ea0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2d9ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d9ea4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2d9ea4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d9ea8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2d9ea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d9eac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2d9eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d9eb0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2d9eb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d9eb4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2d9eb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d9eb8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2d9eb8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d9ebc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2d9ebcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d9ec0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2d9ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d9ec4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2d9ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d9ec8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2d9ec8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2d9ecc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2d9ed0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2d9ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d9ed4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9ED4u;
    {
        const bool branch_taken_0x2d9ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9ED4u;
        // 0x2d9ed8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ed4) {
            ctx->pc = 0x2D9F24u;
            goto label_2d9f24;
        }
    }
    ctx->pc = 0x2D9EDCu;
label_2d9edc:
    // 0x2d9edc: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2d9edcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d9ee0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2d9ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d9ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ee8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2d9ee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9eec: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d9eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d9ef0: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2d9ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2d9ef4: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2D9EF4u;
    SET_GPR_U32(ctx, 31, 0x2D9EFCu);
    ctx->pc = 0x2D9EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9EF4u;
    // 0x2d9ef8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2D9EF4u, 0x2D9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EFCu;
label_2d9efc:
    // 0x2d9efc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2d9efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f04: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2d9f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2d9f08: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2d9f08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d9f0c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d9f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d9f10: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2d9f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2d9f14: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x2D9F14u;
    SET_GPR_U32(ctx, 31, 0x2D9F1Cu);
    ctx->pc = 0x2D9F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9F14u;
    // 0x2d9f18: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2D9F14u, 0x2D9F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F1Cu;
label_2d9f1c:
    // 0x2d9f1c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2d9f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9f20: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d9f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2d9f24:
    // 0x2d9f24: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2d9f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9f28: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2d9f28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2d9f2c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2d9f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2d9f30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d9f34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9f38: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2d9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d9f3c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d9f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d9f40: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2d9f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f44: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2d9f44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9f48: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2d9f48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f4c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2d9f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9f50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f54: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x2d9f54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2d9f58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d9f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d9f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d9f60: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d9f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d9f64: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x2d9f64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d9f68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d9f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f6c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2d9f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2d9f70: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2d9f70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f74: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2d9f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d9f78: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2D9F78u;
    SET_GPR_U32(ctx, 31, 0x2D9F80u);
    ctx->pc = 0x2D9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9F78u;
    // 0x2d9f7c: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2D9F78u, 0x2D9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F80u;
label_2d9f80:
    // 0x2d9f80: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x2d9f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x2d9f84: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2d9f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2d9f88: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2d9f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2d9f8c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2d9f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9f90: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d9f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d9f94: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2d9f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9f98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f9c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2d9f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d9fa0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d9fa0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d9fa4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d9fa4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d9fa8: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2d9fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d9fac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d9facu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d9fb0: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x2d9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18372)));
    // 0x2d9fb4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2d9fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d9fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d9fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fbc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2d9fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2d9fc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d9fc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fc4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2d9fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d9fc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fcc: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2d9fccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2d9fd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d9fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d9fd4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2d9fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2d9fd8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x2d9fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9fdc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d9fe0: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2D9FE0u;
    SET_GPR_U32(ctx, 31, 0x2D9FE8u);
    ctx->pc = 0x2D9FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9FE0u;
    // 0x2d9fe4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2D9FE0u, 0x2D9FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9FE8u;
label_2d9fe8:
    // 0x2d9fe8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d9fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9fec: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2d9fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d9ff0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d9ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9ff4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ff8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d9ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d9ffc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d9ffcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2da000: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2da000u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2da004: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2da004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2da008: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2da008u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2da00c: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x2da00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18372)));
    // 0x2da010: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2da010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2da014: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da018: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2da018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2da01c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2da01cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da020: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2da020u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2da024: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2da024u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2da028: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x2da028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2da02c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2da02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2da030: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2DA030u;
    SET_GPR_U32(ctx, 31, 0x2DA038u);
    ctx->pc = 0x2DA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA030u;
    // 0x2da034: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2DA030u, 0x2DA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA038u;
label_2da038:
    // 0x2da038: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2da038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da03c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2da03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da040: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x2da040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18372)));
    // 0x2da044: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2da044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2da048: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2da048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2da04c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da050: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2DA050u;
    SET_GPR_U32(ctx, 31, 0x2DA058u);
    ctx->pc = 0x2DA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA050u;
    // 0x2da054: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2DA050u, 0x2DA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA058u;
label_2da058:
    // 0x2da058: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x2da058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2da05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da060: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA060u;
    {
        const bool branch_taken_0x2da060 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA060u;
        // 0x2da064: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da060) {
            ctx->pc = 0x2DA088u;
            goto label_2da088;
        }
    }
    ctx->pc = 0x2DA068u;
    // 0x2da068: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2da068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da06c: 0x46180501  sub.s       $f20, $f0, $f24
    ctx->pc = 0x2da06cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x2da070: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x2DA070u;
    SET_GPR_U32(ctx, 31, 0x2DA078u);
    ctx->pc = 0x2DA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA070u;
    // 0x2da074: 0x4617a300  add.s       $f12, $f20, $f23 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2DA070u, 0x2DA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA078u;
label_2da078:
    // 0x2da078: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2da078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2da07c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2da07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2da080: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DA080u;
    {
        const bool branch_taken_0x2da080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA080u;
        // 0x2da084: 0x230800a  movz        $s0, $s1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da080) {
            ctx->pc = 0x2DA0B4u;
            goto label_2da0b4;
        }
    }
    ctx->pc = 0x2DA088u;
label_2da088:
    // 0x2da088: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x2DA088u;
    SET_GPR_U32(ctx, 31, 0x2DA090u);
    ctx->pc = 0x2DA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA088u;
    // 0x2da08c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2DA088u, 0x2DA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA090u;
label_2da090:
    // 0x2da090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da094: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x2da094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2da098: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA098u;
    {
        const bool branch_taken_0x2da098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA098u;
        // 0x2da09c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da098) {
            ctx->pc = 0x2DA0B4u;
            goto label_2da0b4;
        }
    }
    ctx->pc = 0x2DA0A0u;
    // 0x2da0a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2da0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da0a4: 0x2464b8a8  addiu       $a0, $v1, -0x4758
    ctx->pc = 0x2da0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949032));
    // 0x2da0a8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2DA0A8u;
    SET_GPR_U32(ctx, 31, 0x2DA0B0u);
    ctx->pc = 0x2DA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA0A8u;
    // 0x2da0ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2DA0A8u, 0x2DA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0B0u;
label_2da0b0:
    // 0x2da0b0: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x2da0b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2da0b4:
    // 0x2da0b4: 0x2f0102b  sltu        $v0, $s7, $s0
    ctx->pc = 0x2da0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2da0b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA0B8u;
    {
        const bool branch_taken_0x2da0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da0b8) {
            ctx->pc = 0x2DA0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA0B8u;
            // 0x2da0bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA0D0u;
            goto label_2da0d0;
        }
    }
    ctx->pc = 0x2DA0C0u;
    // 0x2da0c0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2da0c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0c4: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x2da0c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x2da0c8: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2da0c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2da0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2da0d0:
    // 0x2da0d0: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x2da0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2da0d4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2DA0D4u;
    {
        const bool branch_taken_0x2da0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0D4u;
        // 0x2da0d8: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0d4) {
            ctx->pc = 0x2DA058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da058;
        }
    }
    ctx->pc = 0x2DA0DCu;
    // 0x2da0dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2da0dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da0e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da0e4: 0x16c30008  bne         $s6, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA0E4u;
    {
        const bool branch_taken_0x2da0e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0E4u;
        // 0x2da0e8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0e4) {
            ctx->pc = 0x2DA108u;
            goto label_2da108;
        }
    }
    ctx->pc = 0x2DA0ECu;
    // 0x2da0ec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2da0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da0f0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2da0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da0f4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2da0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da0f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2da0f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2da0fc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2da0fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2da100: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA100u;
    {
        const bool branch_taken_0x2da100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA100u;
        // 0x2da104: 0xc7a3002c  lwc1        $f3, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da100) {
            ctx->pc = 0x2DA12Cu;
            goto label_2da12c;
        }
    }
    ctx->pc = 0x2DA108u;
label_2da108:
    // 0x2da108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da10c: 0x16c20010  bne         $s6, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA10Cu;
    {
        const bool branch_taken_0x2da10c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA10Cu;
        // 0x2da110: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da10c) {
            ctx->pc = 0x2DA150u;
            goto label_2da150;
        }
    }
    ctx->pc = 0x2DA114u;
    // 0x2da114: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2da114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da118: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2da118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da11c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2da11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da120: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2da120u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2da124: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2da124u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2da128: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2da128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2da12c:
    // 0x2da12c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2da12cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2da130: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2da130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2da134: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2da134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2da138: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2da138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2da13c: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x2da13cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2da140: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2da140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2da144: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2da144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2da148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA148u;
    {
        const bool branch_taken_0x2da148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA148u;
        // 0x2da14c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da148) {
            ctx->pc = 0x2DA160u;
            goto label_2da160;
        }
    }
    ctx->pc = 0x2DA150u;
label_2da150:
    // 0x2da150: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA150u;
    {
        const bool branch_taken_0x2da150 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA150u;
        // 0x2da154: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da150) {
            ctx->pc = 0x2DA164u;
            goto label_2da164;
        }
    }
    ctx->pc = 0x2DA158u;
    // 0x2da158: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2da158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da15c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2da15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2da160:
    // 0x2da160: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2da160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2da164:
    // 0x2da164: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2da164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da168: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x2da168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2da16c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2da16cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2da170: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2da170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2da174: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2da174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2da178: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2da178u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2da17c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2da17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2da180: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2da180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da184: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2da184u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da188: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2da188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2da18c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2da18cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2da190: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2da190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2da194: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2da194u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2da198: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2da198u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2da19c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x2da19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x2da1a0: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x2da1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x2da1a4: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x2da1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x2da1a8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2da1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2da1ac: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x2da1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
    // 0x2da1b0: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x2da1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
    // 0x2da1b4: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x2DA1B4u;
    SET_GPR_U32(ctx, 31, 0x2DA1BCu);
    ctx->pc = 0x2DA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1B4u;
    // 0x2da1b8: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2DA1B4u, 0x2DA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1BCu;
label_2da1bc:
    // 0x2da1bc: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2da1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2da1c0: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2DA1C0u;
    SET_GPR_U32(ctx, 31, 0x2DA1C8u);
    ctx->pc = 0x2DA1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1C0u;
    // 0x2da1c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2DA1C0u, 0x2DA1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1C8u;
label_2da1c8:
    // 0x2da1c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DA1C8u;
    {
        const bool branch_taken_0x2da1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1C8u;
        // 0x2da1cc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1c8) {
            ctx->pc = 0x2DA210u;
            goto label_2da210;
        }
    }
    ctx->pc = 0x2DA1D0u;
    // 0x2da1d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2da1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1d8: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2DA1D8u;
    SET_GPR_U32(ctx, 31, 0x2DA1E0u);
    ctx->pc = 0x2DA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1D8u;
    // 0x2da1dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2DA1D8u, 0x2DA1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1E0u;
label_2da1e0:
    // 0x2da1e0: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA1E0u;
    {
        const bool branch_taken_0x2da1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1E0u;
        // 0x2da1e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1e0) {
            ctx->pc = 0x2DA208u;
            goto label_2da208;
        }
    }
    ctx->pc = 0x2DA1E8u;
    // 0x2da1e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2da1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2da1f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1f8: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2DA1F8u;
    SET_GPR_U32(ctx, 31, 0x2DA200u);
    ctx->pc = 0x2DA1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1F8u;
    // 0x2da1fc: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2DA1F8u, 0x2DA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA200u;
label_2da200:
    // 0x2da200: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA200u;
    {
        const bool branch_taken_0x2da200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2da200) {
            ctx->pc = 0x2DA210u;
            goto label_2da210;
        }
    }
    ctx->pc = 0x2DA208u;
label_2da208:
    // 0x2da208: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2DA208u;
    {
        const bool branch_taken_0x2da208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA208u;
        // 0x2da20c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da208) {
            ctx->pc = 0x2DA27Cu;
            goto label_2da27c;
        }
    }
    ctx->pc = 0x2DA210u;
label_2da210:
    // 0x2da210: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2da210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2da214: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2da214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da218: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2da218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2da21c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2da21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2da220: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2da220u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2da224: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x2da224u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2da228: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2DA228u;
    SET_GPR_U32(ctx, 31, 0x2DA230u);
    ctx->pc = 0x2DA22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA228u;
    // 0x2da22c: 0x27d002b0  addiu       $s0, $fp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2DA228u, 0x2DA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA230u;
label_2da230:
    // 0x2da230: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2da230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2da234: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2da234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2da238: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2da238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2da23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da240: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2da240u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2da244: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2da244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da24c: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x2DA24Cu;
    SET_GPR_U32(ctx, 31, 0x2DA254u);
    ctx->pc = 0x2DA250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA24Cu;
    // 0x2da250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2DA24Cu, 0x2DA254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA254u;
label_2da254:
    // 0x2da254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da258: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA258u;
    {
        const bool branch_taken_0x2da258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2da258) {
            ctx->pc = 0x2DA25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA258u;
            // 0x2da25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA27Cu;
            goto label_2da27c;
        }
    }
    ctx->pc = 0x2DA260u;
    // 0x2da260: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2da260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2da264: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2DA264u;
    SET_GPR_U32(ctx, 31, 0x2DA26Cu);
    ctx->pc = 0x2DA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA264u;
    // 0x2da268: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2DA264u, 0x2DA26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA26Cu;
label_2da26c:
    // 0x2da26c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2da26cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da270: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA270u;
    {
        const bool branch_taken_0x2da270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA270u;
        // 0x2da274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da270) {
            ctx->pc = 0x2DA27Cu;
            goto label_2da27c;
        }
    }
    ctx->pc = 0x2DA278u;
    // 0x2da278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da27c:
    // 0x2da27c: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x2da27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2da280: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x2da280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2da284: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x2da284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2da288: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x2da288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2da28c: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x2da28cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2da290: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x2da290u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2da294: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x2da294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2da298: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x2da298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2da29c: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x2da29cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2da2a0: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x2da2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2da2a4: 0xc7b80280  lwc1        $f24, 0x280($sp)
    ctx->pc = 0x2da2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2da2a8: 0xc7b70278  lwc1        $f23, 0x278($sp)
    ctx->pc = 0x2da2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2da2ac: 0xc7b60270  lwc1        $f22, 0x270($sp)
    ctx->pc = 0x2da2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da2b0: 0xc7b50268  lwc1        $f21, 0x268($sp)
    ctx->pc = 0x2da2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da2b4: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x2da2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2B8u;
        // 0x2da2bc: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA2C0u;
}
