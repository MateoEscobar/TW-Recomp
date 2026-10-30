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

// Function: sub_004F3C70
// Address: 0x4f3c70 - 0x4f3cd0
void sub_004F3C70_0x4f3c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3C70_0x4f3c70");
#endif

    ctx->pc = 0x4f3c70u;

    // 0x4f3c70: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4f3c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3c74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f3c78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4f3c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x4f3c7c: 0x4be2097e  vftoi12.xyzw $vf2, $vf1
    ctx->pc = 0x4f3c7cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(4096.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x4f3c80: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x4f3c80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x4f3c84: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4f3c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x4f3c88: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4f3c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x4f3c8c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4f3c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3c90: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x4f3c90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f3c94: 0x97a60008  lhu         $a2, 0x8($sp)
    ctx->pc = 0x4f3c94u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3c98: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x4f3c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4f3c9c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4f3c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f3ca0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x4f3ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3ca4: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x4f3ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f3ca8: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x4f3ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f3cac: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3CACu;
        // 0x4f3cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3CB4u;
    // 0x4f3cb4: 0x0  nop
    ctx->pc = 0x4f3cb4u;
    // NOP
    // 0x4f3cb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f3cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f3cbc: 0x0  nop
    ctx->pc = 0x4f3cbcu;
    // NOP
    // 0x4f3cc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f3cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f3cc4: 0x0  nop
    ctx->pc = 0x4f3cc4u;
    // NOP
    // 0x4f3cc8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f3ccc: 0x0  nop
    ctx->pc = 0x4f3cccu;
    // NOP
    ctx->pc = 0x4f3cd0u;
}
