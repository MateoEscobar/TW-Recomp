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

// Function: sub_0014D450
// Address: 0x14d450 - 0x14d478
void sub_0014D450_0x14d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D450_0x14d450");
#endif

    switch (ctx->pc) {
        case 0x14d464u: goto label_14d464;
        case 0x14d46cu: goto label_14d46c;
        default: break;
    }

    ctx->pc = 0x14d450u;

    // 0x14d450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d458: 0xac800b88  sw          $zero, 0xB88($a0)
    ctx->pc = 0x14d458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2952), GPR_U32(ctx, 0));
    // 0x14d45c: 0xc053fac  jal         func_14FEB0
    ctx->pc = 0x14D45Cu;
    SET_GPR_U32(ctx, 31, 0x14D464u);
    ctx->pc = 0x14D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D45Cu;
    // 0x14d460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FEB0u, 0x14D45Cu, 0x14D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D464u;
label_14d464:
    // 0x14d464: 0xc053fac  jal         func_14FEB0
    ctx->pc = 0x14D464u;
    SET_GPR_U32(ctx, 31, 0x14D46Cu);
    ctx->pc = 0x14D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D464u;
    // 0x14d468: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FEB0u, 0x14D464u, 0x14D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D46Cu;
label_14d46c:
    // 0x14d46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d470: 0x3e00008  jr          $ra
    ctx->pc = 0x14D470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D470u;
        // 0x14d474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D478u;
}
