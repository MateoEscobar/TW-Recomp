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

// Function: sub_0020DBC0
// Address: 0x20dbc0 - 0x20dbe0
void sub_0020DBC0_0x20dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DBC0_0x20dbc0");
#endif

    switch (ctx->pc) {
        case 0x20dbd4u: goto label_20dbd4;
        default: break;
    }

    ctx->pc = 0x20dbc0u;

    // 0x20dbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20dbc4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20dbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dbcc: 0xc083816  jal         func_20E058
    ctx->pc = 0x20DBCCu;
    SET_GPR_U32(ctx, 31, 0x20DBD4u);
    ctx->pc = 0x20DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DBCCu;
    // 0x20dbd0: 0xac4040f8  sw          $zero, 0x40F8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16632), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E058u, 0x20DBCCu, 0x20DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBD4u;
label_20dbd4:
    // 0x20dbd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x20DBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBD8u;
        // 0x20dbdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DBE0u;
}
