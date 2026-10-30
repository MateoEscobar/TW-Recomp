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

// Function: sub_00149EF8
// Address: 0x149ef8 - 0x149f30
void sub_00149EF8_0x149ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149EF8_0x149ef8");
#endif

    switch (ctx->pc) {
        case 0x149f10u: goto label_149f10;
        default: break;
    }

    ctx->pc = 0x149ef8u;

    // 0x149ef8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x149ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x149efc: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x149efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x149f00: 0x2442e3c0  addiu       $v0, $v0, -0x1C40
    ctx->pc = 0x149f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960064));
    // 0x149f04: 0x246399e8  addiu       $v1, $v1, -0x6618
    ctx->pc = 0x149f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941160));
    // 0x149f08: 0x244209c0  addiu       $v0, $v0, 0x9C0
    ctx->pc = 0x149f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2496));
    // 0x149f0c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x149f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_149f10:
    // 0x149f10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149f14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x149f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x149f18: 0x0  nop
    ctx->pc = 0x149f18u;
    // NOP
    // 0x149f1c: 0x0  nop
    ctx->pc = 0x149f1cu;
    // NOP
    // 0x149f20: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x149F20u;
    {
        const bool branch_taken_0x149f20 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x149F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F20u;
        // 0x149f24: 0x2442fec0  addiu       $v0, $v0, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f20) {
            ctx->pc = 0x149F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149f10;
        }
    }
    ctx->pc = 0x149F28u;
    // 0x149f28: 0x3e00008  jr          $ra
    ctx->pc = 0x149F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149F30u;
}
