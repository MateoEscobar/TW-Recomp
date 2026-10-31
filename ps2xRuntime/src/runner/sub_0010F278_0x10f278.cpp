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

// Function: sub_0010F278
// Address: 0x10f278 - 0x10f2a0
void sub_0010F278_0x10f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F278_0x10f278");
#endif

    ctx->pc = 0x10f278u;

    // 0x10f278: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f27c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f280: 0x8c468670  lw          $a2, -0x7990($v0)
    ctx->pc = 0x10f280u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x598670u));
    // 0x10f284: 0x90a4000f  lbu         $a0, 0xF($a1)
    ctx->pc = 0x10f284u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x10f288: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10f288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10f28c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10f290: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x10f290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10f294: 0x3e00008  jr          $ra
    ctx->pc = 0x10F294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F294u;
        // 0x10f298: 0x90620003  lbu         $v0, 0x3($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F29Cu;
    // 0x10f29c: 0x0  nop
    ctx->pc = 0x10f29cu;
    // NOP
    ctx->pc = 0x10f2a0u;
}
