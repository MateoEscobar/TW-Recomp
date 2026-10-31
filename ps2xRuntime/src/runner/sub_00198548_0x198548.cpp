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

// Function: sub_00198548
// Address: 0x198548 - 0x1985b0
void sub_00198548_0x198548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198548_0x198548");
#endif

    switch (ctx->pc) {
        case 0x198568u: goto label_198568;
        case 0x19859cu: goto label_19859c;
        default: break;
    }

    ctx->pc = 0x198548u;

    // 0x198548: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19854c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19854cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x198550: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x198550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x198554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198558: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x198558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19855c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x198560: 0xc06616c  jal         func_1985B0
    ctx->pc = 0x198560u;
    SET_GPR_U32(ctx, 31, 0x198568u);
    ctx->pc = 0x198564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198560u;
    // 0x198564: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1985B0u, 0x198560u, 0x198568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198568u;
label_198568:
    // 0x198568: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x198568u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19856c: 0xdbb10010  lqc2        $vf17, 0x10($sp)
    ctx->pc = 0x19856cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198570: 0xdbb20020  lqc2        $vf18, 0x20($sp)
    ctx->pc = 0x198570u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198574: 0xdbb30030  lqc2        $vf19, 0x30($sp)
    ctx->pc = 0x198574u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198578: 0xda0c0000  lqc2        $vf12, 0x0($s0)
    ctx->pc = 0x198578u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19857c: 0x4bcc81bc  vmulax.xyz  $ACC, $vf16, $vf12x
    ctx->pc = 0x19857cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x198580: 0x4bcc88bd  vmadday.xyz $ACC, $vf17, $vf12y
    ctx->pc = 0x198580u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x198584: 0x4bcc90be  vmaddaz.xyz $ACC, $vf18, $vf12z
    ctx->pc = 0x198584u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x198588: 0x4bc09b0b  vmaddw.xyz  $vf12, $vf19, $vf0w
    ctx->pc = 0x198588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x19858c: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x19858cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x198590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198594: 0xc066118  jal         func_198460
    ctx->pc = 0x198594u;
    SET_GPR_U32(ctx, 31, 0x19859Cu);
    ctx->pc = 0x198598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198594u;
    // 0x198598: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198460u, 0x198594u, 0x19859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19859Cu;
label_19859c:
    // 0x19859c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19859cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1985a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1985a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1985a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1985a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1985a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1985A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1985ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985A8u;
        // 0x1985ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1985A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1985B0u;
}
