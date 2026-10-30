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

// Function: sub_00341F00
// Address: 0x341f00 - 0x341f28
void sub_00341F00_0x341f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341F00_0x341f00");
#endif

    switch (ctx->pc) {
        case 0x341f1cu: goto label_341f1c;
        default: break;
    }

    ctx->pc = 0x341f00u;

    // 0x341f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341f04: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x341f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x341f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341f0c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x341f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f10: 0x244246b0  addiu       $v0, $v0, 0x46B0
    ctx->pc = 0x341f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18096));
    // 0x341f14: 0xc0d0680  jal         func_341A00
    ctx->pc = 0x341F14u;
    SET_GPR_U32(ctx, 31, 0x341F1Cu);
    ctx->pc = 0x341F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341F14u;
    // 0x341f18: 0xac620074  sw          $v0, 0x74($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x341F14u, 0x341F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F1Cu;
label_341f1c:
    // 0x341f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341f20: 0x3e00008  jr          $ra
    ctx->pc = 0x341F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F20u;
        // 0x341f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341F28u;
}
