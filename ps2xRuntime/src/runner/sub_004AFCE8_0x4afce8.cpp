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

// Function: sub_004AFCE8
// Address: 0x4afce8 - 0x4afd08
void sub_004AFCE8_0x4afce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFCE8_0x4afce8");
#endif

    switch (ctx->pc) {
        case 0x4afcf8u: goto label_4afcf8;
        default: break;
    }

    ctx->pc = 0x4afce8u;

    // 0x4afce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afcec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afcf0: 0xc12c5d8  jal         func_4B1760
    ctx->pc = 0x4AFCF0u;
    SET_GPR_U32(ctx, 31, 0x4AFCF8u);
    ctx->pc = 0x4B1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1760u, 0x4AFCF0u, 0x4AFCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFCF8u;
label_4afcf8:
    // 0x4afcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFCFCu;
        // 0x4afd00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFD04u;
    // 0x4afd04: 0x0  nop
    ctx->pc = 0x4afd04u;
    // NOP
    ctx->pc = 0x4afd08u;
}
