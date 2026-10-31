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

// Function: sub_00344300
// Address: 0x344300 - 0x344320
void sub_00344300_0x344300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344300_0x344300");
#endif

    switch (ctx->pc) {
        case 0x344314u: goto label_344314;
        default: break;
    }

    ctx->pc = 0x344300u;

    // 0x344300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344304: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x344304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34430c: 0xc0d1940  jal         func_346500
    ctx->pc = 0x34430Cu;
    SET_GPR_U32(ctx, 31, 0x344314u);
    ctx->pc = 0x344310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34430Cu;
    // 0x344310: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346500u, 0x34430Cu, 0x344314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344314u;
label_344314:
    // 0x344314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344318: 0x3e00008  jr          $ra
    ctx->pc = 0x344318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344318u;
        // 0x34431c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344320u;
}
