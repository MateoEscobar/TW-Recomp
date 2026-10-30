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

// Function: sub_00126450
// Address: 0x126450 - 0x126488
void sub_00126450_0x126450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126450_0x126450");
#endif

    ctx->pc = 0x126450u;

    // 0x126450: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x126450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x126454: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x126454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126458: 0x8cc4b238  lw          $a0, -0x4DC8($a2)
    ctx->pc = 0x126458u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B238u));
    // 0x12645c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x12645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x126460: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x126460u;
    {
        const bool branch_taken_0x126460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x126464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126460u;
        // 0x126464: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126460) {
            ctx->pc = 0x126480u;
            goto label_126480;
        }
    }
    ctx->pc = 0x126468u;
    // 0x126468: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x126468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x12646c: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x126470: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x126470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x126474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x126474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x126478: 0xacc4b238  sw          $a0, -0x4DC8($a2)
    ctx->pc = 0x126478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294947384), GPR_U32(ctx, 4));
    // 0x12647c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12647cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_126480:
    // 0x126480: 0x3e00008  jr          $ra
    ctx->pc = 0x126480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126488u;
}
