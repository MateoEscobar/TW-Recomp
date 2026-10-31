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

// Function: sub_004AF710
// Address: 0x4af710 - 0x4af730
void sub_004AF710_0x4af710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF710_0x4af710");
#endif

    switch (ctx->pc) {
        case 0x4af720u: goto label_4af720;
        default: break;
    }

    ctx->pc = 0x4af710u;

    // 0x4af710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4af710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4af714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af718: 0xc12c222  jal         func_4B0888
    ctx->pc = 0x4AF718u;
    SET_GPR_U32(ctx, 31, 0x4AF720u);
    ctx->pc = 0x4B0888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0888u, 0x4AF718u, 0x4AF720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF720u;
label_4af720:
    // 0x4af720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af724: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF724u;
        // 0x4af728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF72Cu;
    // 0x4af72c: 0x0  nop
    ctx->pc = 0x4af72cu;
    // NOP
    ctx->pc = 0x4af730u;
}
