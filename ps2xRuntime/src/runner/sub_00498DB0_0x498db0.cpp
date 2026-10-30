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

// Function: sub_00498DB0
// Address: 0x498db0 - 0x498e38
void sub_00498DB0_0x498db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498DB0_0x498db0");
#endif

    switch (ctx->pc) {
        case 0x498ddcu: goto label_498ddc;
        default: break;
    }

    ctx->pc = 0x498db0u;

    // 0x498db0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x498db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498db4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x498db4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x498db8: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x498db8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x498dbc: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x498dbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x498dc0: 0x9cb80000  lwu         $t8, 0x0($a1)
    ctx->pc = 0x498dc0u;
    SET_GPR_ZE32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498dc4: 0x9cae0004  lwu         $t6, 0x4($a1)
    ctx->pc = 0x498dc4u;
    SET_GPR_ZE32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x498dc8: 0x9caf0008  lwu         $t7, 0x8($a1)
    ctx->pc = 0x498dc8u;
    SET_GPR_ZE32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x498dcc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x498dccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x498dd0: 0x1d87025  or          $t6, $t6, $t8
    ctx->pc = 0x498dd0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 24));
    // 0x498dd4: 0x71ee7b89  pcpyld      $t7, $t7, $t6
    ctx->pc = 0x498dd4u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x498dd8: 0x48af2800  qmtc2.ni    $t7, $vf5
    ctx->pc = 0x498dd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
label_498ddc:
    // 0x498ddc: 0x18c00014  blez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x498DDCu;
    {
        const bool branch_taken_0x498ddc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x498DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DDCu;
        // 0x498de0: 0x20a5000c  addi        $a1, $a1, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ddc) {
            ctx->pc = 0x498E30u;
            goto label_498e30;
        }
    }
    ctx->pc = 0x498DE4u;
    // 0x498de4: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x498de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498de8: 0x4bc510bd  vmadday.xyz $ACC, $vf2, $vf5y
    ctx->pc = 0x498de8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498dec: 0x4bc5198a  vmaddz.xyz  $vf6, $vf3, $vf5z
    ctx->pc = 0x498decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x498df0: 0x9cb80000  lwu         $t8, 0x0($a1)
    ctx->pc = 0x498df0u;
    SET_GPR_ZE32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498df4: 0x9cae0004  lwu         $t6, 0x4($a1)
    ctx->pc = 0x498df4u;
    SET_GPR_ZE32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x498df8: 0x9caf0008  lwu         $t7, 0x8($a1)
    ctx->pc = 0x498df8u;
    SET_GPR_ZE32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x498dfc: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x498dfcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x498e00: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x498e00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x498e04: 0x1d87025  or          $t6, $t6, $t8
    ctx->pc = 0x498e04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 24));
    // 0x498e08: 0x71ee7b89  pcpyld      $t7, $t7, $t6
    ctx->pc = 0x498e08u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x498e0c: 0x48af2800  qmtc2.ni    $t7, $vf5
    ctx->pc = 0x498e0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x498e10: 0x48393000  qmfc2.ni    $t9, $vf6
    ctx->pc = 0x498e10u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x498e14: 0x19103e  dsrl32      $v0, $t9, 0
    ctx->pc = 0x498e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x498e18: 0x73391ba9  pcpyud      $v1, $t9, $t9
    ctx->pc = 0x498e18u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x498e1c: 0xac990000  sw          $t9, 0x0($a0)
    ctx->pc = 0x498e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 25));
    // 0x498e20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x498e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x498e24: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x498e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x498e28: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x498E28u;
    {
        const bool branch_taken_0x498e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E28u;
        // 0x498e2c: 0x2084000c  addi        $a0, $a0, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x498e28) {
            ctx->pc = 0x498DDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498ddc;
        }
    }
    ctx->pc = 0x498E30u;
label_498e30:
    // 0x498e30: 0x3e00008  jr          $ra
    ctx->pc = 0x498E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E30u;
        // 0x498e34: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498E38u;
}
