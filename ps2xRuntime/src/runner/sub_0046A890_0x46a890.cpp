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

// Function: sub_0046A890
// Address: 0x46a890 - 0x46a8b0
void sub_0046A890_0x46a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A890_0x46a890");
#endif

    switch (ctx->pc) {
        case 0x46a8a0u: goto label_46a8a0;
        default: break;
    }

    ctx->pc = 0x46a890u;

    // 0x46a890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46a894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a898: 0xc11a4fc  jal         func_4693F0
    ctx->pc = 0x46A898u;
    SET_GPR_U32(ctx, 31, 0x46A8A0u);
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x46A898u, 0x46A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A8A0u;
label_46a8a0:
    // 0x46a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x46A8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A8A4u;
        // 0x46a8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A8ACu;
    // 0x46a8ac: 0x0  nop
    ctx->pc = 0x46a8acu;
    // NOP
    ctx->pc = 0x46a8b0u;
}
