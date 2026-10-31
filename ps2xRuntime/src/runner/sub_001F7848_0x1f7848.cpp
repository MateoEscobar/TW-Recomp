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

// Function: sub_001F7848
// Address: 0x1f7848 - 0x1f7868
void sub_001F7848_0x1f7848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7848_0x1f7848");
#endif

    switch (ctx->pc) {
        case 0x1f7858u: goto label_1f7858;
        default: break;
    }

    ctx->pc = 0x1f7848u;

    // 0x1f7848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f784c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7850: 0xc07d792  jal         func_1F5E48
    ctx->pc = 0x1F7850u;
    SET_GPR_U32(ctx, 31, 0x1F7858u);
    ctx->pc = 0x1F7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7850u;
    // 0x1f7854: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5E48u, 0x1F7850u, 0x1F7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7858u;
label_1f7858:
    // 0x1f7858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f785c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F785Cu;
        // 0x1f7860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F785Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7864u;
    // 0x1f7864: 0x0  nop
    ctx->pc = 0x1f7864u;
    // NOP
    ctx->pc = 0x1f7868u;
}
