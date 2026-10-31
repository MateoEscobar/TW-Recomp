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

// Function: sub_004B3600
// Address: 0x4b3600 - 0x4b3620
void sub_004B3600_0x4b3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3600_0x4b3600");
#endif

    switch (ctx->pc) {
        case 0x4b3610u: goto label_4b3610;
        default: break;
    }

    ctx->pc = 0x4b3600u;

    // 0x4b3600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3608: 0xc12dbc4  jal         func_4B6F10
    ctx->pc = 0x4B3608u;
    SET_GPR_U32(ctx, 31, 0x4B3610u);
    ctx->pc = 0x4B6F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6F10u, 0x4B3608u, 0x4B3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3610u;
label_4b3610:
    // 0x4b3610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3614: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3614u;
        // 0x4b3618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B361Cu;
    // 0x4b361c: 0x0  nop
    ctx->pc = 0x4b361cu;
    // NOP
    ctx->pc = 0x4b3620u;
}
