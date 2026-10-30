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

// Function: sub_0010D850
// Address: 0x10d850 - 0x10d870
void sub_0010D850_0x10d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D850_0x10d850");
#endif

    switch (ctx->pc) {
        case 0x10d860u: goto label_10d860;
        default: break;
    }

    ctx->pc = 0x10d850u;

    // 0x10d850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d858: 0xc043b74  jal         func_10EDD0
    ctx->pc = 0x10D858u;
    SET_GPR_U32(ctx, 31, 0x10D860u);
    ctx->pc = 0x10D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D858u;
    // 0x10d85c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EDD0u, 0x10D858u, 0x10D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D860u;
label_10d860:
    // 0x10d860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d864: 0x3e00008  jr          $ra
    ctx->pc = 0x10D864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D864u;
        // 0x10d868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D86Cu;
    // 0x10d86c: 0x0  nop
    ctx->pc = 0x10d86cu;
    // NOP
    ctx->pc = 0x10d870u;
}
