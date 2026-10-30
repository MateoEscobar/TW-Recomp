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

// Function: sub_004301B8
// Address: 0x4301b8 - 0x4301d8
void sub_004301B8_0x4301b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004301B8_0x4301b8");
#endif

    switch (ctx->pc) {
        case 0x4301c8u: goto label_4301c8;
        default: break;
    }

    ctx->pc = 0x4301b8u;

    // 0x4301b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4301b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4301bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4301bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4301c0: 0xc10bbd2  jal         func_42EF48
    ctx->pc = 0x4301C0u;
    SET_GPR_U32(ctx, 31, 0x4301C8u);
    ctx->pc = 0x42EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF48u, 0x4301C0u, 0x4301C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4301C8u;
label_4301c8:
    // 0x4301c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4301c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4301cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4301CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4301D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4301CCu;
        // 0x4301d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4301CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4301D4u;
    // 0x4301d4: 0x0  nop
    ctx->pc = 0x4301d4u;
    // NOP
    ctx->pc = 0x4301d8u;
}
