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

// Function: sub_0031C818
// Address: 0x31c818 - 0x31c840
void sub_0031C818_0x31c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C818_0x31c818");
#endif

    switch (ctx->pc) {
        case 0x31c830u: goto label_31c830;
        default: break;
    }

    ctx->pc = 0x31c818u;

    // 0x31c818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c81c: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31c81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31c820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c824: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x31c824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31c828: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x31C828u;
    SET_GPR_U32(ctx, 31, 0x31C830u);
    ctx->pc = 0x31C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C828u;
    // 0x31c82c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x31C828u, 0x31C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C830u;
label_31c830:
    // 0x31c830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c834: 0x3e00008  jr          $ra
    ctx->pc = 0x31C834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C834u;
        // 0x31c838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C83Cu;
    // 0x31c83c: 0x0  nop
    ctx->pc = 0x31c83cu;
    // NOP
    ctx->pc = 0x31c840u;
}
