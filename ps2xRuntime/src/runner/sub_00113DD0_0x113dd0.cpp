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

// Function: sub_00113DD0
// Address: 0x113dd0 - 0x113df8
void sub_00113DD0_0x113dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113DD0_0x113dd0");
#endif

    switch (ctx->pc) {
        case 0x113decu: goto label_113dec;
        default: break;
    }

    ctx->pc = 0x113dd0u;

    // 0x113dd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113ddc: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113de4: 0xc044410  jal         func_111040
    ctx->pc = 0x113DE4u;
    SET_GPR_U32(ctx, 31, 0x113DECu);
    ctx->pc = 0x111040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111040u, 0x113DE4u, 0x113DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DECu;
label_113dec:
    // 0x113dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113df0: 0x3e00008  jr          $ra
    ctx->pc = 0x113DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DF0u;
        // 0x113df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113DF8u;
}
