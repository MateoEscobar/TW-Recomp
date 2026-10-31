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

// Function: sub_00226950
// Address: 0x226950 - 0x226978
void sub_00226950_0x226950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226950_0x226950");
#endif

    switch (ctx->pc) {
        case 0x22696cu: goto label_22696c;
        default: break;
    }

    ctx->pc = 0x226950u;

    // 0x226950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226958: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x226958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x22695c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22695Cu;
    {
        const bool branch_taken_0x22695c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22695Cu;
        // 0x226960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22695c) {
            ctx->pc = 0x22696Cu;
            goto label_22696c;
        }
    }
    ctx->pc = 0x226964u;
    // 0x226964: 0xc0e409a  jal         func_390268
    ctx->pc = 0x226964u;
    SET_GPR_U32(ctx, 31, 0x22696Cu);
    ctx->pc = 0x226968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226964u;
    // 0x226968: 0x248400c8  addiu       $a0, $a0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x226964u, 0x22696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22696Cu;
label_22696c:
    // 0x22696c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226970: 0x3e00008  jr          $ra
    ctx->pc = 0x226970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226970u;
        // 0x226974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226978u;
}
