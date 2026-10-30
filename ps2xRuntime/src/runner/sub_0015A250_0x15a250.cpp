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

// Function: sub_0015A250
// Address: 0x15a250 - 0x15a270
void sub_0015A250_0x15a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A250_0x15a250");
#endif

    switch (ctx->pc) {
        case 0x15a264u: goto label_15a264;
        default: break;
    }

    ctx->pc = 0x15a250u;

    // 0x15a250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a25c: 0xc056882  jal         func_15A208
    ctx->pc = 0x15A25Cu;
    SET_GPR_U32(ctx, 31, 0x15A264u);
    ctx->pc = 0x15A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A25Cu;
    // 0x15a260: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A208u, 0x15A25Cu, 0x15A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A264u;
label_15a264:
    // 0x15a264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a268: 0x3e00008  jr          $ra
    ctx->pc = 0x15A268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A268u;
        // 0x15a26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A270u;
}
