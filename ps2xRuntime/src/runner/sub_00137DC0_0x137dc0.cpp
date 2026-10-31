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

// Function: sub_00137DC0
// Address: 0x137dc0 - 0x137de8
void sub_00137DC0_0x137dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137DC0_0x137dc0");
#endif

    switch (ctx->pc) {
        case 0x137ddcu: goto label_137ddc;
        default: break;
    }

    ctx->pc = 0x137dc0u;

    // 0x137dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137dc4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x137dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x137dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137dcc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x137dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dd0: 0x24426850  addiu       $v0, $v0, 0x6850
    ctx->pc = 0x137dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26704));
    // 0x137dd4: 0xc048274  jal         func_1209D0
    ctx->pc = 0x137DD4u;
    SET_GPR_U32(ctx, 31, 0x137DDCu);
    ctx->pc = 0x137DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DD4u;
    // 0x137dd8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1209D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1209D0u, 0x137DD4u, 0x137DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DDCu;
label_137ddc:
    // 0x137ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137de0: 0x3e00008  jr          $ra
    ctx->pc = 0x137DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DE0u;
        // 0x137de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137DE8u;
}
