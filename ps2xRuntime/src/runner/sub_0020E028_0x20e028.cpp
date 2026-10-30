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

// Function: sub_0020E028
// Address: 0x20e028 - 0x20e058
void sub_0020E028_0x20e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E028_0x20e028");
#endif

    ctx->pc = 0x20e028u;

    // 0x20e028: 0x8c824100  lw          $v0, 0x4100($a0)
    ctx->pc = 0x20e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16640)));
    // 0x20e02c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E02Cu;
    {
        const bool branch_taken_0x20e02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e02c) {
            ctx->pc = 0x20E04Cu;
            goto label_20e04c;
        }
    }
    ctx->pc = 0x20E034u;
    // 0x20e034: 0x8c824108  lw          $v0, 0x4108($a0)
    ctx->pc = 0x20e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16648)));
    // 0x20e038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E038u;
    {
        const bool branch_taken_0x20e038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E038u;
        // 0x20e03c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e038) {
            ctx->pc = 0x20E04Cu;
            goto label_20e04c;
        }
    }
    ctx->pc = 0x20E040u;
    // 0x20e040: 0xac823454  sw          $v0, 0x3454($a0)
    ctx->pc = 0x20e040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13396), GPR_U32(ctx, 2));
    // 0x20e044: 0xac823ce8  sw          $v0, 0x3CE8($a0)
    ctx->pc = 0x20e044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15592), GPR_U32(ctx, 2));
    // 0x20e048: 0xac8240fc  sw          $v0, 0x40FC($a0)
    ctx->pc = 0x20e048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16636), GPR_U32(ctx, 2));
label_20e04c:
    // 0x20e04c: 0x3e00008  jr          $ra
    ctx->pc = 0x20E04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E054u;
    // 0x20e054: 0x0  nop
    ctx->pc = 0x20e054u;
    // NOP
    ctx->pc = 0x20e058u;
}
