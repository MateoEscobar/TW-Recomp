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

// Function: sub_003868D0
// Address: 0x3868d0 - 0x3868f8
void sub_003868D0_0x3868d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003868D0_0x3868d0");
#endif

    switch (ctx->pc) {
        case 0x3868e8u: goto label_3868e8;
        default: break;
    }

    ctx->pc = 0x3868d0u;

    // 0x3868d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3868d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3868d4: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3868d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3868d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3868d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3868dc: 0x24e76860  addiu       $a3, $a3, 0x6860
    ctx->pc = 0x3868dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26720));
    // 0x3868e0: 0xc10cff6  jal         func_433FD8
    ctx->pc = 0x3868E0u;
    SET_GPR_U32(ctx, 31, 0x3868E8u);
    ctx->pc = 0x3868E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3868E0u;
    // 0x3868e4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x3868E0u, 0x3868E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3868E8u;
label_3868e8:
    // 0x3868e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3868e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3868ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3868ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3868F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868ECu;
        // 0x3868f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3868ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3868F4u;
    // 0x3868f4: 0x0  nop
    ctx->pc = 0x3868f4u;
    // NOP
    ctx->pc = 0x3868f8u;
}
