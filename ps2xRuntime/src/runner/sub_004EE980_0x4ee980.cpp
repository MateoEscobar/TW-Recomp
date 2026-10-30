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

// Function: sub_004EE980
// Address: 0x4ee980 - 0x4ee998
void sub_004EE980_0x4ee980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE980_0x4ee980");
#endif

    ctx->pc = 0x4ee980u;

    // 0x4ee980: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee984: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE984u;
        // 0x4ee988: 0x24425c10  addiu       $v0, $v0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE98Cu;
    // 0x4ee98c: 0x0  nop
    ctx->pc = 0x4ee98cu;
    // NOP
    // 0x4ee990: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4ee990u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4ee994: 0x0  nop
    ctx->pc = 0x4ee994u;
    // NOP
    ctx->pc = 0x4ee998u;
}
