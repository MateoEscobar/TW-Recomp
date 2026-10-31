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

// Function: sub_0033D8F0
// Address: 0x33d8f0 - 0x33d9d8
void sub_0033D8F0_0x33d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D8F0_0x33d8f0");
#endif

    ctx->pc = 0x33d8f0u;

    // 0x33d8f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33d8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d8f4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x33d8f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d8f8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x33d8f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33d8fc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33d8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33d900: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33d900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33d904: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33d904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d908: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33d908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d90c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33d90cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d910: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33d910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33d914: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x33d914u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x33d918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33d918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d91c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33d91cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d920: 0x0  nop
    ctx->pc = 0x33d920u;
    // NOP
    // 0x33d924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d928: 0x0  nop
    ctx->pc = 0x33d928u;
    // NOP
    // 0x33d92c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x33D92Cu;
    {
        const bool branch_taken_0x33d92c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d92c) {
            ctx->pc = 0x33D970u;
            goto label_33d970;
        }
    }
    ctx->pc = 0x33D934u;
    // 0x33d934: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33d934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d938: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33d938u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x33d93c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33d93cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33d940: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33d940u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33d944: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33d944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33d948: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33d948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d94c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33d94cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33d950: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33d950u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x33d954: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x33d954u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x33d958: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x33d95c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x33d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x33d960: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x33d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x33d964: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x33d964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x33d968: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x33d96c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x33d96cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_33d970:
    // 0x33d970: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33d970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d974: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33d974u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x33d978: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33d978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33d97c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33d97cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33d980: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x33d980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33d984: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x33d984u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33d988: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33d988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33d98c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x33d98cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x33d990: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33d990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33d994: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33d994u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33d998: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x33d998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x33d99c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x33d99cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x33d9a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33d9a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33d9a4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33d9a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33d9a8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33d9a8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x33d9ac: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x33d9acu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x33d9b0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x33d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x33d9b4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x33d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x33d9b8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x33d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x33d9bc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33d9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x33d9c0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x33d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x33d9c4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x33d9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x33d9c8: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x33d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x33d9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x33D9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9CCu;
        // 0x33d9d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D9D4u;
    // 0x33d9d4: 0x0  nop
    ctx->pc = 0x33d9d4u;
    // NOP
    ctx->pc = 0x33d9d8u;
}
