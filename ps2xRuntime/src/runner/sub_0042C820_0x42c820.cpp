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

// Function: sub_0042C820
// Address: 0x42c820 - 0x42c878
void sub_0042C820_0x42c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C820_0x42c820");
#endif

    switch (ctx->pc) {
        case 0x42c838u: goto label_42c838;
        case 0x42c840u: goto label_42c840;
        case 0x42c848u: goto label_42c848;
        case 0x42c850u: goto label_42c850;
        case 0x42c860u: goto label_42c860;
        case 0x42c868u: goto label_42c868;
        case 0x42c870u: goto label_42c870;
        default: break;
    }

    ctx->pc = 0x42c820u;

    // 0x42c820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42c824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42c828: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x42C828u;
    {
        const bool branch_taken_0x42c828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C828u;
        // 0x42c82c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c828) {
            ctx->pc = 0x42C888u;
            return;
        }
    }
    ctx->pc = 0x42C830u;
    // 0x42c830: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x42C830u;
    SET_GPR_U32(ctx, 31, 0x42C838u);
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x42C830u, 0x42C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C838u;
label_42c838:
    // 0x42c838: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x42C838u;
    {
        const bool branch_taken_0x42c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C838u;
        // 0x42c83c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c838) {
            ctx->pc = 0x42C88Cu;
            return;
        }
    }
    ctx->pc = 0x42C840u;
label_42c840:
    // 0x42c840: 0xc10b510  jal         func_42D440
    ctx->pc = 0x42C840u;
    SET_GPR_U32(ctx, 31, 0x42C848u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42C840u, 0x42C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C848u;
label_42c848:
    // 0x42c848: 0xc10b644  jal         func_42D910
    ctx->pc = 0x42C848u;
    SET_GPR_U32(ctx, 31, 0x42C850u);
    ctx->pc = 0x42D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D910u, 0x42C848u, 0x42C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C850u;
label_42c850:
    // 0x42c850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42c850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c858: 0xc10b6e2  jal         func_42DB88
    ctx->pc = 0x42C858u;
    SET_GPR_U32(ctx, 31, 0x42C860u);
    ctx->pc = 0x42C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C858u;
    // 0x42c85c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DB88u, 0x42C858u, 0x42C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C860u;
label_42c860:
    // 0x42c860: 0xc10b510  jal         func_42D440
    ctx->pc = 0x42C860u;
    SET_GPR_U32(ctx, 31, 0x42C868u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42C860u, 0x42C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C868u;
label_42c868:
    // 0x42c868: 0xc10b6a4  jal         func_42DA90
    ctx->pc = 0x42C868u;
    SET_GPR_U32(ctx, 31, 0x42C870u);
    ctx->pc = 0x42C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C868u;
    // 0x42c86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA90u, 0x42C868u, 0x42C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C870u;
label_42c870:
    // 0x42c870: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x42C870u;
    {
        const bool branch_taken_0x42c870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c870) {
            ctx->pc = 0x42C860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c860;
        }
    }
    ctx->pc = 0x42C878u;
}
