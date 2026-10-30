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

// Function: sub_001B38D8
// Address: 0x1b38d8 - 0x1b38f8
void sub_001B38D8_0x1b38d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B38D8_0x1b38d8");
#endif

    switch (ctx->pc) {
        case 0x1b38ecu: goto label_1b38ec;
        default: break;
    }

    ctx->pc = 0x1b38d8u;

    // 0x1b38d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b38dc: 0x3402ea30  ori         $v0, $zero, 0xEA30
    ctx->pc = 0x1b38dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59952);
    // 0x1b38e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b38e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b38e4: 0xc06a520  jal         func_1A9480
    ctx->pc = 0x1B38E4u;
    SET_GPR_U32(ctx, 31, 0x1B38ECu);
    ctx->pc = 0x1B38E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38E4u;
    // 0x1b38e8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9480u, 0x1B38E4u, 0x1B38ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38ECu;
label_1b38ec:
    // 0x1b38ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b38ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B38F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38F0u;
        // 0x1b38f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B38F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B38F8u;
}
