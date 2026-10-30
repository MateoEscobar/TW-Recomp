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

// Function: sub_00110F80
// Address: 0x110f80 - 0x110fa0
void sub_00110F80_0x110f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F80_0x110f80");
#endif

    switch (ctx->pc) {
        case 0x110f90u: goto label_110f90;
        default: break;
    }

    ctx->pc = 0x110f80u;

    // 0x110f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110f88: 0xc04572c  jal         func_115CB0
    ctx->pc = 0x110F88u;
    SET_GPR_U32(ctx, 31, 0x110F90u);
    ctx->pc = 0x110F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F88u;
    // 0x110f8c: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115CB0u, 0x110F88u, 0x110F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F90u;
label_110f90:
    // 0x110f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110f94: 0x3e00008  jr          $ra
    ctx->pc = 0x110F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F94u;
        // 0x110f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F9Cu;
    // 0x110f9c: 0x0  nop
    ctx->pc = 0x110f9cu;
    // NOP
    ctx->pc = 0x110fa0u;
}
