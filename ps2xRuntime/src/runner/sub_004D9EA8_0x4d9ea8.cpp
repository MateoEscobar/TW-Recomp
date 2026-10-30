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

// Function: sub_004D9EA8
// Address: 0x4d9ea8 - 0x4d9ec0
void sub_004D9EA8_0x4d9ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9EA8_0x4d9ea8");
#endif

    switch (ctx->pc) {
        case 0x4d9eb0u: goto label_4d9eb0;
        case 0x4d9eb4u: goto label_4d9eb4;
        default: break;
    }

    ctx->pc = 0x4d9ea8u;

    // 0x4d9ea8: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x4D9EA8u;
    SET_GPR_U32(ctx, 31, 0x4D9EB0u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x4D9EA8u, 0x4D9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9EB0u;
label_4d9eb0:
    // 0x4d9eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d9eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d9eb4:
    // 0x4d9eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d9eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9EB8u;
        // 0x4d9ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D9EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D9EC0u;
}
