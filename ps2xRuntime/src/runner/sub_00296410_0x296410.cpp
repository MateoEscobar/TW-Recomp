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

// Function: sub_00296410
// Address: 0x296410 - 0x296488
void sub_00296410_0x296410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296410_0x296410");
#endif

    ctx->pc = 0x296410u;

    // 0x296410: 0x90a30270  lbu         $v1, 0x270($a1)
    ctx->pc = 0x296410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x296414: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x296414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296418: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x296418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29641c: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x29641cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x296420: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x296420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296424: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296428: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x296428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29642c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29642cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296430: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x296430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x296434: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x296434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x296438: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x296438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29643c: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x29643cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x296440: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x296440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x296444: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x296444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x296448: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x296448u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x29644c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x29644cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x296450: 0x84c70004  lh          $a3, 0x4($a2)
    ctx->pc = 0x296450u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x296454: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x296454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x296458: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x296458u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29645c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29645cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x296460: 0x4bc2093d  vitof4.xyz  $vf2, $vf1
    ctx->pc = 0x296460u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.0625f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x296464: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x296464u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x296468: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x296468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x29646c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x29646cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x296470: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x296470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x296474: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x296474u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296478: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x296478u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x29647c: 0x3e00008  jr          $ra
    ctx->pc = 0x29647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29647Cu;
        // 0x296480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29647Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296484u;
    // 0x296484: 0x0  nop
    ctx->pc = 0x296484u;
    // NOP
    ctx->pc = 0x296488u;
}
