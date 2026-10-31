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

// Function: sub_00336940
// Address: 0x336940 - 0x336a00
void sub_00336940_0x336940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336940_0x336940");
#endif

    ctx->pc = 0x336940u;

    // 0x336940: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x336940u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336944: 0xd8d10010  lqc2        $vf17, 0x10($a2)
    ctx->pc = 0x336944u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x336948: 0xd8d20020  lqc2        $vf18, 0x20($a2)
    ctx->pc = 0x336948u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x33694c: 0xd8d30030  lqc2        $vf19, 0x30($a2)
    ctx->pc = 0x33694cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x336950: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x336950u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336954: 0xd8b50010  lqc2        $vf21, 0x10($a1)
    ctx->pc = 0x336954u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x336958: 0xd8b60020  lqc2        $vf22, 0x20($a1)
    ctx->pc = 0x336958u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x33695c: 0xd8b70030  lqc2        $vf23, 0x30($a1)
    ctx->pc = 0x33695cu;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x336960: 0x4bf0a1bc  vmulax.xyzw $ACC, $vf20, $vf16x
    ctx->pc = 0x336960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x336964: 0x4bf0a8bd  vmadday.xyzw $ACC, $vf21, $vf16y
    ctx->pc = 0x336964u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x336968: 0x4bf0b0be  vmaddaz.xyzw $ACC, $vf22, $vf16z
    ctx->pc = 0x336968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33696c: 0x4bf0bc0b  vmaddw.xyzw $vf16, $vf23, $vf16w
    ctx->pc = 0x33696cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x336970: 0x4bf1a1bc  vmulax.xyzw $ACC, $vf20, $vf17x
    ctx->pc = 0x336970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x336974: 0x4bf1a8bd  vmadday.xyzw $ACC, $vf21, $vf17y
    ctx->pc = 0x336974u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x336978: 0x4bf1b0be  vmaddaz.xyzw $ACC, $vf22, $vf17z
    ctx->pc = 0x336978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33697c: 0x4bf1bbcb  vmaddw.xyzw $vf15, $vf23, $vf17w
    ctx->pc = 0x33697cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x336980: 0x4bf2a1bc  vmulax.xyzw $ACC, $vf20, $vf18x
    ctx->pc = 0x336980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x336984: 0x4bf2a8bd  vmadday.xyzw $ACC, $vf21, $vf18y
    ctx->pc = 0x336984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x336988: 0x4bf2b0be  vmaddaz.xyzw $ACC, $vf22, $vf18z
    ctx->pc = 0x336988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33698c: 0x4bf2bc4b  vmaddw.xyzw $vf17, $vf23, $vf18w
    ctx->pc = 0x33698cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x336990: 0x4bf27b3c  vmove.xyzw  $vf18, $vf15
    ctx->pc = 0x336990u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
    // 0x336994: 0x4bf3a1bc  vmulax.xyzw $ACC, $vf20, $vf19x
    ctx->pc = 0x336994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x336998: 0x4bf3a8bd  vmadday.xyzw $ACC, $vf21, $vf19y
    ctx->pc = 0x336998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33699c: 0x4bf3b0be  vmaddaz.xyzw $ACC, $vf22, $vf19z
    ctx->pc = 0x33699cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3369a0: 0x4bf3bccb  vmaddw.xyzw $vf19, $vf23, $vf19w
    ctx->pc = 0x3369a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3369a4: 0x4a30842c  vsub.w      $vf16, $vf16, $vf16
    ctx->pc = 0x3369a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3369a8: 0x4a318c6c  vsub.w      $vf17, $vf17, $vf17
    ctx->pc = 0x3369a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3369ac: 0x4a3294ac  vsub.w      $vf18, $vf18, $vf18
    ctx->pc = 0x3369acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[18], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3369b0: 0x4a33033c  vmove.w     $vf19, $vf0
    ctx->pc = 0x3369b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3369b4: 0x4a90042c  vsub.y      $vf16, $vf0, $vf16
    ctx->pc = 0x3369b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3369b8: 0x4a91046c  vsub.y      $vf17, $vf0, $vf17
    ctx->pc = 0x3369b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3369bc: 0x4b5204ac  vsub.xz     $vf18, $vf0, $vf18
    ctx->pc = 0x3369bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3369c0: 0x4a9304ec  vsub.y      $vf19, $vf0, $vf19
    ctx->pc = 0x3369c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3369c4: 0x48288000  qmfc2.ni    $t0, $vf16
    ctx->pc = 0x3369c4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3369c8: 0x48298800  qmfc2.ni    $t1, $vf17
    ctx->pc = 0x3369c8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x3369cc: 0x482a9000  qmfc2.ni    $t2, $vf18
    ctx->pc = 0x3369ccu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x3369d0: 0x482b9800  qmfc2.ni    $t3, $vf19
    ctx->pc = 0x3369d0u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x3369d4: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x3369d4u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
    // 0x3369d8: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x3369d8u;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
    // 0x3369dc: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x3369dcu;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
    // 0x3369e0: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x3369e0u;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
    // 0x3369e4: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x3369e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x3369e8: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x3369e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x3369ec: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x3369ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x3369f0: 0x7c8b0030  sq          $t3, 0x30($a0)
    ctx->pc = 0x3369f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
    // 0x3369f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3369F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3369F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3369FCu;
    // 0x3369fc: 0x0  nop
    ctx->pc = 0x3369fcu;
    // NOP
    ctx->pc = 0x336a00u;
}
