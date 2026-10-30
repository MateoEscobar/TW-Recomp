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

// Function: sub_0034AC08
// Address: 0x34ac08 - 0x34acc8
void sub_0034AC08_0x34ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AC08_0x34ac08");
#endif

    ctx->pc = 0x34ac08u;

    // 0x34ac08: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x34ac08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ac0c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x34ac0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34ac10: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x34ac10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34ac14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ac14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34ac18: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x34ac18u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ac1c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x34ac1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34ac20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34ac20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ac24: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34ac24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34ac28: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34ac28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34ac2c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34ac2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34ac30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x34ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x34ac34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34ac34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ac38: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34ac38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ac3c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ac3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ac40: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ac40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ac44: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ac44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ac48: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34ac48u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ac4c: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x34ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x34ac50: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x34ac50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ac54: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x34ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ac58: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x34ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x34ac5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34ac5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ac60: 0x0  nop
    ctx->pc = 0x34ac60u;
    // NOP
    // 0x34ac64: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x34AC64u;
    {
        const bool branch_taken_0x34ac64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC64u;
        // 0x34ac68: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac64) {
            ctx->pc = 0x34ACC0u;
            goto label_34acc0;
        }
    }
    ctx->pc = 0x34AC6Cu;
    // 0x34ac6c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x34ac6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34ac70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34ac70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ac74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34ac74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ac78: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ac78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ac7c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ac7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ac80: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ac80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ac84: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34ac84u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ac88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ac88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ac8c: 0x0  nop
    ctx->pc = 0x34ac8cu;
    // NOP
    // 0x34ac90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34ac90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ac94: 0x0  nop
    ctx->pc = 0x34ac94u;
    // NOP
    // 0x34ac98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34AC98u;
    {
        const bool branch_taken_0x34ac98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ac98) {
            ctx->pc = 0x34ACB0u;
            goto label_34acb0;
        }
    }
    ctx->pc = 0x34ACA0u;
    // 0x34aca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34aca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34aca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34aca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34aca8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34ACA8u;
    {
        const bool branch_taken_0x34aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACA8u;
        // 0x34acac: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aca8) {
            ctx->pc = 0x34ACC0u;
            goto label_34acc0;
        }
    }
    ctx->pc = 0x34ACB0u;
label_34acb0:
    // 0x34acb0: 0x0  nop
    ctx->pc = 0x34acb0u;
    // NOP
    // 0x34acb4: 0x0  nop
    ctx->pc = 0x34acb4u;
    // NOP
    // 0x34acb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x34acb8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x34acbc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34acbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_34acc0:
    // 0x34acc0: 0x3e00008  jr          $ra
    ctx->pc = 0x34ACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACC0u;
        // 0x34acc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ACC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ACC8u;
}
