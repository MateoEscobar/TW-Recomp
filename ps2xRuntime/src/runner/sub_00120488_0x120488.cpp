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

// Function: sub_00120488
// Address: 0x120488 - 0x1204c0
void sub_00120488_0x120488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120488_0x120488");
#endif

    ctx->pc = 0x120488u;

    // 0x120488: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x120488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x12048c: 0x8ca4b180  lw          $a0, -0x4E80($a1)
    ctx->pc = 0x12048cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B180u));
    // 0x120490: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120490u;
    {
        const bool branch_taken_0x120490 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x120494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120490u;
        // 0x120494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120490) {
            ctx->pc = 0x1204B4u;
            goto label_1204b4;
        }
    }
    ctx->pc = 0x120498u;
    // 0x120498: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x120498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x12049c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12049cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1204a0: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x1204a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
    // 0x1204a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1204a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1204a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1204a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1204ac: 0xaca4b180  sw          $a0, -0x4E80($a1)
    ctx->pc = 0x1204acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294947200), GPR_U32(ctx, 4));
    // 0x1204b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1204b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1204b4:
    // 0x1204b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1204B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1204B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1204BCu;
    // 0x1204bc: 0x0  nop
    ctx->pc = 0x1204bcu;
    // NOP
    ctx->pc = 0x1204c0u;
}
