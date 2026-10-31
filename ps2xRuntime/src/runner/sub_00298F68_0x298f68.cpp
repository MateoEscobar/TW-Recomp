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

// Function: sub_00298F68
// Address: 0x298f68 - 0x298f88
void sub_00298F68_0x298f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298F68_0x298f68");
#endif

    switch (ctx->pc) {
        case 0x298f70u: goto label_298f70;
        case 0x298f74u: goto label_298f74;
        default: break;
    }

    ctx->pc = 0x298f68u;

    // 0x298f68: 0xc0a635a  jal         func_298D68
    ctx->pc = 0x298F68u;
    SET_GPR_U32(ctx, 31, 0x298F70u);
    ctx->pc = 0x298F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F68u;
    // 0x298f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298D68u, 0x298F68u, 0x298F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F70u;
label_298f70:
    // 0x298f70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x298f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_298f74:
    // 0x298f74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x298F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F7Cu;
        // 0x298f80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298F84u;
    // 0x298f84: 0x0  nop
    ctx->pc = 0x298f84u;
    // NOP
    ctx->pc = 0x298f88u;
}
