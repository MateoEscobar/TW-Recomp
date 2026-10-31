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

// Function: sub_00110548
// Address: 0x110548 - 0x110570
void sub_00110548_0x110548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110548_0x110548");
#endif

    switch (ctx->pc) {
        case 0x110558u: goto label_110558;
        default: break;
    }

    ctx->pc = 0x110548u;

    // 0x110548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11054c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11054cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110550: 0xc044b94  jal         func_112E50
    ctx->pc = 0x110550u;
    SET_GPR_U32(ctx, 31, 0x110558u);
    ctx->pc = 0x112E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E50u, 0x110550u, 0x110558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110558u;
label_110558:
    // 0x110558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11055c: 0x3e00008  jr          $ra
    ctx->pc = 0x11055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11055Cu;
        // 0x110560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110564u;
    // 0x110564: 0x0  nop
    ctx->pc = 0x110564u;
    // NOP
    // 0x110568: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x110568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11056c: 0x0  nop
    ctx->pc = 0x11056cu;
    // NOP
    ctx->pc = 0x110570u;
}
