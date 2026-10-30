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

// Function: sub_001B3F78
// Address: 0x1b3f78 - 0x1b3f98
void sub_001B3F78_0x1b3f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3F78_0x1b3f78");
#endif

    switch (ctx->pc) {
        case 0x1b3f8cu: goto label_1b3f8c;
        default: break;
    }

    ctx->pc = 0x1b3f78u;

    // 0x1b3f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3f7c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b3f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3f84: 0xc06c83e  jal         func_1B20F8
    ctx->pc = 0x1B3F84u;
    SET_GPR_U32(ctx, 31, 0x1B3F8Cu);
    ctx->pc = 0x1B3F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F84u;
    // 0x1b3f88: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20F8u, 0x1B3F84u, 0x1B3F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F8Cu;
label_1b3f8c:
    // 0x1b3f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3f90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F90u;
        // 0x1b3f94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3F98u;
}
