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

// Function: sub_0014D428
// Address: 0x14d428 - 0x14d450
void sub_0014D428_0x14d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D428_0x14d428");
#endif

    switch (ctx->pc) {
        case 0x14d43cu: goto label_14d43c;
        case 0x14d444u: goto label_14d444;
        default: break;
    }

    ctx->pc = 0x14d428u;

    // 0x14d428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d430: 0xac800b88  sw          $zero, 0xB88($a0)
    ctx->pc = 0x14d430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2952), GPR_U32(ctx, 0));
    // 0x14d434: 0xc05400a  jal         func_150028
    ctx->pc = 0x14D434u;
    SET_GPR_U32(ctx, 31, 0x14D43Cu);
    ctx->pc = 0x14D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D434u;
    // 0x14d438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150028u, 0x14D434u, 0x14D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D43Cu;
label_14d43c:
    // 0x14d43c: 0xc05400a  jal         func_150028
    ctx->pc = 0x14D43Cu;
    SET_GPR_U32(ctx, 31, 0x14D444u);
    ctx->pc = 0x14D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D43Cu;
    // 0x14d440: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150028u, 0x14D43Cu, 0x14D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D444u;
label_14d444:
    // 0x14d444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d448: 0x3e00008  jr          $ra
    ctx->pc = 0x14D448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D448u;
        // 0x14d44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D450u;
}
