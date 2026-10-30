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

// Function: sub_002D10E0
// Address: 0x2d10e0 - 0x2d1100
void sub_002D10E0_0x2d10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D10E0_0x2d10e0");
#endif

    ctx->pc = 0x2d10e0u;

    // 0x2d10e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d10e4: 0x90850030  lbu         $a1, 0x30($a0)
    ctx->pc = 0x2d10e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d10e8: 0xac65021c  sw          $a1, 0x21C($v1)
    ctx->pc = 0x2d10e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 5));
    // 0x2d10ec: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x2d10ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2d10f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d10f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d10f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d10f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D10F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10F8u;
        // 0x2d10fc: 0xa062028d  sb          $v0, 0x28D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D10F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1100u;
}
