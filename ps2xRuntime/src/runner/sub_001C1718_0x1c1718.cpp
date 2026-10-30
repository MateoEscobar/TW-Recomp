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

// Function: sub_001C1718
// Address: 0x1c1718 - 0x1c1738
void sub_001C1718_0x1c1718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1718_0x1c1718");
#endif

    ctx->pc = 0x1c1718u;

    // 0x1c1718: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c171c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C171Cu;
    {
        const bool branch_taken_0x1c171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c171c) {
            ctx->pc = 0x1C1730u;
            goto label_1c1730;
        }
    }
    ctx->pc = 0x1C1724u;
    // 0x1c1724: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1c1724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1c1728: 0xa0800098  sb          $zero, 0x98($a0)
    ctx->pc = 0x1c1728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c172c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1c172cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1c1730:
    // 0x1c1730: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1738u;
}
