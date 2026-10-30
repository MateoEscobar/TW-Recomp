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

// Function: sub_002FEB28
// Address: 0x2feb28 - 0x2feb48
void sub_002FEB28_0x2feb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEB28_0x2feb28");
#endif

    ctx->pc = 0x2feb28u;

    // 0x2feb28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2feb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2feb2c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2feb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2feb30: 0x8c46b734  lw          $a2, -0x48CC($v0)
    ctx->pc = 0x2feb30u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B734u));
    // 0x2feb34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2feb34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb38: 0x8cc50048  lw          $a1, 0x48($a2)
    ctx->pc = 0x2feb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2feb3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2feb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2feb40: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB40u;
        // 0x2feb44: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEB48u;
}
