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

// Function: sub_004F28B0
// Address: 0x4f28b0 - 0x4f28d8
void sub_004F28B0_0x4f28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F28B0_0x4f28b0");
#endif

    ctx->pc = 0x4f28b0u;

    // 0x4f28b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F28B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F28B0u;
        // 0x4f28b4: 0x8c82130c  lw          $v0, 0x130C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4876)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F28B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F28B8u;
    // 0x4f28b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4f28b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4f28bc: 0x0  nop
    ctx->pc = 0x4f28bcu;
    // NOP
    // 0x4f28c0: 0xac8311fc  sw          $v1, 0x11FC($a0)
    ctx->pc = 0x4f28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4604), GPR_U32(ctx, 3));
    // 0x4f28c4: 0x0  nop
    ctx->pc = 0x4f28c4u;
    // NOP
    // 0x4f28c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4f28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f28cc: 0x0  nop
    ctx->pc = 0x4f28ccu;
    // NOP
    // 0x4f28d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4f28d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f28d4: 0x0  nop
    ctx->pc = 0x4f28d4u;
    // NOP
    ctx->pc = 0x4f28d8u;
}
