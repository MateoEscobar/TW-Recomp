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

// Function: sub_00341638
// Address: 0x341638 - 0x341660
void sub_00341638_0x341638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341638_0x341638");
#endif

    switch (ctx->pc) {
        case 0x341650u: goto label_341650;
        default: break;
    }

    ctx->pc = 0x341638u;

    // 0x341638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34163c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x34163cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341644: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x341644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341648: 0xc0d0464  jal         func_341190
    ctx->pc = 0x341648u;
    SET_GPR_U32(ctx, 31, 0x341650u);
    ctx->pc = 0x34164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341648u;
    // 0x34164c: 0x24860010  addiu       $a2, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341190u, 0x341648u, 0x341650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341650u;
label_341650:
    // 0x341650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341654: 0x3e00008  jr          $ra
    ctx->pc = 0x341654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341654u;
        // 0x341658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34165Cu;
    // 0x34165c: 0x0  nop
    ctx->pc = 0x34165cu;
    // NOP
    ctx->pc = 0x341660u;
}
