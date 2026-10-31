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

// Function: sub_00498C68
// Address: 0x498c68 - 0x498cc8
void sub_00498C68_0x498c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498C68_0x498c68");
#endif

    ctx->pc = 0x498c68u;

    // 0x498c68: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x498c68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498c6c: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x498c6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x498c70: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x498c70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x498c74: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x498c74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x498c78: 0x9ca30000  lwu         $v1, 0x0($a1)
    ctx->pc = 0x498c78u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498c7c: 0x9ca10004  lwu         $at, 0x4($a1)
    ctx->pc = 0x498c7cu;
    SET_GPR_ZE32(ctx, 1, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x498c80: 0x9ca20008  lwu         $v0, 0x8($a1)
    ctx->pc = 0x498c80u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x498c84: 0x1083c  dsll32      $at, $at, 0
    ctx->pc = 0x498c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 0));
    // 0x498c88: 0x230825  or          $at, $at, $v1
    ctx->pc = 0x498c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | GPR_U64(ctx, 3));
    // 0x498c8c: 0x70411389  pcpyld      $v0, $v0, $at
    ctx->pc = 0x498c8cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 1)));
    // 0x498c90: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x498c90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x498c94: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x498c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498c98: 0x4bc510bd  vmadday.xyz $ACC, $vf2, $vf5y
    ctx->pc = 0x498c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498c9c: 0x4bc518be  vmaddaz.xyz $ACC, $vf3, $vf5z
    ctx->pc = 0x498c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498ca0: 0x4bc0214b  vmaddw.xyz  $vf5, $vf4, $vf0w
    ctx->pc = 0x498ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x498ca4: 0x48212800  qmfc2.ni    $at, $vf5
    ctx->pc = 0x498ca4u;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x498ca8: 0x1103e  dsrl32      $v0, $at, 0
    ctx->pc = 0x498ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 0));
    // 0x498cac: 0x70211ba9  pcpyud      $v1, $at, $at
    ctx->pc = 0x498cacu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 1), GPR_VEC(ctx, 1)));
    // 0x498cb0: 0xac810000  sw          $at, 0x0($a0)
    ctx->pc = 0x498cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 1));
    // 0x498cb4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x498cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x498cb8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x498cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x498cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x498CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CBCu;
        // 0x498cc0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498CC4u;
    // 0x498cc4: 0x0  nop
    ctx->pc = 0x498cc4u;
    // NOP
    ctx->pc = 0x498cc8u;
}
