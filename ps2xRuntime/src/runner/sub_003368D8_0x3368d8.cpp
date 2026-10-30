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

// Function: sub_003368D8
// Address: 0x3368d8 - 0x336940
void sub_003368D8_0x3368d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003368D8_0x3368d8");
#endif

    ctx->pc = 0x3368d8u;

    // 0x3368d8: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x3368d8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3368dc: 0xd8b20010  lqc2        $vf18, 0x10($a1)
    ctx->pc = 0x3368dcu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3368e0: 0xd8b10020  lqc2        $vf17, 0x20($a1)
    ctx->pc = 0x3368e0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3368e4: 0xd8b30030  lqc2        $vf19, 0x30($a1)
    ctx->pc = 0x3368e4u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3368e8: 0x4a90042c  vsub.y      $vf16, $vf0, $vf16
    ctx->pc = 0x3368e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3368ec: 0x4a91046c  vsub.y      $vf17, $vf0, $vf17
    ctx->pc = 0x3368ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3368f0: 0x4a9204ac  vsub.y      $vf18, $vf0, $vf18
    ctx->pc = 0x3368f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3368f4: 0x4a9304ec  vsub.y      $vf19, $vf0, $vf19
    ctx->pc = 0x3368f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3368f8: 0x4a30842c  vsub.w      $vf16, $vf16, $vf16
    ctx->pc = 0x3368f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3368fc: 0x4a318c6c  vsub.w      $vf17, $vf17, $vf17
    ctx->pc = 0x3368fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x336900: 0x4a3294ac  vsub.w      $vf18, $vf18, $vf18
    ctx->pc = 0x336900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[18], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x336904: 0x4a33033c  vmove.w     $vf19, $vf0
    ctx->pc = 0x336904u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x336908: 0x48288000  qmfc2.ni    $t0, $vf16
    ctx->pc = 0x336908u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x33690c: 0x48298800  qmfc2.ni    $t1, $vf17
    ctx->pc = 0x33690cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x336910: 0x482a9000  qmfc2.ni    $t2, $vf18
    ctx->pc = 0x336910u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x336914: 0x482b9800  qmfc2.ni    $t3, $vf19
    ctx->pc = 0x336914u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x336918: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x336918u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
    // 0x33691c: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x33691cu;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
    // 0x336920: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x336920u;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
    // 0x336924: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x336924u;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
    // 0x336928: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x336928u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x33692c: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x33692cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x336930: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x336930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x336934: 0x7c8b0030  sq          $t3, 0x30($a0)
    ctx->pc = 0x336934u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
    // 0x336938: 0x3e00008  jr          $ra
    ctx->pc = 0x336938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336940u;
}
