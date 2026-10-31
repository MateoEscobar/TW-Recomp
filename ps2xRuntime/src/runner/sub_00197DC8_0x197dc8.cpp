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

// Function: sub_00197DC8
// Address: 0x197dc8 - 0x197df0
void sub_00197DC8_0x197dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197DC8_0x197dc8");
#endif

    switch (ctx->pc) {
        case 0x197ddcu: goto label_197ddc;
        default: break;
    }

    ctx->pc = 0x197dc8u;

    // 0x197dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197dcc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197DCCu;
    {
        const bool branch_taken_0x197dcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DCCu;
        // 0x197dd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197dcc) {
            ctx->pc = 0x197DDCu;
            goto label_197ddc;
        }
    }
    ctx->pc = 0x197DD4u;
    // 0x197dd4: 0xc055110  jal         func_154440
    ctx->pc = 0x197DD4u;
    SET_GPR_U32(ctx, 31, 0x197DDCu);
    ctx->pc = 0x154440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154440u, 0x197DD4u, 0x197DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DDCu;
label_197ddc:
    // 0x197ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197de4: 0x3e00008  jr          $ra
    ctx->pc = 0x197DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DE4u;
        // 0x197de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197DECu;
    // 0x197dec: 0x0  nop
    ctx->pc = 0x197decu;
    // NOP
    ctx->pc = 0x197df0u;
}
