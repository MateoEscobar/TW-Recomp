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

// Function: sub_00336500
// Address: 0x336500 - 0x3365c8
void sub_00336500_0x336500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336500_0x336500");
#endif

    ctx->pc = 0x336500u;

    // 0x336500: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x336500u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336504: 0x4a318c6c  vsub.w      $vf17, $vf17, $vf17
    ctx->pc = 0x336504u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x336508: 0x4a3294ac  vsub.w      $vf18, $vf18, $vf18
    ctx->pc = 0x336508u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[18], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x33650c: 0x4a339cec  vsub.w      $vf19, $vf19, $vf19
    ctx->pc = 0x33650cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x336510: 0x4b100505  vsuby.x     $vf20, $vf0, $vf16y
    ctx->pc = 0x336510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x336514: 0x4b100541  vaddy.x     $vf21, $vf0, $vf16y
    ctx->pc = 0x336514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x336518: 0x4b100586  vsubz.x     $vf22, $vf0, $vf16z
    ctx->pc = 0x336518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x33651c: 0x4b1005c2  vaddz.x     $vf23, $vf0, $vf16z
    ctx->pc = 0x33651cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x336520: 0x4a900500  vaddx.y     $vf20, $vf0, $vf16x
    ctx->pc = 0x336520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x336524: 0x4a900541  vaddy.y     $vf21, $vf0, $vf16y
    ctx->pc = 0x336524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x336528: 0x4a900582  vaddz.y     $vf22, $vf0, $vf16z
    ctx->pc = 0x336528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x33652c: 0x4a9005c3  vaddw.y     $vf23, $vf0, $vf16w
    ctx->pc = 0x33652cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x336530: 0x4a500500  vaddx.z     $vf20, $vf0, $vf16x
    ctx->pc = 0x336530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x336534: 0x4a500542  vaddz.z     $vf21, $vf0, $vf16z
    ctx->pc = 0x336534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x336538: 0x4a500585  vsuby.z     $vf22, $vf0, $vf16y
    ctx->pc = 0x336538u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x33653c: 0x4a5005c3  vaddw.z     $vf23, $vf0, $vf16w
    ctx->pc = 0x33653cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x336540: 0x4bd5a2be  vmula.xyz   $ACC, $vf20, $vf21
    ctx->pc = 0x336540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[21]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x336544: 0x4bd7b469  vmadd.xyz   $vf17, $vf22, $vf23
    ctx->pc = 0x336544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x336548: 0x4b100500  vaddx.x     $vf20, $vf0, $vf16x
    ctx->pc = 0x336548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x33654c: 0x4b1005c3  vaddw.x     $vf23, $vf0, $vf16w
    ctx->pc = 0x33654cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x336550: 0x4a900544  vsubx.y     $vf21, $vf0, $vf16x
    ctx->pc = 0x336550u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x336554: 0x4a9005c6  vsubz.y     $vf23, $vf0, $vf16z
    ctx->pc = 0x336554u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x336558: 0x4a500501  vaddy.z     $vf20, $vf0, $vf16y
    ctx->pc = 0x336558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x33655c: 0x4a500580  vaddx.z     $vf22, $vf0, $vf16x
    ctx->pc = 0x33655cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x336560: 0x4bd5a2be  vmula.xyz   $ACC, $vf20, $vf21
    ctx->pc = 0x336560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[21]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x336564: 0x4bd7b4a9  vmadd.xyz   $vf18, $vf22, $vf23
    ctx->pc = 0x336564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x336568: 0x4b100542  vaddz.x     $vf21, $vf0, $vf16z
    ctx->pc = 0x336568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x33656c: 0x4b100581  vaddy.x     $vf22, $vf0, $vf16y
    ctx->pc = 0x33656cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x336570: 0x4a900501  vaddy.y     $vf20, $vf0, $vf16y
    ctx->pc = 0x336570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x336574: 0x4a900542  vaddz.y     $vf21, $vf0, $vf16z
    ctx->pc = 0x336574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x336578: 0x4a900580  vaddx.y     $vf22, $vf0, $vf16x
    ctx->pc = 0x336578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x33657c: 0x4a9005c7  vsubw.y     $vf23, $vf0, $vf16w
    ctx->pc = 0x33657cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x336580: 0x4a500504  vsubx.z     $vf20, $vf0, $vf16x
    ctx->pc = 0x336580u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x336584: 0x4a500540  vaddx.z     $vf21, $vf0, $vf16x
    ctx->pc = 0x336584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x336588: 0x4a500585  vsuby.z     $vf22, $vf0, $vf16y
    ctx->pc = 0x336588u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x33658c: 0x4a5005c1  vaddy.z     $vf23, $vf0, $vf16y
    ctx->pc = 0x33658cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x336590: 0x4bd5a2be  vmula.xyz   $ACC, $vf20, $vf21
    ctx->pc = 0x336590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[21]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x336594: 0x4bd7b4e9  vmadd.xyz   $vf19, $vf22, $vf23
    ctx->pc = 0x336594u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x336598: 0x4bd18c68  vadd.xyz    $vf17, $vf17, $vf17
    ctx->pc = 0x336598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x33659c: 0x4bd294a8  vadd.xyz    $vf18, $vf18, $vf18
    ctx->pc = 0x33659cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[18], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3365a0: 0x4bd39ce8  vadd.xyz    $vf19, $vf19, $vf19
    ctx->pc = 0x3365a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3365a4: 0x4b008c43  vaddw.x     $vf17, $vf17, $vf0w
    ctx->pc = 0x3365a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3365a8: 0x4a809483  vaddw.y     $vf18, $vf18, $vf0w
    ctx->pc = 0x3365a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3365ac: 0x4a409cc3  vaddw.z     $vf19, $vf19, $vf0w
    ctx->pc = 0x3365acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3365b0: 0xf8910000  sqc2        $vf17, 0x0($a0)
    ctx->pc = 0x3365b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x3365b4: 0xf8920010  sqc2        $vf18, 0x10($a0)
    ctx->pc = 0x3365b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x3365b8: 0xf8930020  sqc2        $vf19, 0x20($a0)
    ctx->pc = 0x3365b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x3365bc: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x3365bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3365c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3365C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3365C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3365C8u;
}
