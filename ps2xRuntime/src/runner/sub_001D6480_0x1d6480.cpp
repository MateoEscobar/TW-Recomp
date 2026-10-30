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

// Function: sub_001D6480
// Address: 0x1d6480 - 0x1d64b0
void sub_001D6480_0x1d6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6480_0x1d6480");
#endif

    switch (ctx->pc) {
        case 0x1d64a0u: goto label_1d64a0;
        default: break;
    }

    ctx->pc = 0x1d6480u;

    // 0x1d6480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6484: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x1d6484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1d6488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d648c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6490: 0xac4501b8  sw          $a1, 0x1B8($v0)
    ctx->pc = 0x1d6490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 5));
    // 0x1d6494: 0xac450188  sw          $a1, 0x188($v0)
    ctx->pc = 0x1d6494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 5));
    // 0x1d6498: 0xc06ece4  jal         func_1BB390
    ctx->pc = 0x1D6498u;
    SET_GPR_U32(ctx, 31, 0x1D64A0u);
    ctx->pc = 0x1D649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6498u;
    // 0x1d649c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1D6498u, 0x1D64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64A0u;
label_1d64a0:
    // 0x1d64a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d64a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d64a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D64A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64A4u;
        // 0x1d64a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D64A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D64ACu;
    // 0x1d64ac: 0x0  nop
    ctx->pc = 0x1d64acu;
    // NOP
    ctx->pc = 0x1d64b0u;
}
