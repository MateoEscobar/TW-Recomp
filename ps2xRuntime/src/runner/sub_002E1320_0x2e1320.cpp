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

// Function: sub_002E1320
// Address: 0x2e1320 - 0x2e1330
void sub_002E1320_0x2e1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1320_0x2e1320");
#endif

    ctx->pc = 0x2e1320u;

    // 0x2e1320: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1324: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2e1324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2e1328: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1328u;
        // 0x2e132c: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1330u;
}
