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

// Function: sub_004F2F88
// Address: 0x4f2f88 - 0x4f2f98
void sub_004F2F88_0x4f2f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2F88_0x4f2f88");
#endif

    ctx->pc = 0x4f2f88u;

    // 0x4f2f88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4f2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2F8Cu;
        // 0x4f2f90: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2F94u;
    // 0x4f2f94: 0x0  nop
    ctx->pc = 0x4f2f94u;
    // NOP
    ctx->pc = 0x4f2f98u;
}
