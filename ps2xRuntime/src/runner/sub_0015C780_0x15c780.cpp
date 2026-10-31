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

// Function: sub_0015C780
// Address: 0x15c780 - 0x15c7a8
void sub_0015C780_0x15c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C780_0x15c780");
#endif

    switch (ctx->pc) {
        case 0x15c798u: goto label_15c798;
        default: break;
    }

    ctx->pc = 0x15c780u;

    // 0x15c780: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15c784: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15c784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15c788: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x15c788u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x15c78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c790: 0xc0517d8  jal         func_145F60
    ctx->pc = 0x15C790u;
    SET_GPR_U32(ctx, 31, 0x15C798u);
    ctx->pc = 0x15C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C790u;
    // 0x15c794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15C790u, 0x15C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C798u;
label_15c798:
    // 0x15c798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c79c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C79Cu;
        // 0x15c7a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C7A4u;
    // 0x15c7a4: 0x0  nop
    ctx->pc = 0x15c7a4u;
    // NOP
    ctx->pc = 0x15c7a8u;
}
