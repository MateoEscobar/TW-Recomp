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

// Function: sub_003417C0
// Address: 0x3417c0 - 0x341840
void sub_003417C0_0x3417c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003417C0_0x3417c0");
#endif

    switch (ctx->pc) {
        case 0x3417e0u: goto label_3417e0;
        default: break;
    }

    ctx->pc = 0x3417c0u;

    // 0x3417c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3417c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3417c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3417c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3417c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3417cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3417ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3417d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3417d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3417d8: 0xc0d0464  jal         func_341190
    ctx->pc = 0x3417D8u;
    SET_GPR_U32(ctx, 31, 0x3417E0u);
    ctx->pc = 0x3417DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3417D8u;
    // 0x3417dc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341190u, 0x3417D8u, 0x3417E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417E0u;
label_3417e0:
    // 0x3417e0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3417e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3417e4: 0x7a050010  lq          $a1, 0x10($s0)
    ctx->pc = 0x3417e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3417e8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3417e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3417ec: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3417ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3417f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3417f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3417f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3417f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3417f8: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x3417f8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3417fc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3417fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341800: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x341800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x341804: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x341804u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x341808: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x341808u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34180c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x34180cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341810: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x341810u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x341814: 0x7e050010  sq          $a1, 0x10($s0)
    ctx->pc = 0x341814u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 5));
    // 0x341818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x341818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34181c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34181cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341820: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x341820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x341824: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x341824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x341828: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x341828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x34182c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x34182cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x341830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x341830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x341834: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x341834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x341838: 0x3e00008  jr          $ra
    ctx->pc = 0x341838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341838u;
        // 0x34183c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341840u;
}
