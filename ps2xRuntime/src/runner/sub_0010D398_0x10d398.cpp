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

// Function: sub_0010D398
// Address: 0x10d398 - 0x10d3c8
void sub_0010D398_0x10d398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D398_0x10d398");
#endif

    switch (ctx->pc) {
        case 0x10d3a8u: goto label_10d3a8;
        default: break;
    }

    ctx->pc = 0x10d398u;

    // 0x10d398: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d39c: 0x240301ff  addiu       $v1, $zero, 0x1FF
    ctx->pc = 0x10d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x10d3a0: 0x34429fbc  ori         $v0, $v0, 0x9FBC
    ctx->pc = 0x10d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40892);
    // 0x10d3a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10d3a8:
    // 0x10d3a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10d3ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10d3b0: 0x0  nop
    ctx->pc = 0x10d3b0u;
    // NOP
    // 0x10d3b4: 0x0  nop
    ctx->pc = 0x10d3b4u;
    // NOP
    // 0x10d3b8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10D3B8u;
    {
        const bool branch_taken_0x10d3b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3B8u;
        // 0x10d3bc: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3b8) {
            ctx->pc = 0x10D3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d3a8;
        }
    }
    ctx->pc = 0x10D3C0u;
    // 0x10d3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D3C8u;
}
