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

// Function: sub_00337FC8
// Address: 0x337fc8 - 0x338048
void sub_00337FC8_0x337fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337FC8_0x337fc8");
#endif

    ctx->pc = 0x337fc8u;

    // 0x337fc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x337fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x337fcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x337fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337fd4: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x337fd4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337fd8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x337fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337fdc: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x337fdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x337fe0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337fe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337fe4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x337fe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x337fe8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x337fe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337fec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x337fecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x337ff0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x337ff0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337ff4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x337ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x337ff8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337ffc: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x337ffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x338000: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x338000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338004: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x338004u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x338008: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x338008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x33800c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x33800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x338010: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x338010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x338014: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x338014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x338018: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x338018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33801c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33801cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338020: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x338020u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x338024: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x338024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x338028: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x338028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x33802c: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x33802cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x338030: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x338030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x338034: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x338034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x338038: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x338038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x33803c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x33803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x338040: 0x3e00008  jr          $ra
    ctx->pc = 0x338040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338040u;
        // 0x338044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338048u;
}
