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

// Function: sub_001E9B88
// Address: 0x1e9b88 - 0x1e9bf0
void sub_001E9B88_0x1e9b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9B88_0x1e9b88");
#endif

    ctx->pc = 0x1e9b88u;

    // 0x1e9b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B88u;
        // 0x1e9b8c: 0x4102b  sltu        $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9B90u;
    // 0x1e9b90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e9b94: 0x0  nop
    ctx->pc = 0x1e9b94u;
    // NOP
    // 0x1e9b98: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e9b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e9b9c: 0x0  nop
    ctx->pc = 0x1e9b9cu;
    // NOP
    // 0x1e9ba0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e9ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e9ba4: 0x0  nop
    ctx->pc = 0x1e9ba4u;
    // NOP
    // 0x1e9ba8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e9ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9bac: 0x0  nop
    ctx->pc = 0x1e9bacu;
    // NOP
    // 0x1e9bb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e9bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9bb4: 0x0  nop
    ctx->pc = 0x1e9bb4u;
    // NOP
    // 0x1e9bb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e9bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e9bbc: 0x0  nop
    ctx->pc = 0x1e9bbcu;
    // NOP
    // 0x1e9bc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e9bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e9bc4: 0x0  nop
    ctx->pc = 0x1e9bc4u;
    // NOP
    // 0x1e9bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9bcc: 0x0  nop
    ctx->pc = 0x1e9bccu;
    // NOP
    // 0x1e9bd0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e9bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e9bd4: 0x0  nop
    ctx->pc = 0x1e9bd4u;
    // NOP
    // 0x1e9bd8: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x1e9bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e9bdc: 0x0  nop
    ctx->pc = 0x1e9bdcu;
    // NOP
    // 0x1e9be0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x1e9be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e9be4: 0x0  nop
    ctx->pc = 0x1e9be4u;
    // NOP
    // 0x1e9be8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e9be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9bec: 0x0  nop
    ctx->pc = 0x1e9becu;
    // NOP
    ctx->pc = 0x1e9bf0u;
}
