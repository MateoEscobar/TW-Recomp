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

// Function: sub_0028AC68
// Address: 0x28ac68 - 0x28ac80
void sub_0028AC68_0x28ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AC68_0x28ac68");
#endif

    ctx->pc = 0x28ac68u;

    // 0x28ac68: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x28ac68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x28ac6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ac70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC74u;
        // 0x28ac78: 0xac850040  sw          $a1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AC7Cu;
    // 0x28ac7c: 0x0  nop
    ctx->pc = 0x28ac7cu;
    // NOP
    ctx->pc = 0x28ac80u;
}
