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

// Function: sub_002BB648
// Address: 0x2bb648 - 0x2bb668
void sub_002BB648_0x2bb648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB648_0x2bb648");
#endif

    ctx->pc = 0x2bb648u;

    // 0x2bb648: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bb648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb64c: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x2bb64cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2bb650: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x2bb650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x2bb654: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2bb654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb658: 0x90820015  lbu         $v0, 0x15($a0)
    ctx->pc = 0x2bb658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x2bb65c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB65Cu;
        // 0x2bb660: 0xa0a20265  sb          $v0, 0x265($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 613), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB664u;
    // 0x2bb664: 0x0  nop
    ctx->pc = 0x2bb664u;
    // NOP
    ctx->pc = 0x2bb668u;
}
