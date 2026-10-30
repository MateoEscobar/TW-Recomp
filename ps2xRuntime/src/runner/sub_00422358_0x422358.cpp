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

// Function: sub_00422358
// Address: 0x422358 - 0x422380
void sub_00422358_0x422358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422358_0x422358");
#endif

    switch (ctx->pc) {
        case 0x422370u: goto label_422370;
        default: break;
    }

    ctx->pc = 0x422358u;

    // 0x422358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x422358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42235c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x42235cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x422364: 0xac850118  sw          $a1, 0x118($a0)
    ctx->pc = 0x422364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 5));
    // 0x422368: 0xc1086b4  jal         func_421AD0
    ctx->pc = 0x422368u;
    SET_GPR_U32(ctx, 31, 0x422370u);
    ctx->pc = 0x42236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422368u;
    // 0x42236c: 0x8c850110  lw          $a1, 0x110($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421AD0u, 0x422368u, 0x422370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422370u;
label_422370:
    // 0x422370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x422374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x422378: 0x3e00008  jr          $ra
    ctx->pc = 0x422378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422378u;
        // 0x42237c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422380u;
}
