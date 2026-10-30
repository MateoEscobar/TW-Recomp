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

// Function: sub_004739B8
// Address: 0x4739b8 - 0x4739d8
void sub_004739B8_0x4739b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004739B8_0x4739b8");
#endif

    switch (ctx->pc) {
        case 0x4739ccu: goto label_4739cc;
        default: break;
    }

    ctx->pc = 0x4739b8u;

    // 0x4739b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4739b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4739bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4739bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4739c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4739c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4739c4: 0xc11b832  jal         func_46E0C8
    ctx->pc = 0x4739C4u;
    SET_GPR_U32(ctx, 31, 0x4739CCu);
    ctx->pc = 0x4739C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4739C4u;
    // 0x4739c8: 0x8ca40054  lw          $a0, 0x54($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E0C8u, 0x4739C4u, 0x4739CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4739CCu;
label_4739cc:
    // 0x4739cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4739ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4739d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4739D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4739D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4739D0u;
        // 0x4739d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4739D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4739D8u;
}
