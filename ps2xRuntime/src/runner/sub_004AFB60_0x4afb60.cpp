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

// Function: sub_004AFB60
// Address: 0x4afb60 - 0x4afb80
void sub_004AFB60_0x4afb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFB60_0x4afb60");
#endif

    switch (ctx->pc) {
        case 0x4afb70u: goto label_4afb70;
        default: break;
    }

    ctx->pc = 0x4afb60u;

    // 0x4afb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afb68: 0xc12c51e  jal         func_4B1478
    ctx->pc = 0x4AFB68u;
    SET_GPR_U32(ctx, 31, 0x4AFB70u);
    ctx->pc = 0x4B1478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1478u, 0x4AFB68u, 0x4AFB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFB70u;
label_4afb70:
    // 0x4afb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afb74: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFB74u;
        // 0x4afb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFB7Cu;
    // 0x4afb7c: 0x0  nop
    ctx->pc = 0x4afb7cu;
    // NOP
    ctx->pc = 0x4afb80u;
}
