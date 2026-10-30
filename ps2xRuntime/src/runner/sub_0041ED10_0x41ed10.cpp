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

// Function: sub_0041ED10
// Address: 0x41ed10 - 0x41ed38
void sub_0041ED10_0x41ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041ED10_0x41ed10");
#endif

    switch (ctx->pc) {
        case 0x41ed2cu: goto label_41ed2c;
        default: break;
    }

    ctx->pc = 0x41ed10u;

    // 0x41ed10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41ed14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41ed14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ed18: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ed1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41ed1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ed20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ed20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ed24: 0xc107924  jal         func_41E490
    ctx->pc = 0x41ED24u;
    SET_GPR_U32(ctx, 31, 0x41ED2Cu);
    ctx->pc = 0x41ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED24u;
    // 0x41ed28: 0x24640480  addiu       $a0, $v1, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E490u, 0x41ED24u, 0x41ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ED2Cu;
label_41ed2c:
    // 0x41ed2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ed2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ed30: 0x3e00008  jr          $ra
    ctx->pc = 0x41ED30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED30u;
        // 0x41ed34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ED30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41ED38u;
}
