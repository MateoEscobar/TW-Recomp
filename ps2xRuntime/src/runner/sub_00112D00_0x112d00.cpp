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

// Function: sub_00112D00
// Address: 0x112d00 - 0x112d20
void sub_00112D00_0x112d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112D00_0x112d00");
#endif

    switch (ctx->pc) {
        case 0x112d10u: goto label_112d10;
        default: break;
    }

    ctx->pc = 0x112d00u;

    // 0x112d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112d08: 0xc044664  jal         func_111990
    ctx->pc = 0x112D08u;
    SET_GPR_U32(ctx, 31, 0x112D10u);
    ctx->pc = 0x112D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D08u;
    // 0x112d0c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111990u, 0x112D08u, 0x112D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D10u;
label_112d10:
    // 0x112d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112d14: 0x3e00008  jr          $ra
    ctx->pc = 0x112D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D14u;
        // 0x112d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112D1Cu;
    // 0x112d1c: 0x0  nop
    ctx->pc = 0x112d1cu;
    // NOP
    ctx->pc = 0x112d20u;
}
