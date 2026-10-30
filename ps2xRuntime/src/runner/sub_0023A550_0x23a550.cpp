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

// Function: sub_0023A550
// Address: 0x23a550 - 0x23a560
void sub_0023A550_0x23a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A550_0x23a550");
#endif

    ctx->pc = 0x23a550u;

    // 0x23a550: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x23a550u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x23a554: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a558: 0x3e00008  jr          $ra
    ctx->pc = 0x23A558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A558u;
        // 0x23a55c: 0xac4402b4  sw          $a0, 0x2B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A560u;
}
