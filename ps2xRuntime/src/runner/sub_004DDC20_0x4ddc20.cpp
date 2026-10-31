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

// Function: sub_004DDC20
// Address: 0x4ddc20 - 0x4ddc38
void sub_004DDC20_0x4ddc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDC20_0x4ddc20");
#endif

    ctx->pc = 0x4ddc20u;

    // 0x4ddc20: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC20u;
        // 0x4ddc24: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDC28u;
    // 0x4ddc28: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4ddc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddc2c: 0x0  nop
    ctx->pc = 0x4ddc2cu;
    // NOP
    // 0x4ddc30: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x4ddc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4ddc34: 0x0  nop
    ctx->pc = 0x4ddc34u;
    // NOP
    ctx->pc = 0x4ddc38u;
}
