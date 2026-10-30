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

// Function: sub_00139E20
// Address: 0x139e20 - 0x139e40
void sub_00139E20_0x139e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139E20_0x139e20");
#endif

    switch (ctx->pc) {
        case 0x139e30u: goto label_139e30;
        default: break;
    }

    ctx->pc = 0x139e20u;

    // 0x139e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139e28: 0xc047910  jal         func_11E440
    ctx->pc = 0x139E28u;
    SET_GPR_U32(ctx, 31, 0x139E30u);
    ctx->pc = 0x139E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E28u;
    // 0x139e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x139E28u, 0x139E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E30u;
label_139e30:
    // 0x139e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139e34: 0x3e00008  jr          $ra
    ctx->pc = 0x139E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E34u;
        // 0x139e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139E3Cu;
    // 0x139e3c: 0x0  nop
    ctx->pc = 0x139e3cu;
    // NOP
    ctx->pc = 0x139e40u;
}
