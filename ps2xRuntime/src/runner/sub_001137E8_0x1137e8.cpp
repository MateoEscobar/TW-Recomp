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

// Function: sub_001137E8
// Address: 0x1137e8 - 0x113810
void sub_001137E8_0x1137e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001137E8_0x1137e8");
#endif

    switch (ctx->pc) {
        case 0x113804u: goto label_113804;
        default: break;
    }

    ctx->pc = 0x1137e8u;

    // 0x1137e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1137e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1137ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1137f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1137f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1137f4: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1137f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1137f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1137f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1137fc: 0xc0440c6  jal         func_110318
    ctx->pc = 0x1137FCu;
    SET_GPR_U32(ctx, 31, 0x113804u);
    ctx->pc = 0x113800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137FCu;
    // 0x113800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1137FCu, 0x113804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113804u;
label_113804:
    // 0x113804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113808: 0x3e00008  jr          $ra
    ctx->pc = 0x113808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113808u;
        // 0x11380c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113810u;
}
