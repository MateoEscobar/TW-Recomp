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

// Function: sub_001D0FE8
// Address: 0x1d0fe8 - 0x1d1008
void sub_001D0FE8_0x1d0fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0FE8_0x1d0fe8");
#endif

    switch (ctx->pc) {
        case 0x1d0ff8u: goto label_1d0ff8;
        default: break;
    }

    ctx->pc = 0x1d0fe8u;

    // 0x1d0fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0ff0: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D0FF0u;
    SET_GPR_U32(ctx, 31, 0x1D0FF8u);
    ctx->pc = 0x1D0FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FF0u;
    // 0x1d0ff4: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D0FF0u, 0x1D0FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FF8u;
label_1d0ff8:
    // 0x1d0ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FFCu;
        // 0x1d1000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1004u;
    // 0x1d1004: 0x0  nop
    ctx->pc = 0x1d1004u;
    // NOP
    ctx->pc = 0x1d1008u;
}
