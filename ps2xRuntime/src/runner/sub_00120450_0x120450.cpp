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

// Function: sub_00120450
// Address: 0x120450 - 0x120488
void sub_00120450_0x120450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120450_0x120450");
#endif

    ctx->pc = 0x120450u;

    // 0x120450: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x120450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x120454: 0x8cc2b180  lw          $v0, -0x4E80($a2)
    ctx->pc = 0x120454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B180u));
    // 0x120458: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x120458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12045c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x12045cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x120460: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x120460u;
    {
        const bool branch_taken_0x120460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120460u;
        // 0x120464: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120460) {
            ctx->pc = 0x12047Cu;
            goto label_12047c;
        }
    }
    ctx->pc = 0x120468u;
    // 0x120468: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x120468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12046c: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x12046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
    // 0x120470: 0xacc5b180  sw          $a1, -0x4E80($a2)
    ctx->pc = 0x120470u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294947200), GPR_U32(ctx, 5));
    // 0x120474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120478: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x120478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_12047c:
    // 0x12047c: 0x3e00008  jr          $ra
    ctx->pc = 0x12047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120484u;
    // 0x120484: 0x0  nop
    ctx->pc = 0x120484u;
    // NOP
    ctx->pc = 0x120488u;
}
