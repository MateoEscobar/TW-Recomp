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

// Function: sub_00418310
// Address: 0x418310 - 0x418330
void sub_00418310_0x418310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418310_0x418310");
#endif

    switch (ctx->pc) {
        case 0x418324u: goto label_418324;
        default: break;
    }

    ctx->pc = 0x418310u;

    // 0x418310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x418310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x418314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41831c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x41831Cu;
    SET_GPR_U32(ctx, 31, 0x418324u);
    ctx->pc = 0x418320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41831Cu;
    // 0x418320: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x41831Cu, 0x418324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418324u;
label_418324:
    // 0x418324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x418328: 0x3e00008  jr          $ra
    ctx->pc = 0x418328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418328u;
        // 0x41832c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418330u;
}
