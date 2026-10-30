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

// Function: sub_001135E0
// Address: 0x1135e0 - 0x113608
void sub_001135E0_0x1135e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001135E0_0x1135e0");
#endif

    switch (ctx->pc) {
        case 0x1135f8u: goto label_1135f8;
        default: break;
    }

    ctx->pc = 0x1135e0u;

    // 0x1135e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1135e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1135e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1135e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1135e8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1135e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1135ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1135ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1135f0: 0xc04414a  jal         func_110528
    ctx->pc = 0x1135F0u;
    SET_GPR_U32(ctx, 31, 0x1135F8u);
    ctx->pc = 0x110528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110528u, 0x1135F0u, 0x1135F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135F8u;
label_1135f8:
    // 0x1135f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1135f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1135fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1135FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135FCu;
        // 0x113600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1135FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113604u;
    // 0x113604: 0x0  nop
    ctx->pc = 0x113604u;
    // NOP
    ctx->pc = 0x113608u;
}
