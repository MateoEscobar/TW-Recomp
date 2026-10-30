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

// Function: sub_0030A710
// Address: 0x30a710 - 0x30a738
void sub_0030A710_0x30a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A710_0x30a710");
#endif

    switch (ctx->pc) {
        case 0x30a728u: goto label_30a728;
        default: break;
    }

    ctx->pc = 0x30a710u;

    // 0x30a710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30a714: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x30a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x30a718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a71c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x30a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a720: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x30A720u;
    SET_GPR_U32(ctx, 31, 0x30A728u);
    ctx->pc = 0x30A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A720u;
    // 0x30a724: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x30A720u, 0x30A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A728u;
label_30a728:
    // 0x30a728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a72c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A72Cu;
        // 0x30a730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A734u;
    // 0x30a734: 0x0  nop
    ctx->pc = 0x30a734u;
    // NOP
    ctx->pc = 0x30a738u;
}
