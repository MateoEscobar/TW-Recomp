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

// Function: sub_00168F30
// Address: 0x168f30 - 0x168f58
void sub_00168F30_0x168f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168F30_0x168f30");
#endif

    ctx->pc = 0x168f30u;

    // 0x168f30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x168f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f34: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x168f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x168f38: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168F38u;
    {
        const bool branch_taken_0x168f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x168F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F38u;
        // 0x168f3c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f38) {
            ctx->pc = 0x168F50u;
            goto label_168f50;
        }
    }
    ctx->pc = 0x168F40u;
    // 0x168f40: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x168f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x168f44: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x168f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x168f48: 0xacc5003c  sw          $a1, 0x3C($a2)
    ctx->pc = 0x168f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 5));
    // 0x168f4c: 0xacc40034  sw          $a0, 0x34($a2)
    ctx->pc = 0x168f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 4));
label_168f50:
    // 0x168f50: 0x3e00008  jr          $ra
    ctx->pc = 0x168F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168F58u;
}
