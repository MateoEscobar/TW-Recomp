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

// Function: sub_0041B2C8
// Address: 0x41b2c8 - 0x41b2f8
void sub_0041B2C8_0x41b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B2C8_0x41b2c8");
#endif

    switch (ctx->pc) {
        case 0x41b2e0u: goto label_41b2e0;
        default: break;
    }

    ctx->pc = 0x41b2c8u;

    // 0x41b2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41b2cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41B2CCu;
    {
        const bool branch_taken_0x41b2cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2CCu;
        // 0x41b2d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b2cc) {
            ctx->pc = 0x41B2E8u;
            goto label_41b2e8;
        }
    }
    ctx->pc = 0x41B2D4u;
    // 0x41b2d4: 0x248403c4  addiu       $a0, $a0, 0x3C4
    ctx->pc = 0x41b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 964));
    // 0x41b2d8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41B2D8u;
    SET_GPR_U32(ctx, 31, 0x41B2E0u);
    ctx->pc = 0x41B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B2D8u;
    // 0x41b2dc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41B2D8u, 0x41B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B2E0u;
label_41b2e0:
    // 0x41b2e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41B2E0u;
    {
        const bool branch_taken_0x41b2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2E0u;
        // 0x41b2e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b2e0) {
            ctx->pc = 0x41B2F0u;
            goto label_41b2f0;
        }
    }
    ctx->pc = 0x41B2E8u;
label_41b2e8:
    // 0x41b2e8: 0xa08003c4  sb          $zero, 0x3C4($a0)
    ctx->pc = 0x41b2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 964), (uint8_t)GPR_U32(ctx, 0));
    // 0x41b2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41b2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41b2f0:
    // 0x41b2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x41B2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2F0u;
        // 0x41b2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B2F8u;
}
