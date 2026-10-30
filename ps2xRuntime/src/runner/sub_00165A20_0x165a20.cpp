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

// Function: sub_00165A20
// Address: 0x165a20 - 0x165aa0
void sub_00165A20_0x165a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165A20_0x165a20");
#endif

    switch (ctx->pc) {
        case 0x165a40u: goto label_165a40;
        case 0x165a48u: goto label_165a48;
        case 0x165a50u: goto label_165a50;
        case 0x165a60u: goto label_165a60;
        case 0x165a68u: goto label_165a68;
        default: break;
    }

    ctx->pc = 0x165a20u;

    // 0x165a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165a24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x165a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x165a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165a2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x165a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165a34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a38: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x165a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x165a3c: 0x0  nop
    ctx->pc = 0x165a3cu;
    // NOP
label_165a40:
    // 0x165a40: 0xc137866  jal         func_4DE198
    ctx->pc = 0x165A40u;
    SET_GPR_U32(ctx, 31, 0x165A48u);
    ctx->pc = 0x165A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A40u;
    // 0x165a44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x165A40u, 0x165A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A48u;
label_165a48:
    // 0x165a48: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165A48u;
    SET_GPR_U32(ctx, 31, 0x165A50u);
    ctx->pc = 0x165A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A48u;
    // 0x165a4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165A48u, 0x165A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A50u;
label_165a50:
    // 0x165a50: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165A50u;
    {
        const bool branch_taken_0x165a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a50) {
            ctx->pc = 0x165A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A50u;
            // 0x165a54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A78u;
            goto label_165a78;
        }
    }
    ctx->pc = 0x165A58u;
    // 0x165a58: 0xc087502  jal         func_21D408
    ctx->pc = 0x165A58u;
    SET_GPR_U32(ctx, 31, 0x165A60u);
    ctx->pc = 0x165A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A58u;
    // 0x165a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165A58u, 0x165A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A60u;
label_165a60:
    // 0x165a60: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x165A60u;
    SET_GPR_U32(ctx, 31, 0x165A68u);
    ctx->pc = 0x165A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A60u;
    // 0x165a64: 0x24440164  addiu       $a0, $v0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x165A60u, 0x165A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A68u;
label_165a68:
    // 0x165a68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165A68u;
    {
        const bool branch_taken_0x165a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A68u;
        // 0x165a6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a68) {
            ctx->pc = 0x165A78u;
            goto label_165a78;
        }
    }
    ctx->pc = 0x165A70u;
    // 0x165a70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165A70u;
    {
        const bool branch_taken_0x165a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A70u;
        // 0x165a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a70) {
            ctx->pc = 0x165A88u;
            goto label_165a88;
        }
    }
    ctx->pc = 0x165A78u;
label_165a78:
    // 0x165a78: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x165a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165a7c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x165A7Cu;
    {
        const bool branch_taken_0x165a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A7Cu;
        // 0x165a80: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a7c) {
            ctx->pc = 0x165A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165a40;
        }
    }
    ctx->pc = 0x165A84u;
    // 0x165a84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165a88:
    // 0x165a88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x165a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165a94: 0x3e00008  jr          $ra
    ctx->pc = 0x165A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A94u;
        // 0x165a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165A9Cu;
    // 0x165a9c: 0x0  nop
    ctx->pc = 0x165a9cu;
    // NOP
    ctx->pc = 0x165aa0u;
}
