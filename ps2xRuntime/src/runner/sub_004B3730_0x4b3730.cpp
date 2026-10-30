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

// Function: sub_004B3730
// Address: 0x4b3730 - 0x4b3750
void sub_004B3730_0x4b3730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3730_0x4b3730");
#endif

    switch (ctx->pc) {
        case 0x4b3740u: goto label_4b3740;
        default: break;
    }

    ctx->pc = 0x4b3730u;

    // 0x4b3730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3738: 0xc12de44  jal         func_4B7910
    ctx->pc = 0x4B3738u;
    SET_GPR_U32(ctx, 31, 0x4B3740u);
    ctx->pc = 0x4B7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7910u, 0x4B3738u, 0x4B3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3740u;
label_4b3740:
    // 0x4b3740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3744: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3744u;
        // 0x4b3748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B374Cu;
    // 0x4b374c: 0x0  nop
    ctx->pc = 0x4b374cu;
    // NOP
    ctx->pc = 0x4b3750u;
}
