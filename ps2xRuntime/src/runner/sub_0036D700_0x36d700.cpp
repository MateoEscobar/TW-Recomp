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

// Function: sub_0036D700
// Address: 0x36d700 - 0x36d720
void sub_0036D700_0x36d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D700_0x36d700");
#endif

    switch (ctx->pc) {
        case 0x36d710u: goto label_36d710;
        default: break;
    }

    ctx->pc = 0x36d700u;

    // 0x36d700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d708: 0xc0e18dc  jal         func_386370
    ctx->pc = 0x36D708u;
    SET_GPR_U32(ctx, 31, 0x36D710u);
    ctx->pc = 0x386370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386370u, 0x36D708u, 0x36D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D710u;
label_36d710:
    // 0x36d710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d718: 0x3e00008  jr          $ra
    ctx->pc = 0x36D718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D718u;
        // 0x36d71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D720u;
}
