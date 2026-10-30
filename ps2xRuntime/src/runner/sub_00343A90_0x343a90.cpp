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

// Function: sub_00343A90
// Address: 0x343a90 - 0x343b20
void sub_00343A90_0x343a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343A90_0x343a90");
#endif

    switch (ctx->pc) {
        case 0x343b10u: goto label_343b10;
        default: break;
    }

    ctx->pc = 0x343a90u;

    // 0x343a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x343a94: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x343a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x343a9c: 0x79230010  lq          $v1, 0x10($t1)
    ctx->pc = 0x343a9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x343aa0: 0x79240000  lq          $a0, 0x0($t1)
    ctx->pc = 0x343aa0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x343aa4: 0x79220020  lq          $v0, 0x20($t1)
    ctx->pc = 0x343aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x343aa8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x343aa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343aac: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x343aacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x343ab0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343ab0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343ab4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343ab4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343ab8: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x343ab8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343abc: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x343abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x343ac0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343ac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343ac4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x343ac4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343ac8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343ac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343acc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343accu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343ad0: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x343ad0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343ad4: 0x7d230030  sq          $v1, 0x30($t1)
    ctx->pc = 0x343ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), GPR_VEC(ctx, 3));
    // 0x343ad8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x343ad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x343adc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343adcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343ae0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343ae0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343ae4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343ae4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343ae8: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x343ae8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343aec: 0x7d220040  sq          $v0, 0x40($t1)
    ctx->pc = 0x343aecu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 64), GPR_VEC(ctx, 2));
    // 0x343af0: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x343af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x343af4: 0x7d260030  sq          $a2, 0x30($t1)
    ctx->pc = 0x343af4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), GPR_VEC(ctx, 6));
    // 0x343af8: 0x7d270040  sq          $a3, 0x40($t1)
    ctx->pc = 0x343af8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 64), GPR_VEC(ctx, 7));
    // 0x343afc: 0x7d280050  sq          $t0, 0x50($t1)
    ctx->pc = 0x343afcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 80), GPR_VEC(ctx, 8));
    // 0x343b00: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x343B00u;
    {
        const bool branch_taken_0x343b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B00u;
        // 0x343b04: 0x7fa80000  sq          $t0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b00) {
            ctx->pc = 0x343B10u;
            goto label_343b10;
        }
    }
    ctx->pc = 0x343B08u;
    // 0x343b08: 0xc0d0ec8  jal         func_343B20
    ctx->pc = 0x343B08u;
    SET_GPR_U32(ctx, 31, 0x343B10u);
    ctx->pc = 0x343B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B08u;
    // 0x343b0c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343B20u, 0x343B08u, 0x343B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B10u;
label_343b10:
    // 0x343b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343b14: 0x3e00008  jr          $ra
    ctx->pc = 0x343B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B14u;
        // 0x343b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343B1Cu;
    // 0x343b1c: 0x0  nop
    ctx->pc = 0x343b1cu;
    // NOP
    ctx->pc = 0x343b20u;
}
