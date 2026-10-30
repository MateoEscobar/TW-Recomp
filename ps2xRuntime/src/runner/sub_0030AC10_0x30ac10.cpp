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

// Function: sub_0030AC10
// Address: 0x30ac10 - 0x30aca8
void sub_0030AC10_0x30ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AC10_0x30ac10");
#endif

    switch (ctx->pc) {
        case 0x30ac50u: goto label_30ac50;
        case 0x30ac5cu: goto label_30ac5c;
        case 0x30ac70u: goto label_30ac70;
        default: break;
    }

    ctx->pc = 0x30ac10u;

    // 0x30ac10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30ac14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30ac18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30ac1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30ac1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30ac20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30ac20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac24: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30ac24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30ac28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30ac28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac2c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30ac30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30ac30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac34: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30ac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30ac38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ac3c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x30ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x30ac40: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x30ac40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x30ac44: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30AC44u;
    {
        const bool branch_taken_0x30ac44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC44u;
        // 0x30ac48: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac44) {
            ctx->pc = 0x30AC88u;
            goto label_30ac88;
        }
    }
    ctx->pc = 0x30AC4Cu;
    // 0x30ac4c: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x30ac4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_30ac50:
    // 0x30ac50: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x30ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x30ac54: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30AC54u;
    SET_GPR_U32(ctx, 31, 0x30AC5Cu);
    ctx->pc = 0x30AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC54u;
    // 0x30ac58: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30AC54u, 0x30AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC5Cu;
label_30ac5c:
    // 0x30ac5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AC5Cu;
    {
        const bool branch_taken_0x30ac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC5Cu;
        // 0x30ac60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac5c) {
            ctx->pc = 0x30AC70u;
            goto label_30ac70;
        }
    }
    ctx->pc = 0x30AC64u;
    // 0x30ac64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30ac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac68: 0xc0c2b2a  jal         func_30ACA8
    ctx->pc = 0x30AC68u;
    SET_GPR_U32(ctx, 31, 0x30AC70u);
    ctx->pc = 0x30AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC68u;
    // 0x30ac6c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ACA8u, 0x30AC68u, 0x30AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC70u;
label_30ac70:
    // 0x30ac70: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x30ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x30ac74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30ac74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30ac78: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x30ac78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x30ac7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x30ac7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30ac80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x30AC80u;
    {
        const bool branch_taken_0x30ac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC80u;
        // 0x30ac84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac80) {
            ctx->pc = 0x30AC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ac50;
        }
    }
    ctx->pc = 0x30AC88u;
label_30ac88:
    // 0x30ac88: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30ac88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ac8c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30ac8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ac90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30ac90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ac94: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30ac94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ac98: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30ac98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ac9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x30ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACA0u;
        // 0x30aca4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30ACA8u;
}
