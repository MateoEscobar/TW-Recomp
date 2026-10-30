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

// Function: sub_001AB6A0
// Address: 0x1ab6a0 - 0x1ab6c8
void sub_001AB6A0_0x1ab6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB6A0_0x1ab6a0");
#endif

    switch (ctx->pc) {
        case 0x1ab6bcu: goto label_1ab6bc;
        default: break;
    }

    ctx->pc = 0x1ab6a0u;

    // 0x1ab6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab6a4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ab6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ab6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab6ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ab6acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6b0: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x1ab6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
    // 0x1ab6b4: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1AB6B4u;
    SET_GPR_U32(ctx, 31, 0x1AB6BCu);
    ctx->pc = 0x1AB6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB6B4u;
    // 0x1ab6b8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1AB6B4u, 0x1AB6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6BCu;
label_1ab6bc:
    // 0x1ab6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6C0u;
        // 0x1ab6c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB6C8u;
}
