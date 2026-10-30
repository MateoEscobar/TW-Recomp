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

// Function: sub_004E4C78
// Address: 0x4e4c78 - 0x4e4ca0
void sub_004E4C78_0x4e4c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C78_0x4e4c78");
#endif

    switch (ctx->pc) {
        case 0x4e4c88u: goto label_4e4c88;
        default: break;
    }

    ctx->pc = 0x4e4c78u;

    // 0x4e4c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e4c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4c80: 0xc06e534  jal         func_1B94D0
    ctx->pc = 0x4E4C80u;
    SET_GPR_U32(ctx, 31, 0x4E4C88u);
    ctx->pc = 0x4E4C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4C80u;
    // 0x4e4c84: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x4E4C80u, 0x4E4C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4C88u;
label_4e4c88:
    // 0x4e4c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4C8Cu;
        // 0x4e4c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4C94u;
    // 0x4e4c94: 0x0  nop
    ctx->pc = 0x4e4c94u;
    // NOP
    // 0x4e4c98: 0xac8001a4  sw          $zero, 0x1A4($a0)
    ctx->pc = 0x4e4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 0));
    // 0x4e4c9c: 0x0  nop
    ctx->pc = 0x4e4c9cu;
    // NOP
    ctx->pc = 0x4e4ca0u;
}
