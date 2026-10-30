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

// Function: sub_0033D870
// Address: 0x33d870 - 0x33d8f0
void sub_0033D870_0x33d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D870_0x33d870");
#endif

    ctx->pc = 0x33d870u;

    // 0x33d870: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x33d870u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d874: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33d878: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x33d878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d87c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33d87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33d880: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x33d880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x33d884: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33d884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d888: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33d888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d88c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33d88cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d890: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x33d890u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x33d894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33d894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d89c: 0x0  nop
    ctx->pc = 0x33d89cu;
    // NOP
    // 0x33d8a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d8a4: 0x0  nop
    ctx->pc = 0x33d8a4u;
    // NOP
    // 0x33d8a8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x33D8A8u;
    {
        const bool branch_taken_0x33d8a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d8a8) {
            ctx->pc = 0x33D8E8u;
            goto label_33d8e8;
        }
    }
    ctx->pc = 0x33D8B0u;
    // 0x33d8b0: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x33d8b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x33d8b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33d8b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d8b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33d8b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33d8bc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33d8bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33d8c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33d8c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33d8c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33d8c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d8c8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33d8c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33d8cc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33d8ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x33d8d0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x33d8d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x33d8d4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33d8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x33d8d8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x33d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x33d8dc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x33d8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x33d8e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x33d8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x33d8e4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_33d8e8:
    // 0x33d8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x33D8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8E8u;
        // 0x33d8ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D8F0u;
}
