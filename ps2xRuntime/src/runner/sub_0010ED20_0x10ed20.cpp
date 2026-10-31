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

// Function: sub_0010ED20
// Address: 0x10ed20 - 0x10ed40
void sub_0010ED20_0x10ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ED20_0x10ed20");
#endif

    switch (ctx->pc) {
        case 0x10ed30u: goto label_10ed30;
        default: break;
    }

    ctx->pc = 0x10ed20u;

    // 0x10ed20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ed24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ed28: 0xc043ba4  jal         func_10EE90
    ctx->pc = 0x10ED28u;
    SET_GPR_U32(ctx, 31, 0x10ED30u);
    ctx->pc = 0x10ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED28u;
    // 0x10ed2c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE90u, 0x10ED28u, 0x10ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED30u;
label_10ed30:
    // 0x10ed30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ed34: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED34u;
        // 0x10ed38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ED34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ED3Cu;
    // 0x10ed3c: 0x0  nop
    ctx->pc = 0x10ed3cu;
    // NOP
    ctx->pc = 0x10ed40u;
}
