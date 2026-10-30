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

// Function: sub_0014D0C8
// Address: 0x14d0c8 - 0x14d0e8
void sub_0014D0C8_0x14d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D0C8_0x14d0c8");
#endif

    switch (ctx->pc) {
        case 0x14d0dcu: goto label_14d0dc;
        default: break;
    }

    ctx->pc = 0x14d0c8u;

    // 0x14d0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d0cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d0d4: 0xc053e4e  jal         func_14F938
    ctx->pc = 0x14D0D4u;
    SET_GPR_U32(ctx, 31, 0x14D0DCu);
    ctx->pc = 0x14D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0D4u;
    // 0x14d0d8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F938u, 0x14D0D4u, 0x14D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D0DCu;
label_14d0dc:
    // 0x14d0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0E0u;
        // 0x14d0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D0E8u;
}
