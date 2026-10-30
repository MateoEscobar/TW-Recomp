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

// Function: sub_0046BE90
// Address: 0x46be90 - 0x46bec0
void sub_0046BE90_0x46be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BE90_0x46be90");
#endif

    ctx->pc = 0x46be90u;

    // 0x46be90: 0x8f8388cc  lw          $v1, -0x7734($gp)
    ctx->pc = 0x46be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
    // 0x46be94: 0xaf8588c8  sw          $a1, -0x7738($gp)
    ctx->pc = 0x46be94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U32(ctx, 5));
    // 0x46be98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46be98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46be9c: 0xaf8388cc  sw          $v1, -0x7734($gp)
    ctx->pc = 0x46be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936780), GPR_U32(ctx, 3));
    // 0x46bea0: 0x3e00008  jr          $ra
    ctx->pc = 0x46BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BEA0u;
        // 0x46bea4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BEA8u;
    // 0x46bea8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x46bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x46beac: 0x0  nop
    ctx->pc = 0x46beacu;
    // NOP
    // 0x46beb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46beb4: 0x0  nop
    ctx->pc = 0x46beb4u;
    // NOP
    // 0x46beb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x46beb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46bebc: 0x0  nop
    ctx->pc = 0x46bebcu;
    // NOP
    ctx->pc = 0x46bec0u;
}
