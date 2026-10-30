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

// Function: sub_00315890
// Address: 0x315890 - 0x3158b0
void sub_00315890_0x315890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315890_0x315890");
#endif

    switch (ctx->pc) {
        case 0x3158a0u: goto label_3158a0;
        default: break;
    }

    ctx->pc = 0x315890u;

    // 0x315890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x315890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x315894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x315898: 0xc0c55b0  jal         func_3156C0
    ctx->pc = 0x315898u;
    SET_GPR_U32(ctx, 31, 0x3158A0u);
    ctx->pc = 0x3156C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3156C0u, 0x315898u, 0x3158A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158A0u;
label_3158a0:
    // 0x3158a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3158a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3158a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3158A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3158A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158A4u;
        // 0x3158a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3158A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3158ACu;
    // 0x3158ac: 0x0  nop
    ctx->pc = 0x3158acu;
    // NOP
    ctx->pc = 0x3158b0u;
}
