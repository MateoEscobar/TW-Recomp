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

// Function: sub_00336BB8
// Address: 0x336bb8 - 0x336bf8
void sub_00336BB8_0x336bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336BB8_0x336bb8");
#endif

    ctx->pc = 0x336bb8u;

    // 0x336bb8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x336bb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336bbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336bc0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x336bc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336bc4: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x336bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x336bc8: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x336bc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x336bcc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x336bccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336bd0: 0x4a2400c4  vsubx.w     $vf3, $vf0, $vf4x
    ctx->pc = 0x336bd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336bd4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x336bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336bd8: 0x4bc411bc  vmulax.xyz  $ACC, $vf2, $vf4x
    ctx->pc = 0x336bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x336bdc: 0x4bc3084b  vmaddw.xyz  $vf1, $vf1, $vf3w
    ctx->pc = 0x336bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x336be0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x336be0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x336be4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x336be4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x336be8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x336be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x336bec: 0x3e00008  jr          $ra
    ctx->pc = 0x336BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BECu;
        // 0x336bf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336BF4u;
    // 0x336bf4: 0x0  nop
    ctx->pc = 0x336bf4u;
    // NOP
    ctx->pc = 0x336bf8u;
}
