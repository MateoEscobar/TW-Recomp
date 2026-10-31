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

// Function: sub_0040C668
// Address: 0x40c668 - 0x40c688
void sub_0040C668_0x40c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C668_0x40c668");
#endif

    switch (ctx->pc) {
        case 0x40c678u: goto label_40c678;
        default: break;
    }

    ctx->pc = 0x40c668u;

    // 0x40c668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40c668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40c66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c670: 0xc05242e  jal         func_1490B8
    ctx->pc = 0x40C670u;
    SET_GPR_U32(ctx, 31, 0x40C678u);
    ctx->pc = 0x40C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C670u;
    // 0x40c674: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B8u, 0x40C670u, 0x40C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C678u;
label_40c678:
    // 0x40c678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c67c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x40c67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x40c680: 0x3e00008  jr          $ra
    ctx->pc = 0x40C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C680u;
        // 0x40c684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C688u;
}
