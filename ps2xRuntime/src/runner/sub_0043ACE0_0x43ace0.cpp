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

// Function: sub_0043ACE0
// Address: 0x43ace0 - 0x43ad18
void sub_0043ACE0_0x43ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043ACE0_0x43ace0");
#endif

    ctx->pc = 0x43ace0u;

    // 0x43ace0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x43ACE0u;
    {
        const bool branch_taken_0x43ace0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ACE0u;
        // 0x43ace4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ace0) {
            ctx->pc = 0x43AD0Cu;
            goto label_43ad0c;
        }
    }
    ctx->pc = 0x43ACE8u;
    // 0x43ace8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x43ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x43acec: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x43acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x43acf0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43acf4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x43acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x43acf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x43acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43acfc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x43acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x43ad00: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x43ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x43ad04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x43ad08: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x43ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_43ad0c:
    // 0x43ad0c: 0x3e00008  jr          $ra
    ctx->pc = 0x43AD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AD14u;
    // 0x43ad14: 0x0  nop
    ctx->pc = 0x43ad14u;
    // NOP
    ctx->pc = 0x43ad18u;
}
