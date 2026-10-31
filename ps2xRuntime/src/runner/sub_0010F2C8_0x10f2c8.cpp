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

// Function: sub_0010F2C8
// Address: 0x10f2c8 - 0x10f2f0
void sub_0010F2C8_0x10f2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F2C8_0x10f2c8");
#endif

    ctx->pc = 0x10f2c8u;

    // 0x10f2c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f2cc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f2d0: 0x8c468670  lw          $a2, -0x7990($v0)
    ctx->pc = 0x10f2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x598670u));
    // 0x10f2d4: 0x90a4000f  lbu         $a0, 0xF($a1)
    ctx->pc = 0x10f2d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x10f2d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10f2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10f2e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x10f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10f2e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x10f2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x10f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2E8u;
        // 0x10f2ec: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F2F0u;
}
