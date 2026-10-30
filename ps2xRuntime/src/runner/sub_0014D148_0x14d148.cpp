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

// Function: sub_0014D148
// Address: 0x14d148 - 0x14d168
void sub_0014D148_0x14d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D148_0x14d148");
#endif

    switch (ctx->pc) {
        case 0x14d158u: goto label_14d158;
        default: break;
    }

    ctx->pc = 0x14d148u;

    // 0x14d148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d150: 0xc054762  jal         func_151D88
    ctx->pc = 0x14D150u;
    SET_GPR_U32(ctx, 31, 0x14D158u);
    ctx->pc = 0x14D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D150u;
    // 0x14d154: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151D88u, 0x14D150u, 0x14D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D158u;
label_14d158:
    // 0x14d158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d15c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D15Cu;
        // 0x14d160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D164u;
    // 0x14d164: 0x0  nop
    ctx->pc = 0x14d164u;
    // NOP
    ctx->pc = 0x14d168u;
}
