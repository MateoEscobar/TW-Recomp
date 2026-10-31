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

// Function: sub_004E46B0
// Address: 0x4e46b0 - 0x4e46d8
void sub_004E46B0_0x4e46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E46B0_0x4e46b0");
#endif

    switch (ctx->pc) {
        case 0x4e46c0u: goto label_4e46c0;
        default: break;
    }

    ctx->pc = 0x4e46b0u;

    // 0x4e46b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e46b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e46b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e46b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e46b8: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4E46B8u;
    SET_GPR_U32(ctx, 31, 0x4E46C0u);
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E46B8u, 0x4E46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E46C0u;
label_4e46c0:
    // 0x4e46c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e46c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e46c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E46C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E46C4u;
        // 0x4e46c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E46C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E46CCu;
    // 0x4e46cc: 0x0  nop
    ctx->pc = 0x4e46ccu;
    // NOP
    // 0x4e46d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4e46d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4e46d4: 0x0  nop
    ctx->pc = 0x4e46d4u;
    // NOP
    ctx->pc = 0x4e46d8u;
}
