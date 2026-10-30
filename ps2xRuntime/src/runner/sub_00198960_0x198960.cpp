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

// Function: sub_00198960
// Address: 0x198960 - 0x198980
void sub_00198960_0x198960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198960_0x198960");
#endif

    switch (ctx->pc) {
        case 0x198970u: goto label_198970;
        default: break;
    }

    ctx->pc = 0x198960u;

    // 0x198960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198968: 0xc1209f6  jal         func_4827D8
    ctx->pc = 0x198968u;
    SET_GPR_U32(ctx, 31, 0x198970u);
    ctx->pc = 0x19896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198968u;
    // 0x19896c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4827D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4827D8u, 0x198968u, 0x198970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198970u;
label_198970:
    // 0x198970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198974: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x198974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x198978: 0x3e00008  jr          $ra
    ctx->pc = 0x198978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198978u;
        // 0x19897c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198980u;
}
