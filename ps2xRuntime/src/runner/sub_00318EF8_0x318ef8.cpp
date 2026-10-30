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

// Function: sub_00318EF8
// Address: 0x318ef8 - 0x318f60
void sub_00318EF8_0x318ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318EF8_0x318ef8");
#endif

    switch (ctx->pc) {
        case 0x318f18u: goto label_318f18;
        case 0x318f20u: goto label_318f20;
        case 0x318f2cu: goto label_318f2c;
        case 0x318f3cu: goto label_318f3c;
        default: break;
    }

    ctx->pc = 0x318ef8u;

    // 0x318ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x318ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x318efc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x318efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x318f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x318f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x318f04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x318f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318f0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x318f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x318f10: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x318f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x318f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x318f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_318f18:
    // 0x318f18: 0xc137826  jal         func_4DE098
    ctx->pc = 0x318F18u;
    SET_GPR_U32(ctx, 31, 0x318F20u);
    ctx->pc = 0x318F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F18u;
    // 0x318f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x318F18u, 0x318F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F20u;
label_318f20:
    // 0x318f20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x318f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x318f24: 0xc0e409a  jal         func_390268
    ctx->pc = 0x318F24u;
    SET_GPR_U32(ctx, 31, 0x318F2Cu);
    ctx->pc = 0x318F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F24u;
    // 0x318f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x318F24u, 0x318F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F2Cu;
label_318f2c:
    // 0x318f2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318F2Cu;
    {
        const bool branch_taken_0x318f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F2Cu;
        // 0x318f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f2c) {
            ctx->pc = 0x318F40u;
            goto label_318f40;
        }
    }
    ctx->pc = 0x318F34u;
    // 0x318f34: 0xc087502  jal         func_21D408
    ctx->pc = 0x318F34u;
    SET_GPR_U32(ctx, 31, 0x318F3Cu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x318F34u, 0x318F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F3Cu;
label_318f3c:
    // 0x318f3c: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x318f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
label_318f40:
    // 0x318f40: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x318f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x318f44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x318F44u;
    {
        const bool branch_taken_0x318f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F44u;
        // 0x318f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f44) {
            ctx->pc = 0x318F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318f18;
        }
    }
    ctx->pc = 0x318F4Cu;
    // 0x318f4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x318f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x318f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318f58: 0x3e00008  jr          $ra
    ctx->pc = 0x318F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F58u;
        // 0x318f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318F60u;
}
