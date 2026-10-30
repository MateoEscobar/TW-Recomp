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

// Function: sub_0042FB78
// Address: 0x42fb78 - 0x42fba0
void sub_0042FB78_0x42fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FB78_0x42fb78");
#endif

    ctx->pc = 0x42fb78u;

    // 0x42fb78: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FB78u;
    {
        const bool branch_taken_0x42fb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FB78u;
        // 0x42fb7c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fb78) {
            ctx->pc = 0x42FB94u;
            goto label_42fb94;
        }
    }
    ctx->pc = 0x42FB80u;
    // 0x42fb80: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x42fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x42fb84: 0x2442c468  addiu       $v0, $v0, -0x3B98
    ctx->pc = 0x42fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952040));
    // 0x42fb88: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42fb8c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x42fb90: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x42fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_42fb94:
    // 0x42fb94: 0x3e00008  jr          $ra
    ctx->pc = 0x42FB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FB9Cu;
    // 0x42fb9c: 0x0  nop
    ctx->pc = 0x42fb9cu;
    // NOP
    ctx->pc = 0x42fba0u;
}
