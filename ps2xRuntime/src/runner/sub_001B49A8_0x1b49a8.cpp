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

// Function: sub_001B49A8
// Address: 0x1b49a8 - 0x1b49d0
void sub_001B49A8_0x1b49a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B49A8_0x1b49a8");
#endif

    switch (ctx->pc) {
        case 0x1b49c0u: goto label_1b49c0;
        default: break;
    }

    ctx->pc = 0x1b49a8u;

    // 0x1b49a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b49a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b49acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b49b0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1b49b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b49b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b49b8: 0xc073954  jal         func_1CE550
    ctx->pc = 0x1B49B8u;
    SET_GPR_U32(ctx, 31, 0x1B49C0u);
    ctx->pc = 0x1B49BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49B8u;
    // 0x1b49bc: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE550u, 0x1B49B8u, 0x1B49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49C0u;
label_1b49c0:
    // 0x1b49c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b49c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b49c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B49C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49C4u;
        // 0x1b49c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B49C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B49CCu;
    // 0x1b49cc: 0x0  nop
    ctx->pc = 0x1b49ccu;
    // NOP
    ctx->pc = 0x1b49d0u;
}
