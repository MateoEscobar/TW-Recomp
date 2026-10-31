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

// Function: sub_001E7E58
// Address: 0x1e7e58 - 0x1e7e78
void sub_001E7E58_0x1e7e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7E58_0x1e7e58");
#endif

    switch (ctx->pc) {
        case 0x1e7e68u: goto label_1e7e68;
        default: break;
    }

    ctx->pc = 0x1e7e58u;

    // 0x1e7e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7e60: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1E7E60u;
    SET_GPR_U32(ctx, 31, 0x1E7E68u);
    ctx->pc = 0x1E7E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E60u;
    // 0x1e7e64: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1E7E60u, 0x1E7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E68u;
label_1e7e68:
    // 0x1e7e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E6Cu;
        // 0x1e7e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7E74u;
    // 0x1e7e74: 0x0  nop
    ctx->pc = 0x1e7e74u;
    // NOP
    ctx->pc = 0x1e7e78u;
}
