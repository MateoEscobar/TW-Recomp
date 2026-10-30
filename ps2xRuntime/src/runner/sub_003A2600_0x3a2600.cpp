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

// Function: sub_003A2600
// Address: 0x3a2600 - 0x3a2628
void sub_003A2600_0x3a2600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2600_0x3a2600");
#endif

    switch (ctx->pc) {
        case 0x3a2618u: goto label_3a2618;
        default: break;
    }

    ctx->pc = 0x3a2600u;

    // 0x3a2600: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a2600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a2604: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a2608: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3a2608u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a260c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a2610: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A2610u;
    SET_GPR_U32(ctx, 31, 0x3A2618u);
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A2610u, 0x3A2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2618u;
label_3a2618:
    // 0x3a2618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a261c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A261Cu;
        // 0x3a2620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A261Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2624u;
    // 0x3a2624: 0x0  nop
    ctx->pc = 0x3a2624u;
    // NOP
    ctx->pc = 0x3a2628u;
}
