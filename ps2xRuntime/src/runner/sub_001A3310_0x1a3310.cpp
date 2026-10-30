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

// Function: sub_001A3310
// Address: 0x1a3310 - 0x1a3338
void sub_001A3310_0x1a3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3310_0x1a3310");
#endif

    switch (ctx->pc) {
        case 0x1a3328u: goto label_1a3328;
        default: break;
    }

    ctx->pc = 0x1a3310u;

    // 0x1a3310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a3310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3318: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1a3318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1a331c: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1a331cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1a3320: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x1A3320u;
    SET_GPR_U32(ctx, 31, 0x1A3328u);
    ctx->pc = 0x1A3324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3320u;
    // 0x1a3324: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1A3320u, 0x1A3328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3328u;
label_1a3328:
    // 0x1a3328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a332c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A332Cu;
        // 0x1a3330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3334u;
    // 0x1a3334: 0x0  nop
    ctx->pc = 0x1a3334u;
    // NOP
    ctx->pc = 0x1a3338u;
}
