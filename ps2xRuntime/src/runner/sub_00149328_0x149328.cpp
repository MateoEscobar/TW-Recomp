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

// Function: sub_00149328
// Address: 0x149328 - 0x149348
void sub_00149328_0x149328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149328_0x149328");
#endif

    switch (ctx->pc) {
        case 0x14933cu: goto label_14933c;
        default: break;
    }

    ctx->pc = 0x149328u;

    // 0x149328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14932c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14932cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149334: 0xc110746  jal         func_441D18
    ctx->pc = 0x149334u;
    SET_GPR_U32(ctx, 31, 0x14933Cu);
    ctx->pc = 0x149338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149334u;
    // 0x149338: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441D18u, 0x149334u, 0x14933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14933Cu;
label_14933c:
    // 0x14933c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14933cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149340: 0x3e00008  jr          $ra
    ctx->pc = 0x149340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149340u;
        // 0x149344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149348u;
}
