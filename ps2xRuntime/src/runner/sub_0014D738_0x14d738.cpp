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

// Function: sub_0014D738
// Address: 0x14d738 - 0x14d758
void sub_0014D738_0x14d738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D738_0x14d738");
#endif

    switch (ctx->pc) {
        case 0x14d748u: goto label_14d748;
        default: break;
    }

    ctx->pc = 0x14d738u;

    // 0x14d738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d740: 0xc0541da  jal         func_150768
    ctx->pc = 0x14D740u;
    SET_GPR_U32(ctx, 31, 0x14D748u);
    ctx->pc = 0x14D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D740u;
    // 0x14d744: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150768u, 0x14D740u, 0x14D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D748u;
label_14d748:
    // 0x14d748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d74c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D74Cu;
        // 0x14d750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D754u;
    // 0x14d754: 0x0  nop
    ctx->pc = 0x14d754u;
    // NOP
    ctx->pc = 0x14d758u;
}
