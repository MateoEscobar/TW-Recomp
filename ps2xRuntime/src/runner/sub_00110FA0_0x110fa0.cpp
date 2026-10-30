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

// Function: sub_00110FA0
// Address: 0x110fa0 - 0x110fc0
void sub_00110FA0_0x110fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110FA0_0x110fa0");
#endif

    switch (ctx->pc) {
        case 0x110fb0u: goto label_110fb0;
        default: break;
    }

    ctx->pc = 0x110fa0u;

    // 0x110fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110fa8: 0xc0457ba  jal         func_115EE8
    ctx->pc = 0x110FA8u;
    SET_GPR_U32(ctx, 31, 0x110FB0u);
    ctx->pc = 0x110FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FA8u;
    // 0x110fac: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115EE8u, 0x110FA8u, 0x110FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FB0u;
label_110fb0:
    // 0x110fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x110FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FB4u;
        // 0x110fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110FBCu;
    // 0x110fbc: 0x0  nop
    ctx->pc = 0x110fbcu;
    // NOP
    ctx->pc = 0x110fc0u;
}
