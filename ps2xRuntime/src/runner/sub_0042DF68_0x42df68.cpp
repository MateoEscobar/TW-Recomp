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

// Function: sub_0042DF68
// Address: 0x42df68 - 0x42df80
void sub_0042DF68_0x42df68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DF68_0x42df68");
#endif

    ctx->pc = 0x42df68u;

    // 0x42df68: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x42df68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x42df6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x42df6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42df70: 0x2463c168  addiu       $v1, $v1, -0x3E98
    ctx->pc = 0x42df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951272));
    // 0x42df74: 0x3e00008  jr          $ra
    ctx->pc = 0x42DF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DF74u;
        // 0x42df78: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42DF7Cu;
    // 0x42df7c: 0x0  nop
    ctx->pc = 0x42df7cu;
    // NOP
    ctx->pc = 0x42df80u;
}
