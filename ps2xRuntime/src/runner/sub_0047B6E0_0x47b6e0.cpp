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

// Function: sub_0047B6E0
// Address: 0x47b6e0 - 0x47b700
void sub_0047B6E0_0x47b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B6E0_0x47b6e0");
#endif

    switch (ctx->pc) {
        case 0x47b6f0u: goto label_47b6f0;
        default: break;
    }

    ctx->pc = 0x47b6e0u;

    // 0x47b6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47b6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b6e8: 0xc11cfb4  jal         func_473ED0
    ctx->pc = 0x47B6E8u;
    SET_GPR_U32(ctx, 31, 0x47B6F0u);
    ctx->pc = 0x47B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B6E8u;
    // 0x47b6ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473ED0u, 0x47B6E8u, 0x47B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B6F0u;
label_47b6f0:
    // 0x47b6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x47B6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B6F4u;
        // 0x47b6f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B6FCu;
    // 0x47b6fc: 0x0  nop
    ctx->pc = 0x47b6fcu;
    // NOP
    ctx->pc = 0x47b700u;
}
