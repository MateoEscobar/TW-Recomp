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

// Function: sub_001A7020
// Address: 0x1a7020 - 0x1a7040
void sub_001A7020_0x1a7020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7020_0x1a7020");
#endif

    switch (ctx->pc) {
        case 0x1a7030u: goto label_1a7030;
        default: break;
    }

    ctx->pc = 0x1a7020u;

    // 0x1a7020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7028: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1A7028u;
    SET_GPR_U32(ctx, 31, 0x1A7030u);
    ctx->pc = 0x1A702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7028u;
    // 0x1a702c: 0x8c850304  lw          $a1, 0x304($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1A7028u, 0x1A7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7030u;
label_1a7030:
    // 0x1a7030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7034: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7034u;
        // 0x1a7038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A703Cu;
    // 0x1a703c: 0x0  nop
    ctx->pc = 0x1a703cu;
    // NOP
    ctx->pc = 0x1a7040u;
}
