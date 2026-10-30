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

// Function: sub_00221C20
// Address: 0x221c20 - 0x221cd8
void sub_00221C20_0x221c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221C20_0x221c20");
#endif

    switch (ctx->pc) {
        case 0x221cb4u: goto label_221cb4;
        case 0x221cc4u: goto label_221cc4;
        default: break;
    }

    ctx->pc = 0x221c20u;

    // 0x221c20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x221c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x221c24: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x221c24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x221c28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x221c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x221c2c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x221c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x221c30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x221c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x221c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c38: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x221c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x221c3c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x221c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x221c40: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x221c40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x221c44: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x221c44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x221c48: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x221c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x221c4c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x221c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x221c50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x221c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x221c54: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x221c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221c58: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x221c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x221c5c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x221c5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x221c60: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x221c60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221c64: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x221c64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x221c68: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x221c68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x221c6c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x221c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x221c70: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x221c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x221c74: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x221c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x221c78: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x221c78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221c7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x221c7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x221c80: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x221c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221c84: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x221c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221c88: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x221c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221c8c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x221c8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x221c90: 0x4a0003bf  vwaitq
    ctx->pc = 0x221c90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x221c94: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x221c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221c98: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x221c98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221c9c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x221c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x221ca0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x221ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x221ca4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x221ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221ca8: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x221ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x221cac: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x221CACu;
    SET_GPR_U32(ctx, 31, 0x221CB4u);
    ctx->pc = 0x221CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CACu;
    // 0x221cb0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x221CACu, 0x221CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CB4u;
label_221cb4:
    // 0x221cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cb8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x221cb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x221cbc: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x221CBCu;
    SET_GPR_U32(ctx, 31, 0x221CC4u);
    ctx->pc = 0x221CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CBCu;
    // 0x221cc0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x221CBCu, 0x221CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CC4u;
label_221cc4:
    // 0x221cc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x221cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221cc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x221cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221ccc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x221cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x221cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x221CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CD0u;
        // 0x221cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221CD8u;
}
