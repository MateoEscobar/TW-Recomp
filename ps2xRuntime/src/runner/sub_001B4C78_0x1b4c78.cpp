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

// Function: sub_001B4C78
// Address: 0x1b4c78 - 0x1b4c98
void sub_001B4C78_0x1b4c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C78_0x1b4c78");
#endif

    switch (ctx->pc) {
        case 0x1b4c8cu: goto label_1b4c8c;
        default: break;
    }

    ctx->pc = 0x1b4c78u;

    // 0x1b4c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4c7c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1b4c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4c84: 0xc07094c  jal         func_1C2530
    ctx->pc = 0x1B4C84u;
    SET_GPR_U32(ctx, 31, 0x1B4C8Cu);
    ctx->pc = 0x1B4C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C84u;
    // 0x1b4c88: 0x2484a1b0  addiu       $a0, $a0, -0x5E50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2530u, 0x1B4C84u, 0x1B4C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C8Cu;
label_1b4c8c:
    // 0x1b4c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C90u;
        // 0x1b4c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C98u;
}
