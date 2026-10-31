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

// Function: sub_0036E438
// Address: 0x36e438 - 0x36e468
void sub_0036E438_0x36e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E438_0x36e438");
#endif

    switch (ctx->pc) {
        case 0x36e44cu: goto label_36e44c;
        case 0x36e454u: goto label_36e454;
        default: break;
    }

    ctx->pc = 0x36e438u;

    // 0x36e438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e43c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e444: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36E444u;
    SET_GPR_U32(ctx, 31, 0x36E44Cu);
    ctx->pc = 0x36E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E444u;
    // 0x36e448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36E444u, 0x36E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E44Cu;
label_36e44c:
    // 0x36e44c: 0xc09446e  jal         func_2511B8
    ctx->pc = 0x36E44Cu;
    SET_GPR_U32(ctx, 31, 0x36E454u);
    ctx->pc = 0x36E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E44Cu;
    // 0x36e450: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2511B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2511B8u, 0x36E44Cu, 0x36E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E454u;
label_36e454:
    // 0x36e454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e45c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E45Cu;
        // 0x36e460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E464u;
    // 0x36e464: 0x0  nop
    ctx->pc = 0x36e464u;
    // NOP
    ctx->pc = 0x36e468u;
}
