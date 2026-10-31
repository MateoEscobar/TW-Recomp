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

// Function: sub_00165C88
// Address: 0x165c88 - 0x165cf8
void sub_00165C88_0x165c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165C88_0x165c88");
#endif

    switch (ctx->pc) {
        case 0x165ca8u: goto label_165ca8;
        case 0x165cb0u: goto label_165cb0;
        case 0x165cb8u: goto label_165cb8;
        case 0x165cc8u: goto label_165cc8;
        default: break;
    }

    ctx->pc = 0x165c88u;

    // 0x165c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165c8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x165c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x165c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165c94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x165c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ca0: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x165ca4: 0x0  nop
    ctx->pc = 0x165ca4u;
    // NOP
label_165ca8:
    // 0x165ca8: 0xc137866  jal         func_4DE198
    ctx->pc = 0x165CA8u;
    SET_GPR_U32(ctx, 31, 0x165CB0u);
    ctx->pc = 0x165CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CA8u;
    // 0x165cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x165CA8u, 0x165CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CB0u;
label_165cb0:
    // 0x165cb0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165CB0u;
    SET_GPR_U32(ctx, 31, 0x165CB8u);
    ctx->pc = 0x165CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CB0u;
    // 0x165cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165CB0u, 0x165CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CB8u;
label_165cb8:
    // 0x165cb8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x165CB8u;
    {
        const bool branch_taken_0x165cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165cb8) {
            ctx->pc = 0x165CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165CB8u;
            // 0x165cbc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165CD4u;
            goto label_165cd4;
        }
    }
    ctx->pc = 0x165CC0u;
    // 0x165cc0: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x165CC0u;
    SET_GPR_U32(ctx, 31, 0x165CC8u);
    ctx->pc = 0x165CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CC0u;
    // 0x165cc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x165CC0u, 0x165CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CC8u;
label_165cc8:
    // 0x165cc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165CC8u;
    {
        const bool branch_taken_0x165cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CC8u;
        // 0x165ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cc8) {
            ctx->pc = 0x165CE4u;
            goto label_165ce4;
        }
    }
    ctx->pc = 0x165CD0u;
    // 0x165cd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x165cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_165cd4:
    // 0x165cd4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x165cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165cd8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x165CD8u;
    {
        const bool branch_taken_0x165cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CD8u;
        // 0x165cdc: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cd8) {
            ctx->pc = 0x165CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165ca8;
        }
    }
    ctx->pc = 0x165CE0u;
    // 0x165ce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165ce4:
    // 0x165ce4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x165ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x165CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CF0u;
        // 0x165cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165CF8u;
}
