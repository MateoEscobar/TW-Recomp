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

// Function: sub_001CCE90
// Address: 0x1cce90 - 0x1cceb8
void sub_001CCE90_0x1cce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCE90_0x1cce90");
#endif

    switch (ctx->pc) {
        case 0x1cceacu: goto label_1cceac;
        default: break;
    }

    ctx->pc = 0x1cce90u;

    // 0x1cce90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1cce94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cce9c: 0xa0400540  sb          $zero, 0x540($v0)
    ctx->pc = 0x1cce9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1344), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccea0: 0xa0400440  sb          $zero, 0x440($v0)
    ctx->pc = 0x1ccea0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1088), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccea4: 0xc079cb0  jal         func_1E72C0
    ctx->pc = 0x1CCEA4u;
    SET_GPR_U32(ctx, 31, 0x1CCEACu);
    ctx->pc = 0x1CCEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEA4u;
    // 0x1ccea8: 0xac400558  sw          $zero, 0x558($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1368), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1CCEA4u, 0x1CCEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEACu;
label_1cceac:
    // 0x1cceac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEB0u;
        // 0x1cceb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCEB8u;
}
