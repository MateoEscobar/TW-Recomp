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

// Function: sub_00223B28
// Address: 0x223b28 - 0x223b48
void sub_00223B28_0x223b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223B28_0x223b28");
#endif

    switch (ctx->pc) {
        case 0x223b38u: goto label_223b38;
        default: break;
    }

    ctx->pc = 0x223b28u;

    // 0x223b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223b30: 0xc089998  jal         func_226660
    ctx->pc = 0x223B30u;
    SET_GPR_U32(ctx, 31, 0x223B38u);
    ctx->pc = 0x223B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B30u;
    // 0x223b34: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x223B30u, 0x223B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B38u;
label_223b38:
    // 0x223b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x223B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B3Cu;
        // 0x223b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223B44u;
    // 0x223b44: 0x0  nop
    ctx->pc = 0x223b44u;
    // NOP
    ctx->pc = 0x223b48u;
}
