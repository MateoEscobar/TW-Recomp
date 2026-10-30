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

// Function: sub_0042C880
// Address: 0x42c880 - 0x42c898
void sub_0042C880_0x42c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C880_0x42c880");
#endif

    switch (ctx->pc) {
        case 0x42c888u: goto label_42c888;
        case 0x42c88cu: goto label_42c88c;
        default: break;
    }

    ctx->pc = 0x42c880u;

    // 0x42c880: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x42C880u;
    SET_GPR_U32(ctx, 31, 0x42C888u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x42C880u, 0x42C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C888u;
label_42c888:
    // 0x42c888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42c888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42c88c:
    // 0x42c88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42c88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42c890: 0x3e00008  jr          $ra
    ctx->pc = 0x42C890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C890u;
        // 0x42c894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C898u;
}
