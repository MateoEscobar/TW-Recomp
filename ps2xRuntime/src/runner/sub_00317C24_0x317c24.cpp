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

// Function: sub_00317C24
// Address: 0x317c24 - 0x317c40
void sub_00317C24_0x317c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317C24_0x317c24");
#endif

    switch (ctx->pc) {
        case 0x317c28u: goto label_317c28;
        default: break;
    }

    ctx->pc = 0x317c24u;

    // 0x317c24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317c28:
    // 0x317c28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x317c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317c2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x317c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317c34: 0x3e00008  jr          $ra
    ctx->pc = 0x317C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C34u;
        // 0x317c38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317C3Cu;
    // 0x317c3c: 0x0  nop
    ctx->pc = 0x317c3cu;
    // NOP
    ctx->pc = 0x317c40u;
}
