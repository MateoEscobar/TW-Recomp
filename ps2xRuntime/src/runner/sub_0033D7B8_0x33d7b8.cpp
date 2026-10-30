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

// Function: sub_0033D7B8
// Address: 0x33d7b8 - 0x33d870
void sub_0033D7B8_0x33d7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D7B8_0x33d7b8");
#endif

    ctx->pc = 0x33d7b8u;

    // 0x33d7b8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x33d7b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d7bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33d7bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33d7c0: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x33d7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33d7c4: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x33d7c4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33d7c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33d7c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d7cc: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x33d7ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x33d7d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33d7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33d7d4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33d7d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33d7d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33d7d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33d7dc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x33d7dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x33d7e0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33d7e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d7e4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33d7e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d7e8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33d7e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d7ec: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x33d7ecu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x33d7f0: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x33d7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x33d7f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x33d7f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x33d7f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d7fc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x33d7fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d800: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x33d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x33d804: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d808: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33d808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x33d80c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x33D80Cu;
    {
        const bool branch_taken_0x33d80c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D80Cu;
        // 0x33d810: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d80c) {
            ctx->pc = 0x33D864u;
            goto label_33d864;
        }
    }
    ctx->pc = 0x33D814u;
    // 0x33d814: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x33d814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x33d818: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x33d818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x33d81c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d820: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x33d820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33d824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d828: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x33d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x33d82c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33d82cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33d830: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x33d830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x33d834: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x33d834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x33d838: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33d838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33d83c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33d83cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33d840: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33d840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33d844: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33d844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d848: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33d848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33d84c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33d84cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x33d850: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x33d850u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x33d854: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33d854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x33d858: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x33d858u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x33d85c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x33d85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x33d860: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33d860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_33d864:
    // 0x33d864: 0x3e00008  jr          $ra
    ctx->pc = 0x33D864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D864u;
        // 0x33d868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D86Cu;
    // 0x33d86c: 0x0  nop
    ctx->pc = 0x33d86cu;
    // NOP
    ctx->pc = 0x33d870u;
}
