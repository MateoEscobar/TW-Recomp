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

// Function: sub_004DD060
// Address: 0x4dd060 - 0x4dd078
void sub_004DD060_0x4dd060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD060_0x4dd060");
#endif

    ctx->pc = 0x4dd060u;

    // 0x4dd060: 0x3e00008  jr          $ra
    ctx->pc = 0x4DD060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD060u;
        // 0x4dd064: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD068u;
    // 0x4dd068: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x4dd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x4dd06c: 0x0  nop
    ctx->pc = 0x4dd06cu;
    // NOP
    // 0x4dd070: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4dd070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4dd074: 0x0  nop
    ctx->pc = 0x4dd074u;
    // NOP
    ctx->pc = 0x4dd078u;
}
