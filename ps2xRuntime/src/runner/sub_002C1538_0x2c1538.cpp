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

// Function: sub_002C1538
// Address: 0x2c1538 - 0x2c1558
void sub_002C1538_0x2c1538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1538_0x2c1538");
#endif

    switch (ctx->pc) {
        case 0x2c1548u: goto label_2c1548;
        default: break;
    }

    ctx->pc = 0x2c1538u;

    // 0x2c1538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c153c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1540: 0xc0b05f0  jal         func_2C17C0
    ctx->pc = 0x2C1540u;
    SET_GPR_U32(ctx, 31, 0x2C1548u);
    ctx->pc = 0x2C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C17C0u, 0x2C1540u, 0x2C1548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1548u;
label_2c1548:
    // 0x2c1548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c154c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C154Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C154Cu;
        // 0x2c1550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C154Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1554u;
    // 0x2c1554: 0x0  nop
    ctx->pc = 0x2c1554u;
    // NOP
    ctx->pc = 0x2c1558u;
}
