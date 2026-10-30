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

// Function: sub_0028FF58
// Address: 0x28ff58 - 0x28ff78
void sub_0028FF58_0x28ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FF58_0x28ff58");
#endif

    switch (ctx->pc) {
        case 0x28ff68u: goto label_28ff68;
        default: break;
    }

    ctx->pc = 0x28ff58u;

    // 0x28ff58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ff58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ff5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ff60: 0xc0594a8  jal         func_1652A0
    ctx->pc = 0x28FF60u;
    SET_GPR_U32(ctx, 31, 0x28FF68u);
    ctx->pc = 0x28FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF60u;
    // 0x28ff64: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652A0u, 0x28FF60u, 0x28FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF68u;
label_28ff68:
    // 0x28ff68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ff68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff6c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF6Cu;
        // 0x28ff70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FF74u;
    // 0x28ff74: 0x0  nop
    ctx->pc = 0x28ff74u;
    // NOP
    ctx->pc = 0x28ff78u;
}
