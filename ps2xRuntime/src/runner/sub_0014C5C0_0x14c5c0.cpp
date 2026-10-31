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

// Function: sub_0014C5C0
// Address: 0x14c5c0 - 0x14c5e0
void sub_0014C5C0_0x14c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C5C0_0x14c5c0");
#endif

    switch (ctx->pc) {
        case 0x14c5d0u: goto label_14c5d0;
        default: break;
    }

    ctx->pc = 0x14c5c0u;

    // 0x14c5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c5c8: 0xc054052  jal         func_150148
    ctx->pc = 0x14C5C8u;
    SET_GPR_U32(ctx, 31, 0x14C5D0u);
    ctx->pc = 0x14C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5C8u;
    // 0x14c5cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150148u, 0x14C5C8u, 0x14C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5D0u;
label_14c5d0:
    // 0x14c5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x14C5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5D4u;
        // 0x14c5d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C5DCu;
    // 0x14c5dc: 0x0  nop
    ctx->pc = 0x14c5dcu;
    // NOP
    ctx->pc = 0x14c5e0u;
}
