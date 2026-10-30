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

// Function: sub_0010F2A0
// Address: 0x10f2a0 - 0x10f2c8
void sub_0010F2A0_0x10f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F2A0_0x10f2a0");
#endif

    ctx->pc = 0x10f2a0u;

    // 0x10f2a0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f2a4: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f2a8: 0x8c468670  lw          $a2, -0x7990($v0)
    ctx->pc = 0x10f2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x598670u));
    // 0x10f2ac: 0x90a4000f  lbu         $a0, 0xF($a1)
    ctx->pc = 0x10f2acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x10f2b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10f2b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10f2b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x10f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10f2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10F2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2BCu;
        // 0x10f2c0: 0x90620004  lbu         $v0, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F2C4u;
    // 0x10f2c4: 0x0  nop
    ctx->pc = 0x10f2c4u;
    // NOP
    ctx->pc = 0x10f2c8u;
}
