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

// Function: sub_0032CD30
// Address: 0x32cd30 - 0x32cd60
void sub_0032CD30_0x32cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CD30_0x32cd30");
#endif

    switch (ctx->pc) {
        case 0x32cd4cu: goto label_32cd4c;
        default: break;
    }

    ctx->pc = 0x32cd30u;

    // 0x32cd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32cd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cd38: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32cd3c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32CD3Cu;
    {
        const bool branch_taken_0x32cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x32CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD3Cu;
        // 0x32cd40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd3c) {
            ctx->pc = 0x32CD50u;
            goto label_32cd50;
        }
    }
    ctx->pc = 0x32CD44u;
    // 0x32cd44: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32CD44u;
    SET_GPR_U32(ctx, 31, 0x32CD4Cu);
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32CD44u, 0x32CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD4Cu;
label_32cd4c:
    // 0x32cd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32cd50:
    // 0x32cd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x32CD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD54u;
        // 0x32cd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CD5Cu;
    // 0x32cd5c: 0x0  nop
    ctx->pc = 0x32cd5cu;
    // NOP
    ctx->pc = 0x32cd60u;
}
