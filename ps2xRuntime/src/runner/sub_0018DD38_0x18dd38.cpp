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

// Function: sub_0018DD38
// Address: 0x18dd38 - 0x18dd58
void sub_0018DD38_0x18dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DD38_0x18dd38");
#endif

    switch (ctx->pc) {
        case 0x18dd48u: goto label_18dd48;
        default: break;
    }

    ctx->pc = 0x18dd38u;

    // 0x18dd38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18dd3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dd40: 0xc062f96  jal         func_18BE58
    ctx->pc = 0x18DD40u;
    SET_GPR_U32(ctx, 31, 0x18DD48u);
    ctx->pc = 0x18BE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BE58u, 0x18DD40u, 0x18DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD48u;
label_18dd48:
    // 0x18dd48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD4Cu;
        // 0x18dd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DD54u;
    // 0x18dd54: 0x0  nop
    ctx->pc = 0x18dd54u;
    // NOP
    ctx->pc = 0x18dd58u;
}
