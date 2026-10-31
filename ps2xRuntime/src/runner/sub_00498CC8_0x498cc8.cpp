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

// Function: sub_00498CC8
// Address: 0x498cc8 - 0x498d58
void sub_00498CC8_0x498cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498CC8_0x498cc8");
#endif

    switch (ctx->pc) {
        case 0x498cf8u: goto label_498cf8;
        default: break;
    }

    ctx->pc = 0x498cc8u;

    // 0x498cc8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x498cc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498ccc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x498cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x498cd0: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x498cd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x498cd4: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x498cd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x498cd8: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x498cd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x498cdc: 0x9cad0000  lwu         $t5, 0x0($a1)
    ctx->pc = 0x498cdcu;
    SET_GPR_ZE32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498ce0: 0x9cab0004  lwu         $t3, 0x4($a1)
    ctx->pc = 0x498ce0u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x498ce4: 0x9cac0008  lwu         $t4, 0x8($a1)
    ctx->pc = 0x498ce4u;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x498ce8: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x498ce8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x498cec: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x498cecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x498cf0: 0x718b6389  pcpyld      $t4, $t4, $t3
    ctx->pc = 0x498cf0u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x498cf4: 0x48ac2800  qmtc2.ni    $t4, $vf5
    ctx->pc = 0x498cf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_498cf8:
    // 0x498cf8: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x498CF8u;
    {
        const bool branch_taken_0x498cf8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x498CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CF8u;
        // 0x498cfc: 0x20a5000c  addi        $a1, $a1, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x498cf8) {
            ctx->pc = 0x498D50u;
            goto label_498d50;
        }
    }
    ctx->pc = 0x498D00u;
    // 0x498d00: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x498d00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498d04: 0x4bc510bd  vmadday.xyz $ACC, $vf2, $vf5y
    ctx->pc = 0x498d04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498d08: 0x4bc518be  vmaddaz.xyz $ACC, $vf3, $vf5z
    ctx->pc = 0x498d08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x498d0c: 0x4bc0218b  vmaddw.xyz  $vf6, $vf4, $vf0w
    ctx->pc = 0x498d0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x498d10: 0x9cad0000  lwu         $t5, 0x0($a1)
    ctx->pc = 0x498d10u;
    SET_GPR_ZE32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498d14: 0x9cab0004  lwu         $t3, 0x4($a1)
    ctx->pc = 0x498d14u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x498d18: 0x9cac0008  lwu         $t4, 0x8($a1)
    ctx->pc = 0x498d18u;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x498d1c: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x498d1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x498d20: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x498d20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x498d24: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x498d24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x498d28: 0x718b6389  pcpyld      $t4, $t4, $t3
    ctx->pc = 0x498d28u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x498d2c: 0x48ac2800  qmtc2.ni    $t4, $vf5
    ctx->pc = 0x498d2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x498d30: 0x48393000  qmfc2.ni    $t9, $vf6
    ctx->pc = 0x498d30u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x498d34: 0x19103e  dsrl32      $v0, $t9, 0
    ctx->pc = 0x498d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x498d38: 0x73391ba9  pcpyud      $v1, $t9, $t9
    ctx->pc = 0x498d38u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x498d3c: 0xac990000  sw          $t9, 0x0($a0)
    ctx->pc = 0x498d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 25));
    // 0x498d40: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x498d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x498d44: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x498d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x498d48: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x498D48u;
    {
        const bool branch_taken_0x498d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D48u;
        // 0x498d4c: 0x2084000c  addi        $a0, $a0, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d48) {
            ctx->pc = 0x498CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498cf8;
        }
    }
    ctx->pc = 0x498D50u;
label_498d50:
    // 0x498d50: 0x3e00008  jr          $ra
    ctx->pc = 0x498D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D50u;
        // 0x498d54: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498D58u;
}
