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

// Function: sub_001204C0
// Address: 0x1204c0 - 0x1204f0
void sub_001204C0_0x1204c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001204C0_0x1204c0");
#endif

    ctx->pc = 0x1204c0u;

    // 0x1204c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1204c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1204c4: 0x8c43b180  lw          $v1, -0x4E80($v0)
    ctx->pc = 0x1204c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B180u));
    // 0x1204c8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1204C8u;
    {
        const bool branch_taken_0x1204c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1204CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204C8u;
        // 0x1204cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204c8) {
            ctx->pc = 0x1204E4u;
            goto label_1204e4;
        }
    }
    ctx->pc = 0x1204D0u;
    // 0x1204d0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1204d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1204d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1204d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1204d8: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x1204d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
    // 0x1204dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1204dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1204e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1204e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1204e4:
    // 0x1204e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1204E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1204E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204E4u;
        // 0x1204e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1204E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1204ECu;
    // 0x1204ec: 0x0  nop
    ctx->pc = 0x1204ecu;
    // NOP
    ctx->pc = 0x1204f0u;
}
