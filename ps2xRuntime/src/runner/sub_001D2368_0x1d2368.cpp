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

// Function: sub_001D2368
// Address: 0x1d2368 - 0x1d2398
void sub_001D2368_0x1d2368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2368_0x1d2368");
#endif

    switch (ctx->pc) {
        case 0x1d237cu: goto label_1d237c;
        case 0x1d2388u: goto label_1d2388;
        default: break;
    }

    ctx->pc = 0x1d2368u;

    // 0x1d2368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d236c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2374: 0xc07466a  jal         func_1D19A8
    ctx->pc = 0x1D2374u;
    SET_GPR_U32(ctx, 31, 0x1D237Cu);
    ctx->pc = 0x1D2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2374u;
    // 0x1d2378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19A8u, 0x1D2374u, 0x1D237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D237Cu;
label_1d237c:
    // 0x1d237c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2380: 0xc0748e6  jal         func_1D2398
    ctx->pc = 0x1D2380u;
    SET_GPR_U32(ctx, 31, 0x1D2388u);
    ctx->pc = 0x1D2384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2380u;
    // 0x1d2384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2398u, 0x1D2380u, 0x1D2388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2388u;
label_1d2388:
    // 0x1d2388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d238c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2390: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2390u;
        // 0x1d2394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2398u;
}
