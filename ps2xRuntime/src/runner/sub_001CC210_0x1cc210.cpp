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

// Function: sub_001CC210
// Address: 0x1cc210 - 0x1cc240
void sub_001CC210_0x1cc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC210_0x1cc210");
#endif

    switch (ctx->pc) {
        case 0x1cc234u: goto label_1cc234;
        default: break;
    }

    ctx->pc = 0x1cc210u;

    // 0x1cc210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc214: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1cc214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1cc218: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cc218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cc21c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc220: 0x2442aca0  addiu       $v0, $v0, -0x5360
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945952));
    // 0x1cc224: 0x2463acc8  addiu       $v1, $v1, -0x5338
    ctx->pc = 0x1cc224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945992));
    // 0x1cc228: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x1cc228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x1cc22c: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1CC22Cu;
    SET_GPR_U32(ctx, 31, 0x1CC234u);
    ctx->pc = 0x1CC230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC22Cu;
    // 0x1cc230: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1CC22Cu, 0x1CC234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC234u;
label_1cc234:
    // 0x1cc234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc238: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC238u;
        // 0x1cc23c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC240u;
}
