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

// Function: sub_004E8718
// Address: 0x4e8718 - 0x4e8738
void sub_004E8718_0x4e8718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8718_0x4e8718");
#endif

    ctx->pc = 0x4e8718u;

    // 0x4e8718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e871c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E871Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E871Cu;
        // 0x4e8720: 0xac821b80  sw          $v0, 0x1B80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E871Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E8724u;
    // 0x4e8724: 0x0  nop
    ctx->pc = 0x4e8724u;
    // NOP
    // 0x4e8728: 0xac8220ac  sw          $v0, 0x20AC($a0)
    ctx->pc = 0x4e8728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8364), GPR_U32(ctx, 2));
    // 0x4e872c: 0x0  nop
    ctx->pc = 0x4e872cu;
    // NOP
    // 0x4e8730: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4e8730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4e8734: 0x0  nop
    ctx->pc = 0x4e8734u;
    // NOP
    ctx->pc = 0x4e8738u;
}
