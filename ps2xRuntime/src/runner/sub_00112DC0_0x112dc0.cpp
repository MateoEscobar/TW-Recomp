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

// Function: sub_00112DC0
// Address: 0x112dc0 - 0x112de0
void sub_00112DC0_0x112dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112DC0_0x112dc0");
#endif

    switch (ctx->pc) {
        case 0x112dd0u: goto label_112dd0;
        default: break;
    }

    ctx->pc = 0x112dc0u;

    // 0x112dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112dc8: 0xc043a78  jal         func_10E9E0
    ctx->pc = 0x112DC8u;
    SET_GPR_U32(ctx, 31, 0x112DD0u);
    ctx->pc = 0x112DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DC8u;
    // 0x112dcc: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E9E0u, 0x112DC8u, 0x112DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DD0u;
label_112dd0:
    // 0x112dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x112DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD4u;
        // 0x112dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112DDCu;
    // 0x112ddc: 0x0  nop
    ctx->pc = 0x112ddcu;
    // NOP
    ctx->pc = 0x112de0u;
}
