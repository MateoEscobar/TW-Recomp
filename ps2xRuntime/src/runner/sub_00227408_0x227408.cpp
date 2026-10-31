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

// Function: sub_00227408
// Address: 0x227408 - 0x227428
void sub_00227408_0x227408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227408_0x227408");
#endif

    switch (ctx->pc) {
        case 0x227418u: goto label_227418;
        default: break;
    }

    ctx->pc = 0x227408u;

    // 0x227408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22740c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227410: 0xc0e4060  jal         func_390180
    ctx->pc = 0x227410u;
    SET_GPR_U32(ctx, 31, 0x227418u);
    ctx->pc = 0x227414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227410u;
    // 0x227414: 0x24840360  addiu       $a0, $a0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x227410u, 0x227418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227418u;
label_227418:
    // 0x227418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22741c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22741cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x227420: 0x3e00008  jr          $ra
    ctx->pc = 0x227420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227420u;
        // 0x227424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227428u;
}
