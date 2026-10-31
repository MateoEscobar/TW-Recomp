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

// Function: sub_00223A00
// Address: 0x223a00 - 0x223a20
void sub_00223A00_0x223a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223A00_0x223a00");
#endif

    switch (ctx->pc) {
        case 0x223a10u: goto label_223a10;
        default: break;
    }

    ctx->pc = 0x223a00u;

    // 0x223a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223a08: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223A08u;
    SET_GPR_U32(ctx, 31, 0x223A10u);
    ctx->pc = 0x223A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A08u;
    // 0x223a0c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223A08u, 0x223A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A10u;
label_223a10:
    // 0x223a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223a14: 0x3e00008  jr          $ra
    ctx->pc = 0x223A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A14u;
        // 0x223a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223A1Cu;
    // 0x223a1c: 0x0  nop
    ctx->pc = 0x223a1cu;
    // NOP
    ctx->pc = 0x223a20u;
}
