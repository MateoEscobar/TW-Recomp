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

// Function: sub_0019BEE0
// Address: 0x19bee0 - 0x19bf50
void sub_0019BEE0_0x19bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BEE0_0x19bee0");
#endif

    switch (ctx->pc) {
        case 0x19bef4u: goto label_19bef4;
        case 0x19bf00u: goto label_19bf00;
        case 0x19bf28u: goto label_19bf28;
        default: break;
    }

    ctx->pc = 0x19bee0u;

    // 0x19bee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bee4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19bee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19bee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19beec: 0xc066fd4  jal         func_19BF50
    ctx->pc = 0x19BEECu;
    SET_GPR_U32(ctx, 31, 0x19BEF4u);
    ctx->pc = 0x19BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEECu;
    // 0x19bef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF50u, 0x19BEECu, 0x19BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEF4u;
label_19bef4:
    // 0x19bef4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bef8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x19bef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19befc: 0x0  nop
    ctx->pc = 0x19befcu;
    // NOP
label_19bf00:
    // 0x19bf00: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19bf04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19bf08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19bf0c: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x19bf0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19bf10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19BF10u;
    {
        const bool branch_taken_0x19bf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF10u;
        // 0x19bf14: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf10) {
            ctx->pc = 0x19BF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bf00;
        }
    }
    ctx->pc = 0x19BF18u;
    // 0x19bf18: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x19bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x19bf1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19bf1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf20: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x19bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x19bf24: 0x0  nop
    ctx->pc = 0x19bf24u;
    // NOP
label_19bf28:
    // 0x19bf28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19bf2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bf30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x19bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x19bf34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x19bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19bf38: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19BF38u;
    {
        const bool branch_taken_0x19bf38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF38u;
        // 0x19bf3c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf38) {
            ctx->pc = 0x19BF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bf28;
        }
    }
    ctx->pc = 0x19BF40u;
    // 0x19bf40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19bf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bf48: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF48u;
        // 0x19bf4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BF50u;
}
