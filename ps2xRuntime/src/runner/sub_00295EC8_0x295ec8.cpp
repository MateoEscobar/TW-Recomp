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

// Function: sub_00295EC8
// Address: 0x295ec8 - 0x295f28
void sub_00295EC8_0x295ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295EC8_0x295ec8");
#endif

    ctx->pc = 0x295ec8u;

    // 0x295ec8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x295ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x295ecc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x295eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x295ed0: 0x90860270  lbu         $a2, 0x270($a0)
    ctx->pc = 0x295ed0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x295ed4: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x295ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x295ed8: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x295ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x295edc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295ee0: 0xc71818  mult        $v1, $a2, $a3
    ctx->pc = 0x295ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x295ee4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x295ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x295ee8: 0x4bc2097d  vftoi4.xyz  $vf2, $vf1
    ctx->pc = 0x295ee8u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x295eec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x295eecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x295ef0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x295ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x295ef4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x295ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ef8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x295ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x295efc: 0x97a70004  lhu         $a3, 0x4($sp)
    ctx->pc = 0x295efcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x295f00: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x295f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295f04: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x295f04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295f08: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x295f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x295f0c: 0xa4a70002  sh          $a3, 0x2($a1)
    ctx->pc = 0x295f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x295f10: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x295f10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x295f14: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x295f14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x295f18: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x295f18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x295f1c: 0xa0880274  sb          $t0, 0x274($a0)
    ctx->pc = 0x295f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 628), (uint8_t)GPR_U32(ctx, 8));
    // 0x295f20: 0x3e00008  jr          $ra
    ctx->pc = 0x295F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F20u;
        // 0x295f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295F28u;
}
