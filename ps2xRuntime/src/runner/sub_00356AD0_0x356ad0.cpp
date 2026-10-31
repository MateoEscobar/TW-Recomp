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

// Function: sub_00356AD0
// Address: 0x356ad0 - 0x356af0
void sub_00356AD0_0x356ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356AD0_0x356ad0");
#endif

    switch (ctx->pc) {
        case 0x356ae0u: goto label_356ae0;
        default: break;
    }

    ctx->pc = 0x356ad0u;

    // 0x356ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356ad8: 0xc0ca434  jal         func_3290D0
    ctx->pc = 0x356AD8u;
    SET_GPR_U32(ctx, 31, 0x356AE0u);
    ctx->pc = 0x356ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356AD8u;
    // 0x356adc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3290D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3290D0u, 0x356AD8u, 0x356AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AE0u;
label_356ae0:
    // 0x356ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x356AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356AE4u;
        // 0x356ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356AECu;
    // 0x356aec: 0x0  nop
    ctx->pc = 0x356aecu;
    // NOP
    ctx->pc = 0x356af0u;
}
