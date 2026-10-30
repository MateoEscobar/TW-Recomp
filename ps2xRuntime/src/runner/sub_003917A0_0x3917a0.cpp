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

// Function: sub_003917A0
// Address: 0x3917a0 - 0x3917c8
void sub_003917A0_0x3917a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003917A0_0x3917a0");
#endif

    switch (ctx->pc) {
        case 0x3917bcu: goto label_3917bc;
        default: break;
    }

    ctx->pc = 0x3917a0u;

    // 0x3917a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3917a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3917a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3917a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3917a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3917a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3917ac: 0x24440043  addiu       $a0, $v0, 0x43
    ctx->pc = 0x3917acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 67));
    // 0x3917b0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3917b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3917b4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x3917B4u;
    SET_GPR_U32(ctx, 31, 0x3917BCu);
    ctx->pc = 0x3917B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3917B4u;
    // 0x3917b8: 0xa0400057  sb          $zero, 0x57($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 87), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x3917B4u, 0x3917BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3917BCu;
label_3917bc:
    // 0x3917bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3917bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3917c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3917C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3917C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917C0u;
        // 0x3917c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3917C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3917C8u;
}
