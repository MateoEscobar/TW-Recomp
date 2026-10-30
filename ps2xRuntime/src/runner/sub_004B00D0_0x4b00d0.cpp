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

// Function: sub_004B00D0
// Address: 0x4b00d0 - 0x4b00f0
void sub_004B00D0_0x4b00d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B00D0_0x4b00d0");
#endif

    switch (ctx->pc) {
        case 0x4b00e0u: goto label_4b00e0;
        default: break;
    }

    ctx->pc = 0x4b00d0u;

    // 0x4b00d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b00d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b00d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b00d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b00d8: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4B00D8u;
    SET_GPR_U32(ctx, 31, 0x4B00E0u);
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4B00D8u, 0x4B00E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B00E0u;
label_4b00e0:
    // 0x4b00e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b00e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b00e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B00E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B00E4u;
        // 0x4b00e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B00E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B00ECu;
    // 0x4b00ec: 0x0  nop
    ctx->pc = 0x4b00ecu;
    // NOP
    ctx->pc = 0x4b00f0u;
}
