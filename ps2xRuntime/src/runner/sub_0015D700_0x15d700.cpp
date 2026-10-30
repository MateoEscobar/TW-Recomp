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

// Function: sub_0015D700
// Address: 0x15d700 - 0x15d728
void sub_0015D700_0x15d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D700_0x15d700");
#endif

    switch (ctx->pc) {
        case 0x15d718u: goto label_15d718;
        default: break;
    }

    ctx->pc = 0x15d700u;

    // 0x15d700: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15d704: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d708: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15d708u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x15d70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d710: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15D710u;
    SET_GPR_U32(ctx, 31, 0x15D718u);
    ctx->pc = 0x15D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D710u;
    // 0x15d714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15D710u, 0x15D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D718u;
label_15d718:
    // 0x15d718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d71c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D71Cu;
        // 0x15d720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D724u;
    // 0x15d724: 0x0  nop
    ctx->pc = 0x15d724u;
    // NOP
    ctx->pc = 0x15d728u;
}
