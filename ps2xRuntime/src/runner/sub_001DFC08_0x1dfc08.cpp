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

// Function: sub_001DFC08
// Address: 0x1dfc08 - 0x1dfc40
void sub_001DFC08_0x1dfc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFC08_0x1dfc08");
#endif

    switch (ctx->pc) {
        case 0x1dfc18u: goto label_1dfc18;
        default: break;
    }

    ctx->pc = 0x1dfc08u;

    // 0x1dfc08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dfc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfc0c: 0x24820a48  addiu       $v0, $a0, 0xA48
    ctx->pc = 0x1dfc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2632));
    // 0x1dfc10: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1dfc14: 0x0  nop
    ctx->pc = 0x1dfc14u;
    // NOP
label_1dfc18:
    // 0x1dfc18: 0xac45fffc  sw          $a1, -0x4($v0)
    ctx->pc = 0x1dfc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 5));
    // 0x1dfc1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dfc20: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1dfc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1dfc24: 0x0  nop
    ctx->pc = 0x1dfc24u;
    // NOP
    // 0x1dfc28: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DFC28u;
    {
        const bool branch_taken_0x1dfc28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC28u;
        // 0x1dfc2c: 0x2442002c  addiu       $v0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc28) {
            ctx->pc = 0x1DFC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfc18;
        }
    }
    ctx->pc = 0x1DFC30u;
    // 0x1dfc30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dfc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dfc34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC34u;
        // 0x1dfc38: 0xac8220bc  sw          $v0, 0x20BC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC3Cu;
    // 0x1dfc3c: 0x0  nop
    ctx->pc = 0x1dfc3cu;
    // NOP
    ctx->pc = 0x1dfc40u;
}
