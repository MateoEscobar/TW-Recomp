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

// Function: sub_00422970
// Address: 0x422970 - 0x422998
void sub_00422970_0x422970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422970_0x422970");
#endif

    switch (ctx->pc) {
        case 0x422980u: goto label_422980;
        case 0x422988u: goto label_422988;
        default: break;
    }

    ctx->pc = 0x422970u;

    // 0x422970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x422970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x422974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x422978: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x422978u;
    SET_GPR_U32(ctx, 31, 0x422980u);
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x422978u, 0x422980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422980u;
label_422980:
    // 0x422980: 0xc10829c  jal         func_420A70
    ctx->pc = 0x422980u;
    SET_GPR_U32(ctx, 31, 0x422988u);
    ctx->pc = 0x422984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422980u;
    // 0x422984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A70u, 0x422980u, 0x422988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422988u;
label_422988:
    // 0x422988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42298c: 0x3e00008  jr          $ra
    ctx->pc = 0x42298Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42298Cu;
        // 0x422990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42298Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422994u;
    // 0x422994: 0x0  nop
    ctx->pc = 0x422994u;
    // NOP
    ctx->pc = 0x422998u;
}
