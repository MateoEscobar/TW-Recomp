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

// Function: sub_0010F9D8
// Address: 0x10f9d8 - 0x10fa50
void sub_0010F9D8_0x10f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F9D8_0x10f9d8");
#endif

    switch (ctx->pc) {
        case 0x10fa00u: goto label_10fa00;
        case 0x10fa08u: goto label_10fa08;
        case 0x10fa10u: goto label_10fa10;
        case 0x10fa20u: goto label_10fa20;
        case 0x10fa34u: goto label_10fa34;
        default: break;
    }

    ctx->pc = 0x10f9d8u;

    // 0x10f9d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10f9dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10f9e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10f9e4: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x10f9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x10f9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f9ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f9ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10f9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10f9f4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x10f9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f9f8: 0xc044b50  jal         func_112D40
    ctx->pc = 0x10F9F8u;
    SET_GPR_U32(ctx, 31, 0x10FA00u);
    ctx->pc = 0x10F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9F8u;
    // 0x10f9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x10F9F8u, 0x10FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA00u;
label_10fa00:
    // 0x10fa00: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x10FA00u;
    {
        const bool branch_taken_0x10fa00 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x10FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA00u;
        // 0x10fa04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa00) {
            ctx->pc = 0x10FA2Cu;
            goto label_10fa2c;
        }
    }
    ctx->pc = 0x10FA08u;
label_10fa08:
    // 0x10fa08: 0xc043bc6  jal         func_10EF18
    ctx->pc = 0x10FA08u;
    SET_GPR_U32(ctx, 31, 0x10FA10u);
    ctx->pc = 0x10FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA08u;
    // 0x10fa0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EF18u, 0x10FA08u, 0x10FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA10u;
label_10fa10:
    // 0x10fa10: 0x26310068  addiu       $s1, $s1, 0x68
    ctx->pc = 0x10fa10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x10fa14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa18: 0xc044b60  jal         func_112D80
    ctx->pc = 0x10FA18u;
    SET_GPR_U32(ctx, 31, 0x10FA20u);
    ctx->pc = 0x10FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA18u;
    // 0x10fa1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D80u, 0x10FA18u, 0x10FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA20u;
label_10fa20:
    // 0x10fa20: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10fa20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10fa24: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10FA24u;
    {
        const bool branch_taken_0x10fa24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA24u;
        // 0x10fa28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa24) {
            ctx->pc = 0x10FA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fa08;
        }
    }
    ctx->pc = 0x10FA2Cu;
label_10fa2c:
    // 0x10fa2c: 0xc043e68  jal         func_10F9A0
    ctx->pc = 0x10FA2Cu;
    SET_GPR_U32(ctx, 31, 0x10FA34u);
    ctx->pc = 0x10FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA2Cu;
    // 0x10fa30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9A0u, 0x10FA2Cu, 0x10FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA34u;
label_10fa34:
    // 0x10fa34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10fa34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10fa38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10fa38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fa3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10fa3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fa40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10fa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fa44: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA44u;
        // 0x10fa48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA4Cu;
    // 0x10fa4c: 0x0  nop
    ctx->pc = 0x10fa4cu;
    // NOP
    ctx->pc = 0x10fa50u;
}
