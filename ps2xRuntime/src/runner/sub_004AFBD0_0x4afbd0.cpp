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

// Function: sub_004AFBD0
// Address: 0x4afbd0 - 0x4afbf0
void sub_004AFBD0_0x4afbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFBD0_0x4afbd0");
#endif

    switch (ctx->pc) {
        case 0x4afbe0u: goto label_4afbe0;
        default: break;
    }

    ctx->pc = 0x4afbd0u;

    // 0x4afbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afbd8: 0xc12c54e  jal         func_4B1538
    ctx->pc = 0x4AFBD8u;
    SET_GPR_U32(ctx, 31, 0x4AFBE0u);
    ctx->pc = 0x4B1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1538u, 0x4AFBD8u, 0x4AFBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFBE0u;
label_4afbe0:
    // 0x4afbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFBE4u;
        // 0x4afbe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFBECu;
    // 0x4afbec: 0x0  nop
    ctx->pc = 0x4afbecu;
    // NOP
    ctx->pc = 0x4afbf0u;
}
