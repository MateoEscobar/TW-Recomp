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

// Function: sub_003A4D90
// Address: 0x3a4d90 - 0x3a4e88
void sub_003A4D90_0x3a4d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4D90_0x3a4d90");
#endif

    switch (ctx->pc) {
        case 0x3a4e68u: goto label_3a4e68;
        default: break;
    }

    ctx->pc = 0x3a4d90u;

    // 0x3a4d90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a4d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a4d94: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x3a4d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x3a4d98: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x3a4d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x3a4d9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a4d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4da0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a4da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3a4da4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a4da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a4da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4dac: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3a4dacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a4db0: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3a4db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x3a4db4: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3a4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x3a4db8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3a4db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4dbc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3a4dbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3a4dc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a4dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a4dc4: 0x0  nop
    ctx->pc = 0x3a4dc4u;
    // NOP
    // 0x3a4dc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4DC8u;
    {
        const bool branch_taken_0x3a4dc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DC8u;
        // 0x3a4dcc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dc8) {
            ctx->pc = 0x3A4DD8u;
            goto label_3a4dd8;
        }
    }
    ctx->pc = 0x3A4DD0u;
    // 0x3a4dd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4DD0u;
    {
        const bool branch_taken_0x3a4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DD0u;
        // 0x3a4dd4: 0x24631720  addiu       $v1, $v1, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dd0) {
            ctx->pc = 0x3A4DE0u;
            goto label_3a4de0;
        }
    }
    ctx->pc = 0x3A4DD8u;
label_3a4dd8:
    // 0x3a4dd8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a4ddc: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x3a4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_3a4de0:
    // 0x3a4de0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a4de0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4de4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3a4de4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3a4de8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3a4de8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a4dec: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a4decu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3a4df0: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3a4df0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a4df4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a4df4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a4df8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3a4dfc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3a4e00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4e04: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3a4e04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4e08: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a4e0c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a4e0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a4e10: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3a4e10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a4e14: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3a4e14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a4e18: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3a4e18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a4e1c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3a4e1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3a4e20: 0x4a0003bf  vwaitq
    ctx->pc = 0x3a4e20u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3a4e24: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3a4e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a4e28: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3a4e28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a4e2c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3a4e2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a4e30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3a4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a4e34: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a4e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4e38: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3a4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a4e3c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a4e3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a4e40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3a4e40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a4e44: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a4e44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3a4e48: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3a4e48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a4e4c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a4e4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a4e50: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3a4e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3a4e54: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3a4e58: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a4e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3a4e5c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a4e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3a4e60: 0xc0cd972  jal         func_3365C8
    ctx->pc = 0x3A4E60u;
    SET_GPR_U32(ctx, 31, 0x3A4E68u);
    ctx->pc = 0x3A4E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4E60u;
    // 0x3a4e64: 0x7fa60040  sq          $a2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x3A4E60u, 0x3A4E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4E68u;
label_3a4e68:
    // 0x3a4e68: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3a4e68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a4e6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a4e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4e70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a4e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a4e74: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x3a4e74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x3a4e78: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a4e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a4e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E7Cu;
        // 0x3a4e80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4E84u;
    // 0x3a4e84: 0x0  nop
    ctx->pc = 0x3a4e84u;
    // NOP
    ctx->pc = 0x3a4e88u;
}
