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

// Function: sub_001C2568
// Address: 0x1c2568 - 0x1c2588
void sub_001C2568_0x1c2568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2568_0x1c2568");
#endif

    switch (ctx->pc) {
        case 0x1c2578u: goto label_1c2578;
        default: break;
    }

    ctx->pc = 0x1c2568u;

    // 0x1c2568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c256c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2570: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1C2570u;
    SET_GPR_U32(ctx, 31, 0x1C2578u);
    ctx->pc = 0x1C2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2570u;
    // 0x1c2574: 0x8c850174  lw          $a1, 0x174($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1C2570u, 0x1C2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2578u;
label_1c2578:
    // 0x1c2578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c257c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C257Cu;
        // 0x1c2580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2584u;
    // 0x1c2584: 0x0  nop
    ctx->pc = 0x1c2584u;
    // NOP
    ctx->pc = 0x1c2588u;
}
