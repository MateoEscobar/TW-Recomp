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

// Function: sub_00169630
// Address: 0x169630 - 0x169658
void sub_00169630_0x169630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169630_0x169630");
#endif

    ctx->pc = 0x169630u;

    // 0x169630: 0x9082060d  lbu         $v0, 0x60D($a0)
    ctx->pc = 0x169630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1549)));
    // 0x169634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169638: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x169638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16963c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x16963cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x169640: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x169640u;
    {
        const bool branch_taken_0x169640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169640u;
        // 0x169644: 0xa082060d  sb          $v0, 0x60D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1549), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169640) {
            ctx->pc = 0x169650u;
            goto label_169650;
        }
    }
    ctx->pc = 0x169648u;
    // 0x169648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16964c: 0xa082060d  sb          $v0, 0x60D($a0)
    ctx->pc = 0x16964cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1549), (uint8_t)GPR_U32(ctx, 2));
label_169650:
    // 0x169650: 0x3e00008  jr          $ra
    ctx->pc = 0x169650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169658u;
}
