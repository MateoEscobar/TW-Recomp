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

// Function: sub_0032CD10
// Address: 0x32cd10 - 0x32cd30
void sub_0032CD10_0x32cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CD10_0x32cd10");
#endif

    switch (ctx->pc) {
        case 0x32cd24u: goto label_32cd24;
        default: break;
    }

    ctx->pc = 0x32cd10u;

    // 0x32cd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32cd14: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CD14u;
    {
        const bool branch_taken_0x32cd14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD14u;
        // 0x32cd18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd14) {
            ctx->pc = 0x32CD24u;
            goto label_32cd24;
        }
    }
    ctx->pc = 0x32CD1Cu;
    // 0x32cd1c: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32CD1Cu;
    SET_GPR_U32(ctx, 31, 0x32CD24u);
    ctx->pc = 0x32CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CD1Cu;
    // 0x32cd20: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32CD1Cu, 0x32CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD24u;
label_32cd24:
    // 0x32cd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x32CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD28u;
        // 0x32cd2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CD30u;
}
