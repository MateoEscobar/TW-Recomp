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

// Function: sub_00479B70
// Address: 0x479b70 - 0x479b90
void sub_00479B70_0x479b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479B70_0x479b70");
#endif

    switch (ctx->pc) {
        case 0x479b80u: goto label_479b80;
        default: break;
    }

    ctx->pc = 0x479b70u;

    // 0x479b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x479b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x479b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x479b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x479b78: 0xc11e58c  jal         func_479630
    ctx->pc = 0x479B78u;
    SET_GPR_U32(ctx, 31, 0x479B80u);
    ctx->pc = 0x479630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479630u, 0x479B78u, 0x479B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479B80u;
label_479b80:
    // 0x479b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479b84: 0x3e00008  jr          $ra
    ctx->pc = 0x479B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x479B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479B84u;
        // 0x479b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479B8Cu;
    // 0x479b8c: 0x0  nop
    ctx->pc = 0x479b8cu;
    // NOP
    ctx->pc = 0x479b90u;
}
