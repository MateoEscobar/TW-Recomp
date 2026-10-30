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

// Function: sub_00168F08
// Address: 0x168f08 - 0x168f30
void sub_00168F08_0x168f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168F08_0x168f08");
#endif

    ctx->pc = 0x168f08u;

    // 0x168f08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x168f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f0c: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x168f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x168f10: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168F10u;
    {
        const bool branch_taken_0x168f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x168F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F10u;
        // 0x168f14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f10) {
            ctx->pc = 0x168F28u;
            goto label_168f28;
        }
    }
    ctx->pc = 0x168F18u;
    // 0x168f18: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x168f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x168f1c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x168f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x168f20: 0xacc50038  sw          $a1, 0x38($a2)
    ctx->pc = 0x168f20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 5));
    // 0x168f24: 0xacc40034  sw          $a0, 0x34($a2)
    ctx->pc = 0x168f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 4));
label_168f28:
    // 0x168f28: 0x3e00008  jr          $ra
    ctx->pc = 0x168F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168F30u;
}
