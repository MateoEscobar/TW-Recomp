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

// Function: sub_004EDD20
// Address: 0x4edd20 - 0x4edd40
void sub_004EDD20_0x4edd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDD20_0x4edd20");
#endif

    switch (ctx->pc) {
        case 0x4edd34u: goto label_4edd34;
        default: break;
    }

    ctx->pc = 0x4edd20u;

    // 0x4edd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4edd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4edd24: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x4edd24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x4edd28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4edd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4edd2c: 0xc13b6ea  jal         func_4EDBA8
    ctx->pc = 0x4EDD2Cu;
    SET_GPR_U32(ctx, 31, 0x4EDD34u);
    ctx->pc = 0x4EDD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDD2Cu;
    // 0x4edd30: 0x24c6a328  addiu       $a2, $a2, -0x5CD8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDBA8u, 0x4EDD2Cu, 0x4EDD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDD34u;
label_4edd34:
    // 0x4edd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4edd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edd38: 0x3e00008  jr          $ra
    ctx->pc = 0x4EDD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDD38u;
        // 0x4edd3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EDD40u;
}
