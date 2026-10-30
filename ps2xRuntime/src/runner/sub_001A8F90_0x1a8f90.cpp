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

// Function: sub_001A8F90
// Address: 0x1a8f90 - 0x1a8fb8
void sub_001A8F90_0x1a8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8F90_0x1a8f90");
#endif

    ctx->pc = 0x1a8f90u;

    // 0x1a8f90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a8f94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8F94u;
    {
        const bool branch_taken_0x1a8f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f94) {
            ctx->pc = 0x1A8FACu;
            goto label_1a8fac;
        }
    }
    ctx->pc = 0x1A8F9Cu;
    // 0x1a8f9c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a8fa0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8FA0u;
    {
        const bool branch_taken_0x1a8fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FA0u;
        // 0x1a8fa4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fa0) {
            ctx->pc = 0x1A8FACu;
            goto label_1a8fac;
        }
    }
    ctx->pc = 0x1A8FA8u;
    // 0x1a8fa8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1a8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1a8fac:
    // 0x1a8fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8FB4u;
    // 0x1a8fb4: 0x0  nop
    ctx->pc = 0x1a8fb4u;
    // NOP
    ctx->pc = 0x1a8fb8u;
}
