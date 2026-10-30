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

// Function: sub_003900D0
// Address: 0x3900d0 - 0x3900f0
void sub_003900D0_0x3900d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003900D0_0x3900d0");
#endif

    switch (ctx->pc) {
        case 0x3900e4u: goto label_3900e4;
        default: break;
    }

    ctx->pc = 0x3900d0u;

    // 0x3900d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3900d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3900d4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3900d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3900d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3900d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3900dc: 0xc0e4054  jal         func_390150
    ctx->pc = 0x3900DCu;
    SET_GPR_U32(ctx, 31, 0x3900E4u);
    ctx->pc = 0x3900E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3900DCu;
    // 0x3900e0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390150u, 0x3900DCu, 0x3900E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3900E4u;
label_3900e4:
    // 0x3900e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3900e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3900e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3900E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3900ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900E8u;
        // 0x3900ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3900E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3900F0u;
}
