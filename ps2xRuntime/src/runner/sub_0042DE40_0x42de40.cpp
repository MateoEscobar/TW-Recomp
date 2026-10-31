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

// Function: sub_0042DE40
// Address: 0x42de40 - 0x42de78
void sub_0042DE40_0x42de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DE40_0x42de40");
#endif

    switch (ctx->pc) {
        case 0x42de50u: goto label_42de50;
        default: break;
    }

    ctx->pc = 0x42de40u;

    // 0x42de40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42de44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42de48: 0xc10b262  jal         func_42C988
    ctx->pc = 0x42DE48u;
    SET_GPR_U32(ctx, 31, 0x42DE50u);
    ctx->pc = 0x42C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C988u, 0x42DE48u, 0x42DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DE50u;
label_42de50:
    // 0x42de50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42de54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42DE54u;
    {
        const bool branch_taken_0x42de54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DE54u;
        // 0x42de58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42de54) {
            ctx->pc = 0x42DE64u;
            goto label_42de64;
        }
    }
    ctx->pc = 0x42DE5Cu;
    // 0x42de5c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x42de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x42de60: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x42de60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_42de64:
    // 0x42de64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42de64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42de68: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x42de68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42de6c: 0x3e00008  jr          $ra
    ctx->pc = 0x42DE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DE6Cu;
        // 0x42de70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42DE74u;
    // 0x42de74: 0x0  nop
    ctx->pc = 0x42de74u;
    // NOP
    ctx->pc = 0x42de78u;
}
