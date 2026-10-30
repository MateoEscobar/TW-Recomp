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

// Function: sub_0032E600
// Address: 0x32e600 - 0x32e620
void sub_0032E600_0x32e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E600_0x32e600");
#endif

    switch (ctx->pc) {
        case 0x32e610u: goto label_32e610;
        default: break;
    }

    ctx->pc = 0x32e600u;

    // 0x32e600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32e608: 0xc0cb92c  jal         func_32E4B0
    ctx->pc = 0x32E608u;
    SET_GPR_U32(ctx, 31, 0x32E610u);
    ctx->pc = 0x32E60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E608u;
    // 0x32e60c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E4B0u, 0x32E608u, 0x32E610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E610u;
label_32e610:
    // 0x32e610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e614: 0x3e00008  jr          $ra
    ctx->pc = 0x32E614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E614u;
        // 0x32e618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E61Cu;
    // 0x32e61c: 0x0  nop
    ctx->pc = 0x32e61cu;
    // NOP
    ctx->pc = 0x32e620u;
}
