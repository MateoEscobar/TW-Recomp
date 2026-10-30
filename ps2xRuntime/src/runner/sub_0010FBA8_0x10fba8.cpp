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

// Function: sub_0010FBA8
// Address: 0x10fba8 - 0x10fbc8
void sub_0010FBA8_0x10fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FBA8_0x10fba8");
#endif

    switch (ctx->pc) {
        case 0x10fbb8u: goto label_10fbb8;
        default: break;
    }

    ctx->pc = 0x10fba8u;

    // 0x10fba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fbb0: 0xc044aa4  jal         func_112A90
    ctx->pc = 0x10FBB0u;
    SET_GPR_U32(ctx, 31, 0x10FBB8u);
    ctx->pc = 0x112A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A90u, 0x10FBB0u, 0x10FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBB8u;
label_10fbb8:
    // 0x10fbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x10FBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBBCu;
        // 0x10fbc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FBC4u;
    // 0x10fbc4: 0x0  nop
    ctx->pc = 0x10fbc4u;
    // NOP
    ctx->pc = 0x10fbc8u;
}
