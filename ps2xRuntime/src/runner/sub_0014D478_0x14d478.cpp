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

// Function: sub_0014D478
// Address: 0x14d478 - 0x14d498
void sub_0014D478_0x14d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D478_0x14d478");
#endif

    switch (ctx->pc) {
        case 0x14d48cu: goto label_14d48c;
        default: break;
    }

    ctx->pc = 0x14d478u;

    // 0x14d478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d480: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x14d480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x14d484: 0xc0546a6  jal         func_151A98
    ctx->pc = 0x14D484u;
    SET_GPR_U32(ctx, 31, 0x14D48Cu);
    ctx->pc = 0x14D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D484u;
    // 0x14d488: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151A98u, 0x14D484u, 0x14D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D48Cu;
label_14d48c:
    // 0x14d48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d490: 0x3e00008  jr          $ra
    ctx->pc = 0x14D490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D490u;
        // 0x14d494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D498u;
}
