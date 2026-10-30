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

// Function: sub_00203FF8
// Address: 0x203ff8 - 0x204008
void sub_00203FF8_0x203ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203FF8_0x203ff8");
#endif

    ctx->pc = 0x203ff8u;

    // 0x203ff8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x203ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x203ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x203FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FFCu;
        // 0x204000: 0xac44f5b4  sw          $a0, -0xA4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964660), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204004u;
    // 0x204004: 0x0  nop
    ctx->pc = 0x204004u;
    // NOP
    ctx->pc = 0x204008u;
}
