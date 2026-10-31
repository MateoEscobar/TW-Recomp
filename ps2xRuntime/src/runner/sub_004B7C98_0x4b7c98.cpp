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

// Function: sub_004B7C98
// Address: 0x4b7c98 - 0x4b7cb0
void sub_004B7C98_0x4b7c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7C98_0x4b7c98");
#endif

    switch (ctx->pc) {
        case 0x4b7ca0u: goto label_4b7ca0;
        default: break;
    }

    ctx->pc = 0x4b7c98u;

    // 0x4b7c98: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x4B7C98u;
    SET_GPR_U32(ctx, 31, 0x4B7CA0u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x4B7C98u, 0x4B7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7CA0u;
label_4b7ca0:
    // 0x4b7ca0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b7ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7CA8u;
        // 0x4b7cac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7CB0u;
}
