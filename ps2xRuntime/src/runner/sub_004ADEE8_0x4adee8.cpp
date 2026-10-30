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

// Function: sub_004ADEE8
// Address: 0x4adee8 - 0x4adf08
void sub_004ADEE8_0x4adee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADEE8_0x4adee8");
#endif

    switch (ctx->pc) {
        case 0x4adef8u: goto label_4adef8;
        default: break;
    }

    ctx->pc = 0x4adee8u;

    // 0x4adee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4adee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4adeec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4adeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4adef0: 0xc12ce20  jal         func_4B3880
    ctx->pc = 0x4ADEF0u;
    SET_GPR_U32(ctx, 31, 0x4ADEF8u);
    ctx->pc = 0x4B3880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3880u, 0x4ADEF0u, 0x4ADEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADEF8u;
label_4adef8:
    // 0x4adef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4adef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adefc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADEFCu;
        // 0x4adf00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADF04u;
    // 0x4adf04: 0x0  nop
    ctx->pc = 0x4adf04u;
    // NOP
    ctx->pc = 0x4adf08u;
}
