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

// Function: sub_00113608
// Address: 0x113608 - 0x113630
void sub_00113608_0x113608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113608_0x113608");
#endif

    switch (ctx->pc) {
        case 0x113624u: goto label_113624;
        default: break;
    }

    ctx->pc = 0x113608u;

    // 0x113608: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11360c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113614: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113614u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11361c: 0xc0442c6  jal         func_110B18
    ctx->pc = 0x11361Cu;
    SET_GPR_U32(ctx, 31, 0x113624u);
    ctx->pc = 0x110B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B18u, 0x11361Cu, 0x113624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113624u;
label_113624:
    // 0x113624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113628: 0x3e00008  jr          $ra
    ctx->pc = 0x113628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113628u;
        // 0x11362c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113630u;
}
