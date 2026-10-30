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

// Function: sub_004B1820
// Address: 0x4b1820 - 0x4b1848
void sub_004B1820_0x4b1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1820_0x4b1820");
#endif

    ctx->pc = 0x4b1820u;

    // 0x4b1820: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x4b1820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b1824: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B1824u;
    {
        const bool branch_taken_0x4b1824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1824) {
            ctx->pc = 0x4B1828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1824u;
            // 0x4b1828: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B182Cu;
            goto label_4b182c;
        }
    }
    ctx->pc = 0x4B182Cu;
label_4b182c:
    // 0x4b182c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x4b182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4b1830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1830u;
    {
        const bool branch_taken_0x4b1830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1830) {
            ctx->pc = 0x4B1840u;
            goto label_4b1840;
        }
    }
    ctx->pc = 0x4B1838u;
    // 0x4b1838: 0x812c2a0  j           func_4B0A80
    ctx->pc = 0x4B1838u;
    ctx->pc = 0x4B0A80u;
    sub_004B0A80_0x4b0a80(rdram, ctx, runtime); return;
    ctx->pc = 0x4B1840u;
label_4b1840:
    // 0x4b1840: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1848u;
}
