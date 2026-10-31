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

// Function: sub_003A3368
// Address: 0x3a3368 - 0x3a3398
void sub_003A3368_0x3a3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3368_0x3a3368");
#endif

    switch (ctx->pc) {
        case 0x3a3388u: goto label_3a3388;
        default: break;
    }

    ctx->pc = 0x3a3368u;

    // 0x3a3368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a336c: 0x24030408  addiu       $v1, $zero, 0x408
    ctx->pc = 0x3a336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x3a3370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a3374: 0x84a20060  lh          $v0, 0x60($a1)
    ctx->pc = 0x3a3374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x3a3378: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3a3378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a337c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3a337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a3380: 0xc0e8d2c  jal         func_3A34B0
    ctx->pc = 0x3A3380u;
    SET_GPR_U32(ctx, 31, 0x3A3388u);
    ctx->pc = 0x3A3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3380u;
    // 0x3a3384: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34B0u, 0x3A3380u, 0x3A3388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3388u;
label_3a3388:
    // 0x3a3388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a338c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A338Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A338Cu;
        // 0x3a3390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A338Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3394u;
    // 0x3a3394: 0x0  nop
    ctx->pc = 0x3a3394u;
    // NOP
    ctx->pc = 0x3a3398u;
}
