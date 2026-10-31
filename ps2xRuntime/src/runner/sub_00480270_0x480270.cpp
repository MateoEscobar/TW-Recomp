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

// Function: sub_00480270
// Address: 0x480270 - 0x480288
void sub_00480270_0x480270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480270_0x480270");
#endif

    ctx->pc = 0x480270u;

    // 0x480270: 0x8f838954  lw          $v1, -0x76AC($gp)
    ctx->pc = 0x480270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936916)));
    // 0x480274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x480274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x480278: 0xaf838954  sw          $v1, -0x76AC($gp)
    ctx->pc = 0x480278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936916), GPR_U32(ctx, 3));
    // 0x48027c: 0x3e00008  jr          $ra
    ctx->pc = 0x48027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48027Cu;
        // 0x480280: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480284u;
    // 0x480284: 0x0  nop
    ctx->pc = 0x480284u;
    // NOP
    ctx->pc = 0x480288u;
}
