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

// Function: sub_00137DE8
// Address: 0x137de8 - 0x137e08
void sub_00137DE8_0x137de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137DE8_0x137de8");
#endif

    switch (ctx->pc) {
        case 0x137df8u: goto label_137df8;
        default: break;
    }

    ctx->pc = 0x137de8u;

    // 0x137de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137df0: 0xc047910  jal         func_11E440
    ctx->pc = 0x137DF0u;
    SET_GPR_U32(ctx, 31, 0x137DF8u);
    ctx->pc = 0x137DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DF0u;
    // 0x137df4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x137DF0u, 0x137DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DF8u;
label_137df8:
    // 0x137df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x137DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DFCu;
        // 0x137e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137E04u;
    // 0x137e04: 0x0  nop
    ctx->pc = 0x137e04u;
    // NOP
    ctx->pc = 0x137e08u;
}
