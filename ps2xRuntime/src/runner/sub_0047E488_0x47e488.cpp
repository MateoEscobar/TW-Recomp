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

// Function: sub_0047E488
// Address: 0x47e488 - 0x47e4a8
void sub_0047E488_0x47e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E488_0x47e488");
#endif

    switch (ctx->pc) {
        case 0x47e498u: goto label_47e498;
        default: break;
    }

    ctx->pc = 0x47e488u;

    // 0x47e488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47e488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47e48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47e48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47e490: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x47E490u;
    SET_GPR_U32(ctx, 31, 0x47E498u);
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x47E490u, 0x47E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E498u;
label_47e498:
    // 0x47e498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47e498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47e49c: 0x3e00008  jr          $ra
    ctx->pc = 0x47E49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E49Cu;
        // 0x47e4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E4A4u;
    // 0x47e4a4: 0x0  nop
    ctx->pc = 0x47e4a4u;
    // NOP
    ctx->pc = 0x47e4a8u;
}
