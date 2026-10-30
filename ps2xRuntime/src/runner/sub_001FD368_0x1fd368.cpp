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

// Function: sub_001FD368
// Address: 0x1fd368 - 0x1fd388
void sub_001FD368_0x1fd368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD368_0x1fd368");
#endif

    switch (ctx->pc) {
        case 0x1fd378u: goto label_1fd378;
        default: break;
    }

    ctx->pc = 0x1fd368u;

    // 0x1fd368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd370: 0xc07f16c  jal         func_1FC5B0
    ctx->pc = 0x1FD370u;
    SET_GPR_U32(ctx, 31, 0x1FD378u);
    ctx->pc = 0x1FD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD370u;
    // 0x1fd374: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5B0u, 0x1FD370u, 0x1FD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD378u;
label_1fd378:
    // 0x1fd378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd37c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD37Cu;
        // 0x1fd380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD384u;
    // 0x1fd384: 0x0  nop
    ctx->pc = 0x1fd384u;
    // NOP
    ctx->pc = 0x1fd388u;
}
