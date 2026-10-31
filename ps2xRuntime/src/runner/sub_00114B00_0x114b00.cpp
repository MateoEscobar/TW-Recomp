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

// Function: sub_00114B00
// Address: 0x114b00 - 0x114b20
void sub_00114B00_0x114b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114B00_0x114b00");
#endif

    switch (ctx->pc) {
        case 0x114b10u: goto label_114b10;
        default: break;
    }

    ctx->pc = 0x114b00u;

    // 0x114b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114b08: 0xc0452c8  jal         func_114B20
    ctx->pc = 0x114B08u;
    SET_GPR_U32(ctx, 31, 0x114B10u);
    ctx->pc = 0x114B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B20u, 0x114B08u, 0x114B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B10u;
label_114b10:
    // 0x114b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114b14: 0x3e00008  jr          $ra
    ctx->pc = 0x114B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B14u;
        // 0x114b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114B1Cu;
    // 0x114b1c: 0x0  nop
    ctx->pc = 0x114b1cu;
    // NOP
    ctx->pc = 0x114b20u;
}
