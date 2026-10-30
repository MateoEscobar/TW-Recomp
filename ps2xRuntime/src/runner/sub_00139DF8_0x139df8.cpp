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

// Function: sub_00139DF8
// Address: 0x139df8 - 0x139e20
void sub_00139DF8_0x139df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139DF8_0x139df8");
#endif

    switch (ctx->pc) {
        case 0x139e14u: goto label_139e14;
        default: break;
    }

    ctx->pc = 0x139df8u;

    // 0x139df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139dfc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x139dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x139e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139e04: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x139e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e08: 0x24426b10  addiu       $v0, $v0, 0x6B10
    ctx->pc = 0x139e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27408));
    // 0x139e0c: 0xc048274  jal         func_1209D0
    ctx->pc = 0x139E0Cu;
    SET_GPR_U32(ctx, 31, 0x139E14u);
    ctx->pc = 0x139E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E0Cu;
    // 0x139e10: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1209D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1209D0u, 0x139E0Cu, 0x139E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E14u;
label_139e14:
    // 0x139e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139e18: 0x3e00008  jr          $ra
    ctx->pc = 0x139E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E18u;
        // 0x139e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139E20u;
}
