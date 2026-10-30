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

// Function: sub_0036C838
// Address: 0x36c838 - 0x36c868
void sub_0036C838_0x36c838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C838_0x36c838");
#endif

    switch (ctx->pc) {
        case 0x36c84cu: goto label_36c84c;
        case 0x36c854u: goto label_36c854;
        default: break;
    }

    ctx->pc = 0x36c838u;

    // 0x36c838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c83c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c844: 0xc102488  jal         func_409220
    ctx->pc = 0x36C844u;
    SET_GPR_U32(ctx, 31, 0x36C84Cu);
    ctx->pc = 0x36C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C844u;
    // 0x36c848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36C844u, 0x36C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C84Cu;
label_36c84c:
    // 0x36c84c: 0xc103310  jal         func_40CC40
    ctx->pc = 0x36C84Cu;
    SET_GPR_U32(ctx, 31, 0x36C854u);
    ctx->pc = 0x36C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C84Cu;
    // 0x36c850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC40u, 0x36C84Cu, 0x36C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C854u;
label_36c854:
    // 0x36c854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c85c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C85Cu;
        // 0x36c860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C864u;
    // 0x36c864: 0x0  nop
    ctx->pc = 0x36c864u;
    // NOP
    ctx->pc = 0x36c868u;
}
