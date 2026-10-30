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

// Function: sub_00498D58
// Address: 0x498d58 - 0x498db0
void sub_00498D58_0x498d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498D58_0x498d58");
#endif

    ctx->pc = 0x498d58u;

    // 0x498d58: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x498d58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498d5c: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x498d5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x498d60: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x498d60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x498d64: 0x9ca10000  lwu         $at, 0x0($a1)
    ctx->pc = 0x498d64u;
    SET_GPR_ZE32(ctx, 1, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498d68: 0x9ca20004  lwu         $v0, 0x4($a1)
    ctx->pc = 0x498d68u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x498d6c: 0x9ca30008  lwu         $v1, 0x8($a1)
    ctx->pc = 0x498d6cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x498d70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x498d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x498d74: 0x411025  or          $v0, $v0, $at
    ctx->pc = 0x498d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 1));
    // 0x498d78: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x498d78u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x498d7c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x498d7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x498d80: 0x4bc409bc  vmulax.xyz  $ACC, $vf1, $vf4x
    ctx->pc = 0x498d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498d84: 0x4bc410bd  vmadday.xyz $ACC, $vf2, $vf4y
    ctx->pc = 0x498d84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498d88: 0x4bc4190a  vmaddz.xyz  $vf4, $vf3, $vf4z
    ctx->pc = 0x498d88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x498d8c: 0x48212000  qmfc2.ni    $at, $vf4
    ctx->pc = 0x498d8cu;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x498d90: 0x1103e  dsrl32      $v0, $at, 0
    ctx->pc = 0x498d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 0));
    // 0x498d94: 0x70211ba9  pcpyud      $v1, $at, $at
    ctx->pc = 0x498d94u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 1), GPR_VEC(ctx, 1)));
    // 0x498d98: 0xac810000  sw          $at, 0x0($a0)
    ctx->pc = 0x498d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 1));
    // 0x498d9c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x498d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x498da0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x498da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x498da4: 0x3e00008  jr          $ra
    ctx->pc = 0x498DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DA4u;
        // 0x498da8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498DACu;
    // 0x498dac: 0x0  nop
    ctx->pc = 0x498dacu;
    // NOP
    ctx->pc = 0x498db0u;
}
