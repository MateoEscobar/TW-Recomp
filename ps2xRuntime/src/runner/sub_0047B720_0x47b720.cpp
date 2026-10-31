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

// Function: sub_0047B720
// Address: 0x47b720 - 0x47b740
void sub_0047B720_0x47b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B720_0x47b720");
#endif

    switch (ctx->pc) {
        case 0x47b730u: goto label_47b730;
        default: break;
    }

    ctx->pc = 0x47b720u;

    // 0x47b720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47b724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b728: 0xc11cf9c  jal         func_473E70
    ctx->pc = 0x47B728u;
    SET_GPR_U32(ctx, 31, 0x47B730u);
    ctx->pc = 0x47B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B728u;
    // 0x47b72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473E70u, 0x47B728u, 0x47B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B730u;
label_47b730:
    // 0x47b730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b734: 0x3e00008  jr          $ra
    ctx->pc = 0x47B734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B734u;
        // 0x47b738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B73Cu;
    // 0x47b73c: 0x0  nop
    ctx->pc = 0x47b73cu;
    // NOP
    ctx->pc = 0x47b740u;
}
