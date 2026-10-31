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

// Function: sub_0016A1C8
// Address: 0x16a1c8 - 0x16a1e8
void sub_0016A1C8_0x16a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A1C8_0x16a1c8");
#endif

    switch (ctx->pc) {
        case 0x16a1dcu: goto label_16a1dc;
        default: break;
    }

    ctx->pc = 0x16a1c8u;

    // 0x16a1c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a1cc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a1d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a1d4: 0xc05b37c  jal         func_16CDF0
    ctx->pc = 0x16A1D4u;
    SET_GPR_U32(ctx, 31, 0x16A1DCu);
    ctx->pc = 0x16A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1D4u;
    // 0x16a1d8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CDF0u, 0x16A1D4u, 0x16A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1DCu;
label_16a1dc:
    // 0x16a1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1E0u;
        // 0x16a1e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A1E8u;
}
