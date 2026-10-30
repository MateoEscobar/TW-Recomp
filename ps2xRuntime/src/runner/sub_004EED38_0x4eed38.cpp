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

// Function: sub_004EED38
// Address: 0x4eed38 - 0x4eed58
void sub_004EED38_0x4eed38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EED38_0x4eed38");
#endif

    ctx->pc = 0x4eed38u;

    // 0x4eed38: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eed3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EED3Cu;
        // 0x4eed40: 0x24426ce8  addiu       $v0, $v0, 0x6CE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EED3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EED44u;
    // 0x4eed44: 0x0  nop
    ctx->pc = 0x4eed44u;
    // NOP
    // 0x4eed48: 0x0  nop
    ctx->pc = 0x4eed48u;
    // NOP
    // 0x4eed4c: 0x0  nop
    ctx->pc = 0x4eed4cu;
    // NOP
    // 0x4eed50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4eed50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4eed54: 0x0  nop
    ctx->pc = 0x4eed54u;
    // NOP
    ctx->pc = 0x4eed58u;
}
