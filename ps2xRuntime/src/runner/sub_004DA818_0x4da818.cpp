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

// Function: sub_004DA818
// Address: 0x4da818 - 0x4da838
void sub_004DA818_0x4da818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA818_0x4da818");
#endif

    ctx->pc = 0x4da818u;

    // 0x4da818: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4da818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4da81c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4da81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4da820: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4da820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4da824: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4da824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4da828: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4da828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4da82c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA82Cu;
        // 0x4da830: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA834u;
    // 0x4da834: 0x0  nop
    ctx->pc = 0x4da834u;
    // NOP
    ctx->pc = 0x4da838u;
}
