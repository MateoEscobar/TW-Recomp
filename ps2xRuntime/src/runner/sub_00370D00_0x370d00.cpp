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

// Function: sub_00370D00
// Address: 0x370d00 - 0x370d20
void sub_00370D00_0x370d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370D00_0x370d00");
#endif

    switch (ctx->pc) {
        case 0x370d10u: goto label_370d10;
        default: break;
    }

    ctx->pc = 0x370d00u;

    // 0x370d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370d08: 0xc06cfc4  jal         func_1B3F10
    ctx->pc = 0x370D08u;
    SET_GPR_U32(ctx, 31, 0x370D10u);
    ctx->pc = 0x1B3F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F10u, 0x370D08u, 0x370D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D10u;
label_370d10:
    // 0x370d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d18: 0x3e00008  jr          $ra
    ctx->pc = 0x370D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D18u;
        // 0x370d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370D20u;
}
