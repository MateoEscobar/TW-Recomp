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

// Function: sub_003A1E30
// Address: 0x3a1e30 - 0x3a1ed8
void sub_003A1E30_0x3a1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1E30_0x3a1e30");
#endif

    switch (ctx->pc) {
        case 0x3a1e30u: goto label_3a1e30;
        case 0x3a1e34u: goto label_3a1e34;
        case 0x3a1e38u: goto label_3a1e38;
        case 0x3a1e3cu: goto label_3a1e3c;
        case 0x3a1e40u: goto label_3a1e40;
        case 0x3a1e44u: goto label_3a1e44;
        case 0x3a1e48u: goto label_3a1e48;
        case 0x3a1e4cu: goto label_3a1e4c;
        case 0x3a1e50u: goto label_3a1e50;
        case 0x3a1e54u: goto label_3a1e54;
        case 0x3a1e58u: goto label_3a1e58;
        case 0x3a1e5cu: goto label_3a1e5c;
        case 0x3a1e60u: goto label_3a1e60;
        case 0x3a1e64u: goto label_3a1e64;
        case 0x3a1e68u: goto label_3a1e68;
        case 0x3a1e6cu: goto label_3a1e6c;
        case 0x3a1e70u: goto label_3a1e70;
        case 0x3a1e74u: goto label_3a1e74;
        case 0x3a1e78u: goto label_3a1e78;
        case 0x3a1e7cu: goto label_3a1e7c;
        case 0x3a1e80u: goto label_3a1e80;
        case 0x3a1e84u: goto label_3a1e84;
        case 0x3a1e88u: goto label_3a1e88;
        case 0x3a1e8cu: goto label_3a1e8c;
        case 0x3a1e90u: goto label_3a1e90;
        case 0x3a1e94u: goto label_3a1e94;
        case 0x3a1e98u: goto label_3a1e98;
        case 0x3a1e9cu: goto label_3a1e9c;
        case 0x3a1ea0u: goto label_3a1ea0;
        case 0x3a1ea4u: goto label_3a1ea4;
        case 0x3a1ea8u: goto label_3a1ea8;
        case 0x3a1eacu: goto label_3a1eac;
        case 0x3a1eb0u: goto label_3a1eb0;
        case 0x3a1eb4u: goto label_3a1eb4;
        case 0x3a1eb8u: goto label_3a1eb8;
        case 0x3a1ebcu: goto label_3a1ebc;
        case 0x3a1ec0u: goto label_3a1ec0;
        case 0x3a1ec4u: goto label_3a1ec4;
        case 0x3a1ec8u: goto label_3a1ec8;
        case 0x3a1eccu: goto label_3a1ecc;
        case 0x3a1ed0u: goto label_3a1ed0;
        case 0x3a1ed4u: goto label_3a1ed4;
        default: break;
    }

    ctx->pc = 0x3a1e30u;

label_3a1e30:
    // 0x3a1e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3a1e34:
    // 0x3a1e34: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3a1e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3a1e38:
    // 0x3a1e38: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3a1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3a1e3c:
    // 0x3a1e3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a1e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a1e40:
    // 0x3a1e40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a1e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a1e44:
    // 0x3a1e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a1e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1e48:
    // 0x3a1e48: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a1e4c:
    // 0x3a1e4c: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3a1e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3a1e50:
    // 0x3a1e50: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x3a1e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
label_3a1e54:
    // 0x3a1e54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3a1e58:
    if (ctx->pc == 0x3A1E58u) {
        ctx->pc = 0x3A1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E54u;
        // 0x3a1e58: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1E5Cu;
        goto label_3a1e5c;
    }
    ctx->pc = 0x3A1E54u;
    {
        const bool branch_taken_0x3a1e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E54u;
        // 0x3a1e58: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e54) {
            ctx->pc = 0x3A1E78u;
            goto label_3a1e78;
        }
    }
    ctx->pc = 0x3A1E5Cu;
label_3a1e5c:
    // 0x3a1e5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1e60:
    // 0x3a1e60: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a1e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a1e64:
    // 0x3a1e64: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a1e68:
    // 0x3a1e68: 0x40f809  jalr        $v0
label_3a1e6c:
    if (ctx->pc == 0x3A1E6Cu) {
        ctx->pc = 0x3A1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E68u;
        // 0x3a1e6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1E70u;
        goto label_3a1e70;
    }
    ctx->pc = 0x3A1E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1E70u);
        ctx->pc = 0x3A1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E68u;
        // 0x3a1e6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1E68u, 0x3A1E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1E70u;
label_3a1e70:
    // 0x3a1e70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a1e74:
    if (ctx->pc == 0x3A1E74u) {
        ctx->pc = 0x3A1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E70u;
        // 0x3a1e74: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1E78u;
        goto label_3a1e78;
    }
    ctx->pc = 0x3A1E70u;
    {
        const bool branch_taken_0x3a1e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E70u;
        // 0x3a1e74: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e70) {
            ctx->pc = 0x3A1E84u;
            goto label_3a1e84;
        }
    }
    ctx->pc = 0x3A1E78u;
label_3a1e78:
    // 0x3a1e78: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3a1e78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3a1e7c:
    // 0x3a1e7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a1e80:
    if (ctx->pc == 0x3A1E80u) {
        ctx->pc = 0x3A1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E7Cu;
        // 0x3a1e80: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1E84u;
        goto label_3a1e84;
    }
    ctx->pc = 0x3A1E7Cu;
    {
        const bool branch_taken_0x3a1e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E7Cu;
        // 0x3a1e80: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e7c) {
            ctx->pc = 0x3A1EB0u;
            goto label_3a1eb0;
        }
    }
    ctx->pc = 0x3A1E84u;
label_3a1e84:
    // 0x3a1e84: 0xc0e8942  jal         func_3A2508
label_3a1e88:
    if (ctx->pc == 0x3A1E88u) {
        ctx->pc = 0x3A1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E84u;
        // 0x3a1e88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1E8Cu;
        goto label_3a1e8c;
    }
    ctx->pc = 0x3A1E84u;
    SET_GPR_U32(ctx, 31, 0x3A1E8Cu);
    ctx->pc = 0x3A1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E84u;
    // 0x3a1e88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2508u, 0x3A1E84u, 0x3A1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E8Cu;
label_3a1e8c:
    // 0x3a1e8c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3a1e8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3a1e90:
    // 0x3a1e90: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3a1e90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1e94:
    // 0x3a1e94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a1e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a1e98:
    // 0x3a1e98: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a1e98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a1e9c:
    // 0x3a1e9c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a1e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a1ea0:
    // 0x3a1ea0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a1ea0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a1ea4:
    // 0x3a1ea4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a1ea4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3a1ea8:
    // 0x3a1ea8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a1ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3a1eac:
    // 0x3a1eac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a1eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3a1eb0:
    // 0x3a1eb0: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3a1eb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1eb4:
    // 0x3a1eb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a1eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1eb8:
    // 0x3a1eb8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3a1eb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1ebc:
    // 0x3a1ebc: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x3a1ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_3a1ec0:
    // 0x3a1ec0: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3a1ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3a1ec4:
    // 0x3a1ec4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3a1ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a1ec8:
    // 0x3a1ec8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3a1ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a1ecc:
    // 0x3a1ecc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a1eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a1ed0:
    // 0x3a1ed0: 0x3e00008  jr          $ra
label_3a1ed4:
    if (ctx->pc == 0x3A1ED4u) {
        ctx->pc = 0x3A1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1ED0u;
        // 0x3a1ed4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1ED8u;
        goto label_fallthrough_0x3a1ed0;
    }
    ctx->pc = 0x3A1ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1ED0u;
        // 0x3a1ed4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a1ed0:
    ctx->pc = 0x3A1ED8u;
}
