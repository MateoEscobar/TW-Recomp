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

// Function: sub_004D9EC0
// Address: 0x4d9ec0 - 0x4d9f18
void sub_004D9EC0_0x4d9ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9EC0_0x4d9ec0");
#endif

    switch (ctx->pc) {
        case 0x4d9ed0u: goto label_4d9ed0;
        case 0x4d9ed8u: goto label_4d9ed8;
        case 0x4d9ee0u: goto label_4d9ee0;
        case 0x4d9ee8u: goto label_4d9ee8;
        case 0x4d9ef0u: goto label_4d9ef0;
        case 0x4d9f00u: goto label_4d9f00;
        case 0x4d9f08u: goto label_4d9f08;
        case 0x4d9f10u: goto label_4d9f10;
        default: break;
    }

    ctx->pc = 0x4d9ec0u;

    // 0x4d9ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d9ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d9ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d9ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d9ec8: 0xc1367fa  jal         func_4D9FE8
    ctx->pc = 0x4D9EC8u;
    SET_GPR_U32(ctx, 31, 0x4D9ED0u);
    ctx->pc = 0x4D9ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9EC8u;
    // 0x4d9ecc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9FE8u, 0x4D9EC8u, 0x4D9ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9ED0u;
label_4d9ed0:
    // 0x4d9ed0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4D9ED0u;
    {
        const bool branch_taken_0x4d9ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9ED0u;
        // 0x4d9ed4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9ed0) {
            ctx->pc = 0x4D9F28u;
            return;
        }
    }
    ctx->pc = 0x4D9ED8u;
label_4d9ed8:
    // 0x4d9ed8: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4D9ED8u;
    SET_GPR_U32(ctx, 31, 0x4D9EE0u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4D9ED8u, 0x4D9EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9EE0u;
label_4d9ee0:
    // 0x4d9ee0: 0xc10b644  jal         func_42D910
    ctx->pc = 0x4D9EE0u;
    SET_GPR_U32(ctx, 31, 0x4D9EE8u);
    ctx->pc = 0x42D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D910u, 0x4D9EE0u, 0x4D9EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9EE8u;
label_4d9ee8:
    // 0x4d9ee8: 0xc1367da  jal         func_4D9F68
    ctx->pc = 0x4D9EE8u;
    SET_GPR_U32(ctx, 31, 0x4D9EF0u);
    ctx->pc = 0x4D9EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9EE8u;
    // 0x4d9eec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9F68u, 0x4D9EE8u, 0x4D9EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9EF0u;
label_4d9ef0:
    // 0x4d9ef0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4d9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4d9ef4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4d9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d9ef8: 0xc10b6e2  jal         func_42DB88
    ctx->pc = 0x4D9EF8u;
    SET_GPR_U32(ctx, 31, 0x4D9F00u);
    ctx->pc = 0x4D9EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9EF8u;
    // 0x4d9efc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DB88u, 0x4D9EF8u, 0x4D9F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9F00u;
label_4d9f00:
    // 0x4d9f00: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4D9F00u;
    SET_GPR_U32(ctx, 31, 0x4D9F08u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4D9F00u, 0x4D9F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9F08u;
label_4d9f08:
    // 0x4d9f08: 0xc10b6a4  jal         func_42DA90
    ctx->pc = 0x4D9F08u;
    SET_GPR_U32(ctx, 31, 0x4D9F10u);
    ctx->pc = 0x4D9F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9F08u;
    // 0x4d9f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA90u, 0x4D9F08u, 0x4D9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9F10u;
label_4d9f10:
    // 0x4d9f10: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x4D9F10u;
    {
        const bool branch_taken_0x4d9f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9f10) {
            ctx->pc = 0x4D9F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d9f00;
        }
    }
    ctx->pc = 0x4D9F18u;
}
