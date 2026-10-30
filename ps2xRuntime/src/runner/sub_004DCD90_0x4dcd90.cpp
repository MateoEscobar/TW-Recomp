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

// Function: sub_004DCD90
// Address: 0x4dcd90 - 0x4dcda8
void sub_004DCD90_0x4dcd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCD90_0x4dcd90");
#endif

    ctx->pc = 0x4dcd90u;

    // 0x4dcd90: 0x3e00008  jr          $ra
    ctx->pc = 0x4DCD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD90u;
        // 0x4dcd94: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DCD98u;
    // 0x4dcd98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4dcd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4dcd9c: 0x0  nop
    ctx->pc = 0x4dcd9cu;
    // NOP
    // 0x4dcda0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4dcda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4dcda4: 0x0  nop
    ctx->pc = 0x4dcda4u;
    // NOP
    ctx->pc = 0x4dcda8u;
}
