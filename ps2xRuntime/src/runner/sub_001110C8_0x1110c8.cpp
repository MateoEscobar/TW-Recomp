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

// Function: sub_001110C8
// Address: 0x1110c8 - 0x1110e8
void sub_001110C8_0x1110c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001110C8_0x1110c8");
#endif

    switch (ctx->pc) {
        case 0x1110dcu: goto label_1110dc;
        default: break;
    }

    ctx->pc = 0x1110c8u;

    // 0x1110c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1110cc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1110d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1110d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1110d4: 0xc044c00  jal         func_113000
    ctx->pc = 0x1110D4u;
    SET_GPR_U32(ctx, 31, 0x1110DCu);
    ctx->pc = 0x1110D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110D4u;
    // 0x1110d8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113000u, 0x1110D4u, 0x1110DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110DCu;
label_1110dc:
    // 0x1110dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1110dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1110e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1110E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1110E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110E0u;
        // 0x1110e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1110E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1110E8u;
}
