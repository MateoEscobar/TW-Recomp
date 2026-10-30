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

// Function: sub_0047D4C0
// Address: 0x47d4c0 - 0x47d4f8
void sub_0047D4C0_0x47d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D4C0_0x47d4c0");
#endif

    switch (ctx->pc) {
        case 0x47d4d0u: goto label_47d4d0;
        default: break;
    }

    ctx->pc = 0x47d4c0u;

    // 0x47d4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47d4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47d4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47d4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47d4c8: 0xc11f0d6  jal         func_47C358
    ctx->pc = 0x47D4C8u;
    SET_GPR_U32(ctx, 31, 0x47D4D0u);
    ctx->pc = 0x47C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C358u, 0x47D4C8u, 0x47D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D4D0u;
label_47d4d0:
    // 0x47d4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47d4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47d4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x47D4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D4D4u;
        // 0x47d4d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D4DCu;
    // 0x47d4dc: 0x0  nop
    ctx->pc = 0x47d4dcu;
    // NOP
    // 0x47d4e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47d4e4: 0x0  nop
    ctx->pc = 0x47d4e4u;
    // NOP
    // 0x47d4e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x47d4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47d4ec: 0x0  nop
    ctx->pc = 0x47d4ecu;
    // NOP
    // 0x47d4f0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x47d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x47d4f4: 0x0  nop
    ctx->pc = 0x47d4f4u;
    // NOP
    ctx->pc = 0x47d4f8u;
}
