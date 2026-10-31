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

// Function: sub_004B0648
// Address: 0x4b0648 - 0x4b0658
void sub_004B0648_0x4b0648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0648_0x4b0648");
#endif

    ctx->pc = 0x4b0648u;

    // 0x4b0648: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4b0648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4b064c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B064Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B064Cu;
        // 0x4b0650: 0x30420006  andi        $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B064Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0654u;
    // 0x4b0654: 0x0  nop
    ctx->pc = 0x4b0654u;
    // NOP
    ctx->pc = 0x4b0658u;
}
