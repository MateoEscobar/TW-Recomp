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

// Function: sub_00346DB8
// Address: 0x346db8 - 0x346de0
void sub_00346DB8_0x346db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346DB8_0x346db8");
#endif

    switch (ctx->pc) {
        case 0x346dd0u: goto label_346dd0;
        default: break;
    }

    ctx->pc = 0x346db8u;

    // 0x346db8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x346db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346dbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346dc0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x346dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346dc8: 0xc0d19a0  jal         func_346680
    ctx->pc = 0x346DC8u;
    SET_GPR_U32(ctx, 31, 0x346DD0u);
    ctx->pc = 0x346DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DC8u;
    // 0x346dcc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346680u, 0x346DC8u, 0x346DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DD0u;
label_346dd0:
    // 0x346dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x346DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DD4u;
        // 0x346dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346DDCu;
    // 0x346ddc: 0x0  nop
    ctx->pc = 0x346ddcu;
    // NOP
    ctx->pc = 0x346de0u;
}
