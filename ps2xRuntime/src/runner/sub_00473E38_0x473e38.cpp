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

// Function: sub_00473E38
// Address: 0x473e38 - 0x473e70
void sub_00473E38_0x473e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473E38_0x473e38");
#endif

    switch (ctx->pc) {
        case 0x473e48u: goto label_473e48;
        case 0x473e50u: goto label_473e50;
        case 0x473e58u: goto label_473e58;
        case 0x473e60u: goto label_473e60;
        default: break;
    }

    ctx->pc = 0x473e38u;

    // 0x473e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x473e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x473e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473e40: 0xc11d01c  jal         func_474070
    ctx->pc = 0x473E40u;
    SET_GPR_U32(ctx, 31, 0x473E48u);
    ctx->pc = 0x474070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474070u, 0x473E40u, 0x473E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E48u;
label_473e48:
    // 0x473e48: 0xc11edc8  jal         func_47B720
    ctx->pc = 0x473E48u;
    SET_GPR_U32(ctx, 31, 0x473E50u);
    ctx->pc = 0x47B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B720u, 0x473E48u, 0x473E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E50u;
label_473e50:
    // 0x473e50: 0xc11edc0  jal         func_47B700
    ctx->pc = 0x473E50u;
    SET_GPR_U32(ctx, 31, 0x473E58u);
    ctx->pc = 0x47B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B700u, 0x473E50u, 0x473E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E58u;
label_473e58:
    // 0x473e58: 0xc11edb8  jal         func_47B6E0
    ctx->pc = 0x473E58u;
    SET_GPR_U32(ctx, 31, 0x473E60u);
    ctx->pc = 0x47B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B6E0u, 0x473E58u, 0x473E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E60u;
label_473e60:
    // 0x473e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473e64: 0x3e00008  jr          $ra
    ctx->pc = 0x473E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473E64u;
        // 0x473e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473E6Cu;
    // 0x473e6c: 0x0  nop
    ctx->pc = 0x473e6cu;
    // NOP
    ctx->pc = 0x473e70u;
}
