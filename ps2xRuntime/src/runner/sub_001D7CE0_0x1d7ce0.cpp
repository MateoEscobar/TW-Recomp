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

// Function: sub_001D7CE0
// Address: 0x1d7ce0 - 0x1d7d10
void sub_001D7CE0_0x1d7ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7CE0_0x1d7ce0");
#endif

    switch (ctx->pc) {
        case 0x1d7cf8u: goto label_1d7cf8;
        case 0x1d7d00u: goto label_1d7d00;
        default: break;
    }

    ctx->pc = 0x1d7ce0u;

    // 0x1d7ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7ce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cf0: 0xc06d20e  jal         func_1B4838
    ctx->pc = 0x1D7CF0u;
    SET_GPR_U32(ctx, 31, 0x1D7CF8u);
    ctx->pc = 0x1D7CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CF0u;
    // 0x1d7cf4: 0x8e040644  lw          $a0, 0x644($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4838u, 0x1D7CF0u, 0x1D7CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CF8u;
label_1d7cf8:
    // 0x1d7cf8: 0xc075c92  jal         func_1D7248
    ctx->pc = 0x1D7CF8u;
    SET_GPR_U32(ctx, 31, 0x1D7D00u);
    ctx->pc = 0x1D7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CF8u;
    // 0x1d7cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7248u, 0x1D7CF8u, 0x1D7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D00u;
label_1d7d00:
    // 0x1d7d00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D08u;
        // 0x1d7d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7D10u;
}
