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

// Function: sub_002B4C98
// Address: 0x2b4c98 - 0x2b4f40
void sub_002B4C98_0x2b4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4C98_0x2b4c98");
#endif

    switch (ctx->pc) {
        case 0x2b4d00u: goto label_2b4d00;
        case 0x2b4d10u: goto label_2b4d10;
        case 0x2b4d1cu: goto label_2b4d1c;
        case 0x2b4eb4u: goto label_2b4eb4;
        case 0x2b4ec0u: goto label_2b4ec0;
        case 0x2b4edcu: goto label_2b4edc;
        case 0x2b4f08u: goto label_2b4f08;
        default: break;
    }

    ctx->pc = 0x2b4c98u;

    // 0x2b4c98: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2b4c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2b4c9c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2b4c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2b4ca0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2b4ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2b4ca4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2b4ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2b4ca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b4ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4cac: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2b4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2b4cb0: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x2b4cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
    // 0x2b4cb4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2b4cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2b4cb8: 0x26524b00  addiu       $s2, $s2, 0x4B00
    ctx->pc = 0x2b4cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 19200));
    // 0x2b4cbc: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2b4cbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b4cc0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b4cc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4cc4: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2b4cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b4cc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b4cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ccc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2b4cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2b4cd0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2b4cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2b4cd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b4cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b4cd8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2b4cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2b4cdc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b4cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b4ce0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b4ce4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2b4ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4ce8: 0x26b30090  addiu       $s3, $s5, 0x90
    ctx->pc = 0x2b4ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x2b4cec: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2b4cecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b4cf0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b4cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b4cf4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2b4cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b4cf8: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2B4CF8u;
    SET_GPR_U32(ctx, 31, 0x2B4D00u);
    ctx->pc = 0x2B4CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4CF8u;
    // 0x2b4cfc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2B4CF8u, 0x2B4D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D00u;
label_2b4d00:
    // 0x2b4d00: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2b4d00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x2b4d04: 0x2610b880  addiu       $s0, $s0, -0x4780
    ctx->pc = 0x2b4d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
    // 0x2b4d08: 0xc0cd550  jal         func_335540
    ctx->pc = 0x2B4D08u;
    SET_GPR_U32(ctx, 31, 0x2B4D10u);
    ctx->pc = 0x2B4D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D08u;
    // 0x2b4d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x2B4D08u, 0x2B4D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D10u;
label_2b4d10:
    // 0x2b4d10: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x2b4d10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2b4d14: 0xc0cd550  jal         func_335540
    ctx->pc = 0x2B4D14u;
    SET_GPR_U32(ctx, 31, 0x2B4D1Cu);
    ctx->pc = 0x2B4D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D14u;
    // 0x2b4d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x2B4D14u, 0x2B4D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D1Cu;
label_2b4d1c:
    // 0x2b4d1c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2b4d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2b4d20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4d24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b4d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4d28: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2b4d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b4d2c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2b4d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x2b4d30: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2b4d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b4d34: 0x24c61730  addiu       $a2, $a2, 0x1730
    ctx->pc = 0x2b4d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5936));
    // 0x2b4d38: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2b4d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b4d3c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2b4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2b4d40: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2b4d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2b4d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4d48: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x2b4d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b4d4c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2b4d4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4d50: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b4d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b4d54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b4d54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b4d58: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b4d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4d5c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b4d5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b4d60: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2b4d60u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b4d64: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2b4d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b4d68: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b4d68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b4d6c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2b4d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4d70: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2b4d70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4d74: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2b4d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4d78: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2b4d78u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2b4d7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b4d7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b4d80: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2b4d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b4d84: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2b4d84u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b4d88: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x2b4d88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x2b4d8c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2b4d8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2b4d90: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2b4d90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2b4d94: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b4d94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b4d98: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b4d98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b4d9c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b4d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b4da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4da4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x2b4da4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x2b4da8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2b4da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2b4dac: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2b4dacu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b4db0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2b4db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b4db4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2b4db4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2b4db8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2b4db8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2b4dbc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b4dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b4dc0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2b4dc0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b4dc4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2b4dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2b4dc8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2b4dcc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b4dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b4dd0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2b4dd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2b4dd4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b4dd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4dd8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b4dd8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b4ddc: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2b4ddcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b4de0: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x2b4de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x2b4de4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2b4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2b4de8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b4de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b4dec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2b4decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2b4df0: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x2b4df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x2b4df4: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2b4df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x2b4df8: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x2b4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x2b4dfc: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2b4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x2b4e00: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x2b4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x2b4e04: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x2b4e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b4e08: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x2b4e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x2b4e0c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b4e10: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b4e14: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x2b4e14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b4e18: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b4e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b4e1c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2b4e1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2b4e20: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2b4e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e24: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2b4e24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b4e28: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2b4e28u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e2c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2b4e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e30: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2b4e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e34: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2b4e34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b4e38: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2b4e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e3c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b4e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e40: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2b4e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e44: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2b4e44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e48: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2b4e48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b4e4c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2b4e4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e50: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2b4e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e54: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2b4e54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e58: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2b4e58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b4e5c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b4e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2b4e60: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2b4e60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4e64: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2b4e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2b4e68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b4e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e6c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2b4e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2b4e70: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2b4e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2b4e74: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2b4e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2b4e78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b4e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b4e7c: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2b4e7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b4e80: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b4e84: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2b4e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b4e88: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2b4e88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b4e8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b4e8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b4e90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b4e90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b4e94: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b4e94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4e98: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b4e98u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b4e9c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2b4e9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b4ea0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b4ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b4ea4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b4ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2b4ea8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2b4ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2b4eac: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x2B4EACu;
    SET_GPR_U32(ctx, 31, 0x2B4EB4u);
    ctx->pc = 0x2B4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EACu;
    // 0x2b4eb0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2B4EACu, 0x2B4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EB4u;
label_2b4eb4:
    // 0x2b4eb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b4eb8: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2B4EB8u;
    SET_GPR_U32(ctx, 31, 0x2B4EC0u);
    ctx->pc = 0x2B4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EB8u;
    // 0x2b4ebc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2B4EB8u, 0x2B4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EC0u;
label_2b4ec0:
    // 0x2b4ec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4ec8: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4EC8u;
    {
        const bool branch_taken_0x2b4ec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EC8u;
        // 0x2b4ecc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ec8) {
            ctx->pc = 0x2B4EF0u;
            goto label_2b4ef0;
        }
    }
    ctx->pc = 0x2B4ED0u;
    // 0x2b4ed0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b4ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ed4: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2B4ED4u;
    SET_GPR_U32(ctx, 31, 0x2B4EDCu);
    ctx->pc = 0x2B4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4ED4u;
    // 0x2b4ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2B4ED4u, 0x2B4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EDCu;
label_2b4edc:
    // 0x2b4edc: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4EDCu;
    {
        const bool branch_taken_0x2b4edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EDCu;
        // 0x2b4ee0: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4edc) {
            ctx->pc = 0x2B4EF0u;
            goto label_2b4ef0;
        }
    }
    ctx->pc = 0x2B4EE4u;
    // 0x2b4ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4ee8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4EE8u;
    {
        const bool branch_taken_0x2b4ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EE8u;
        // 0x2b4eec: 0x7ec30000  sq          $v1, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ee8) {
            ctx->pc = 0x2B4F10u;
            goto label_2b4f10;
        }
    }
    ctx->pc = 0x2B4EF0u;
label_2b4ef0:
    // 0x2b4ef0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2b4ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2b4ef4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b4ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b4ef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b4ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4efc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b4efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f00: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2B4F00u;
    SET_GPR_U32(ctx, 31, 0x2B4F08u);
    ctx->pc = 0x2B4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F00u;
    // 0x2b4f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2B4F00u, 0x2B4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F08u;
label_2b4f08:
    // 0x2b4f08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b4f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b4f0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b4f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b4f10:
    // 0x2b4f10: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2b4f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b4f14: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2b4f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b4f18: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2b4f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b4f1c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2b4f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b4f20: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2b4f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b4f24: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2b4f24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b4f28: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2b4f28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4f2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b4f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4f30: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2b4f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4f34: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2b4f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4f38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F38u;
        // 0x2b4f3c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4F40u;
}
