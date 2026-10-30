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

// Function: sub_002E4A50
// Address: 0x2e4a50 - 0x2e4a70
void sub_002E4A50_0x2e4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4A50_0x2e4a50");
#endif

    switch (ctx->pc) {
        case 0x2e4a64u: goto label_2e4a64;
        default: break;
    }

    ctx->pc = 0x2e4a50u;

    // 0x2e4a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4a5c: 0xc0d500e  jal         func_354038
    ctx->pc = 0x2E4A5Cu;
    SET_GPR_U32(ctx, 31, 0x2E4A64u);
    ctx->pc = 0x2E4A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A5Cu;
    // 0x2e4a60: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354038u, 0x2E4A5Cu, 0x2E4A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A64u;
label_2e4a64:
    // 0x2e4a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4a68: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A68u;
        // 0x2e4a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4A70u;
}
