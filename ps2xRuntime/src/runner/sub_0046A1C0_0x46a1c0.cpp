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

// Function: sub_0046A1C0
// Address: 0x46a1c0 - 0x46a200
void sub_0046A1C0_0x46a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A1C0_0x46a1c0");
#endif

    ctx->pc = 0x46a1c0u;

    // 0x46a1c0: 0x8f8384c0  lw          $v1, -0x7B40($gp)
    ctx->pc = 0x46a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
    // 0x46a1c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46a1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a1c8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x46a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x46a1cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x46a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x46a1d0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x46a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x46a1d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x46a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x46a1d8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x46a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x46a1dc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x46a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x46a1e0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x46a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x46a1e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x46a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x46a1e8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x46a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x46a1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x46A1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A1ECu;
        // 0x46a1f0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A1F4u;
    // 0x46a1f4: 0x0  nop
    ctx->pc = 0x46a1f4u;
    // NOP
    // 0x46a1f8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x46a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x46a1fc: 0x0  nop
    ctx->pc = 0x46a1fcu;
    // NOP
    ctx->pc = 0x46a200u;
}
