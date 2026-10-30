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

// Function: sub_0017D578
// Address: 0x17d578 - 0x17d598
void sub_0017D578_0x17d578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D578_0x17d578");
#endif

    switch (ctx->pc) {
        case 0x17d588u: goto label_17d588;
        default: break;
    }

    ctx->pc = 0x17d578u;

    // 0x17d578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d57c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d580: 0xc05f544  jal         func_17D510
    ctx->pc = 0x17D580u;
    SET_GPR_U32(ctx, 31, 0x17D588u);
    ctx->pc = 0x17D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D510u, 0x17D580u, 0x17D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D588u;
label_17d588:
    // 0x17d588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D58Cu;
        // 0x17d590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D594u;
    // 0x17d594: 0x0  nop
    ctx->pc = 0x17d594u;
    // NOP
    ctx->pc = 0x17d598u;
}
