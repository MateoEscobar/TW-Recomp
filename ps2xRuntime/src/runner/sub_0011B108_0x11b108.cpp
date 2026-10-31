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

// Function: sub_0011B108
// Address: 0x11b108 - 0x11b128
void sub_0011B108_0x11b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B108_0x11b108");
#endif

    switch (ctx->pc) {
        case 0x11b118u: goto label_11b118;
        default: break;
    }

    ctx->pc = 0x11b108u;

    // 0x11b108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b110: 0xc043bf4  jal         func_10EFD0
    ctx->pc = 0x11B110u;
    SET_GPR_U32(ctx, 31, 0x11B118u);
    ctx->pc = 0x11B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B110u;
    // 0x11b114: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFD0u, 0x11B110u, 0x11B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B118u;
label_11b118:
    // 0x11b118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b11c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B11Cu;
        // 0x11b120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B124u;
    // 0x11b124: 0x0  nop
    ctx->pc = 0x11b124u;
    // NOP
    ctx->pc = 0x11b128u;
}
