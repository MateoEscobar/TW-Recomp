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

// Function: sub_00489268
// Address: 0x489268 - 0x489298
void sub_00489268_0x489268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489268_0x489268");
#endif

    ctx->pc = 0x489268u;

    // 0x489268: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x489268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48926c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x48926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x489270: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x489270u;
    {
        const bool branch_taken_0x489270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489270) {
            ctx->pc = 0x489290u;
            goto label_489290;
        }
    }
    ctx->pc = 0x489278u;
    // 0x489278: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x489278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x48927c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x48927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x489280: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x489280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x489284: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x489284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x489288: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x489288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x48928c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x48928cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_489290:
    // 0x489290: 0x3e00008  jr          $ra
    ctx->pc = 0x489290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489298u;
}
