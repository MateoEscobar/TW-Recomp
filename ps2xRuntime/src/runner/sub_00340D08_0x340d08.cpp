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

// Function: sub_00340D08
// Address: 0x340d08 - 0x340fe0
void sub_00340D08_0x340d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340D08_0x340d08");
#endif

    switch (ctx->pc) {
        case 0x340d38u: goto label_340d38;
        case 0x340e18u: goto label_340e18;
        case 0x340ef8u: goto label_340ef8;
        case 0x340f24u: goto label_340f24;
        default: break;
    }

    ctx->pc = 0x340d08u;

    // 0x340d08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x340d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x340d0c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x340d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x340d10: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x340d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340d14: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x340d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x340d18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x340d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340d1c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x340d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340d20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x340d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x340d24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340d28: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x340d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x340d2c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x340d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x340d30: 0xc0d02ce  jal         func_340B38
    ctx->pc = 0x340D30u;
    SET_GPR_U32(ctx, 31, 0x340D38u);
    ctx->pc = 0x340D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340D30u;
    // 0x340d34: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340B38u, 0x340D30u, 0x340D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340D38u;
label_340d38:
    // 0x340d38: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x340d38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340d3c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x340d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340d40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x340d40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340d44: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x340d44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x340d48: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x340d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340d4c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x340d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340d50: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x340d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340d54: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x340d54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x340d58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x340d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x340d5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x340d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x340d60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x340d60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340d64: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x340d64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x340d68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x340d68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340d6c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x340d6cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x340d70: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x340d70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x340d74: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x340d74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x340d78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x340d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340d7c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x340d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x340d80: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x340d80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x340d84: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x340d84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x340d88: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x340d88u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x340d8c: 0x4a0003bf  vwaitq
    ctx->pc = 0x340d8cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x340d90: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x340d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x340d94: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x340d94u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x340d98: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x340d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x340d9c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x340d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340da0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x340da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x340da4: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x340da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x340da8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x340da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x340dac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x340DACu;
    {
        const bool branch_taken_0x340dac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DACu;
        // 0x340db0: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340dac) {
            ctx->pc = 0x340DC0u;
            goto label_340dc0;
        }
    }
    ctx->pc = 0x340DB4u;
    // 0x340db4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x340db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x340db8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x340DB8u;
    {
        const bool branch_taken_0x340db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DB8u;
        // 0x340dbc: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340db8) {
            ctx->pc = 0x340E30u;
            goto label_340e30;
        }
    }
    ctx->pc = 0x340DC0u;
label_340dc0:
    // 0x340dc0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x340dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x340dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340dc8: 0x0  nop
    ctx->pc = 0x340dc8u;
    // NOP
    // 0x340dcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x340dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340dd0: 0x0  nop
    ctx->pc = 0x340dd0u;
    // NOP
    // 0x340dd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x340DD4u;
    {
        const bool branch_taken_0x340dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DD4u;
        // 0x340dd8: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340dd4) {
            ctx->pc = 0x340DF0u;
            goto label_340df0;
        }
    }
    ctx->pc = 0x340DDCu;
    // 0x340ddc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x340ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x340de0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x340de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x340de4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x340de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x340de8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x340DE8u;
    {
        const bool branch_taken_0x340de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340de8) {
            ctx->pc = 0x340E30u;
            goto label_340e30;
        }
    }
    ctx->pc = 0x340DF0u;
label_340df0:
    // 0x340df0: 0x46010b02  mul.s       $f12, $f1, $f1
    ctx->pc = 0x340df0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x340df4: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x340df4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x340df8: 0x0  nop
    ctx->pc = 0x340df8u;
    // NOP
    // 0x340dfc: 0x0  nop
    ctx->pc = 0x340dfcu;
    // NOP
    // 0x340e00: 0x460c0304  c1          0xC0304
    ctx->pc = 0x340e00u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x340e04: 0x0  nop
    ctx->pc = 0x340e04u;
    // NOP
    // 0x340e08: 0x0  nop
    ctx->pc = 0x340e08u;
    // NOP
    // 0x340e0c: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x340e0cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x340e10: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x340E10u;
    SET_GPR_U32(ctx, 31, 0x340E18u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x340E10u, 0x340E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340E18u;
label_340e18:
    // 0x340e18: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x340e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x340e1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x340e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x340e20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x340e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340e24: 0x0  nop
    ctx->pc = 0x340e24u;
    // NOP
    // 0x340e28: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x340e28u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x340e2c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x340e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_340e30:
    // 0x340e30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x340e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340e34: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x340e34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340e38: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x340e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340e3c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x340e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340e40: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x340e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340e44: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x340e44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x340e48: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x340e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x340e4c: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x340e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x340e50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x340e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340e54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x340e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340e58: 0x0  nop
    ctx->pc = 0x340e58u;
    // NOP
    // 0x340e5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x340e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340e60: 0x0  nop
    ctx->pc = 0x340e60u;
    // NOP
    // 0x340e64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x340E64u;
    {
        const bool branch_taken_0x340e64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E64u;
        // 0x340e68: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e64) {
            ctx->pc = 0x340E74u;
            goto label_340e74;
        }
    }
    ctx->pc = 0x340E6Cu;
    // 0x340e6c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x340e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x340e70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x340e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_340e74:
    // 0x340e74: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x340e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x340e78: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x340e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x340e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340e80: 0x0  nop
    ctx->pc = 0x340e80u;
    // NOP
    // 0x340e84: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x340e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340e88: 0x0  nop
    ctx->pc = 0x340e88u;
    // NOP
    // 0x340e8c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x340E8Cu;
    {
        const bool branch_taken_0x340e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340e8c) {
            ctx->pc = 0x340EA8u;
            goto label_340ea8;
        }
    }
    ctx->pc = 0x340E94u;
    // 0x340e94: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x340e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x340e98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x340e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x340e9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340ea0: 0x0  nop
    ctx->pc = 0x340ea0u;
    // NOP
    // 0x340ea4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x340ea4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_340ea8:
    // 0x340ea8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x340ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x340eac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x340eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x340eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340eb4: 0x0  nop
    ctx->pc = 0x340eb4u;
    // NOP
    // 0x340eb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x340eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340ebc: 0x0  nop
    ctx->pc = 0x340ebcu;
    // NOP
    // 0x340ec0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x340EC0u;
    {
        const bool branch_taken_0x340ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340ec0) {
            ctx->pc = 0x340EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340EC0u;
            // 0x340ec4: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x340EE0u;
            goto label_340ee0;
        }
    }
    ctx->pc = 0x340EC8u;
    // 0x340ec8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x340ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x340ecc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x340eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x340ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340ed4: 0x0  nop
    ctx->pc = 0x340ed4u;
    // NOP
    // 0x340ed8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x340ed8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x340edc: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x340edcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_340ee0:
    // 0x340ee0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x340ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x340ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340ee8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x340ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x340eec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x340eecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x340ef0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x340EF0u;
    SET_GPR_U32(ctx, 31, 0x340EF8u);
    ctx->pc = 0x340EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340EF0u;
    // 0x340ef4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x340EF0u, 0x340EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340EF8u;
label_340ef8:
    // 0x340ef8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x340ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340efc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x340efcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x340f00: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x340f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x340f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x340f08: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x340f08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x340f0c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x340f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x340f10: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x340f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x340f14: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x340f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340f18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x340f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x340f1c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x340F1Cu;
    SET_GPR_U32(ctx, 31, 0x340F24u);
    ctx->pc = 0x340F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340F1Cu;
    // 0x340f20: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x340F1Cu, 0x340F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340F24u;
label_340f24:
    // 0x340f24: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x340f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x340f28: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x340f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x340f2c: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x340f2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x340f30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x340f30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340f34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x340f34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x340f38: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x340f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340f3c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x340f3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x340f40: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x340f40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x340f44: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x340f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340f48: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x340f48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x340f4c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x340f4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x340f50: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x340f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340f54: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x340f54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x340f58: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x340f58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x340f5c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x340f5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x340f60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x340f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340f64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x340f64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x340f68: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x340f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340f6c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x340f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340f70: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x340f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340f74: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x340f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340f78: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x340f78u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x340f7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x340f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340f80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x340f80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340f84: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x340f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x340f88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x340f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340f8c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x340f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x340f90: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x340f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x340f94: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x340F94u;
    {
        const bool branch_taken_0x340f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F94u;
        // 0x340f98: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f94) {
            ctx->pc = 0x340FC4u;
            goto label_340fc4;
        }
    }
    ctx->pc = 0x340F9Cu;
    // 0x340f9c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x340f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x340fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340fa4: 0x0  nop
    ctx->pc = 0x340fa4u;
    // NOP
    // 0x340fa8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x340fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340fac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x340facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340fb0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x340fb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x340fb4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x340fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x340fb8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x340fb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x340fbc: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x340fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x340fc0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x340fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_340fc4:
    // 0x340fc4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x340fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x340fc8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x340fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x340fcc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x340fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x340fd0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x340fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x340fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x340FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FD4u;
        // 0x340fd8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340FDCu;
    // 0x340fdc: 0x0  nop
    ctx->pc = 0x340fdcu;
    // NOP
    ctx->pc = 0x340fe0u;
}
