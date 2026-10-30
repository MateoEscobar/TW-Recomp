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

// Function: sub_00397A20
// Address: 0x397a20 - 0x397a48
void sub_00397A20_0x397a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397A20_0x397a20");
#endif

    ctx->pc = 0x397a20u;

    // 0x397a20: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x397a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x397a24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x397a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x397a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x397a2c: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x397a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x397a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x397a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x397a34: 0xa63004  sllv        $a2, $a2, $a1
    ctx->pc = 0x397a34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x397a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x397a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x397a3c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x397a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x397a40: 0x3e00008  jr          $ra
    ctx->pc = 0x397A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A40u;
        // 0x397a44: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397A48u;
}
