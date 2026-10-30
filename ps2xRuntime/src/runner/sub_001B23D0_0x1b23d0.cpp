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

// Function: sub_001B23D0
// Address: 0x1b23d0 - 0x1b2400
void sub_001B23D0_0x1b23d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B23D0_0x1b23d0");
#endif

    switch (ctx->pc) {
        case 0x1b23f0u: goto label_1b23f0;
        default: break;
    }

    ctx->pc = 0x1b23d0u;

    // 0x1b23d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b23d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b23d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b23d8: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B23D8u;
    {
        const bool branch_taken_0x1b23d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23D8u;
        // 0x1b23dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23d8) {
            ctx->pc = 0x1B23F0u;
            goto label_1b23f0;
        }
    }
    ctx->pc = 0x1B23E0u;
    // 0x1b23e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b23e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b23e8: 0xc08380a  jal         func_20E028
    ctx->pc = 0x1B23E8u;
    SET_GPR_U32(ctx, 31, 0x1B23F0u);
    ctx->pc = 0x1B23ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23E8u;
    // 0x1b23ec: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E028u, 0x1B23E8u, 0x1B23F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23F0u;
label_1b23f0:
    // 0x1b23f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b23f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b23f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B23F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23F4u;
        // 0x1b23f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B23F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B23FCu;
    // 0x1b23fc: 0x0  nop
    ctx->pc = 0x1b23fcu;
    // NOP
    ctx->pc = 0x1b2400u;
}
