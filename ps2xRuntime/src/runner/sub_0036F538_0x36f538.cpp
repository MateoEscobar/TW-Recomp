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

// Function: sub_0036F538
// Address: 0x36f538 - 0x36f558
void sub_0036F538_0x36f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F538_0x36f538");
#endif

    switch (ctx->pc) {
        case 0x36f548u: goto label_36f548;
        default: break;
    }

    ctx->pc = 0x36f538u;

    // 0x36f538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f53c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f540: 0xc06d2a2  jal         func_1B4A88
    ctx->pc = 0x36F540u;
    SET_GPR_U32(ctx, 31, 0x36F548u);
    ctx->pc = 0x1B4A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A88u, 0x36F540u, 0x36F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F548u;
label_36f548:
    // 0x36f548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f54c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f550: 0x3e00008  jr          $ra
    ctx->pc = 0x36F550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F550u;
        // 0x36f554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F558u;
}
