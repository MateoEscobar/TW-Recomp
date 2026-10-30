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

// Function: sub_001D0A88
// Address: 0x1d0a88 - 0x1d0aa8
void sub_001D0A88_0x1d0a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0A88_0x1d0a88");
#endif

    switch (ctx->pc) {
        case 0x1d0a9cu: goto label_1d0a9c;
        default: break;
    }

    ctx->pc = 0x1d0a88u;

    // 0x1d0a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0a8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0a94: 0xc07428e  jal         func_1D0A38
    ctx->pc = 0x1D0A94u;
    SET_GPR_U32(ctx, 31, 0x1D0A9Cu);
    ctx->pc = 0x1D0A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A94u;
    // 0x1d0a98: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0A38u, 0x1D0A94u, 0x1D0A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A9Cu;
label_1d0a9c:
    // 0x1d0a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AA0u;
        // 0x1d0aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0AA8u;
}
