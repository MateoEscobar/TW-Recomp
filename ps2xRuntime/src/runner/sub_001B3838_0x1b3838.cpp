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

// Function: sub_001B3838
// Address: 0x1b3838 - 0x1b3878
void sub_001B3838_0x1b3838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3838_0x1b3838");
#endif

    switch (ctx->pc) {
        case 0x1b3860u: goto label_1b3860;
        default: break;
    }

    ctx->pc = 0x1b3838u;

    // 0x1b3838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b383c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b3840: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3848: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1b3848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b384c: 0x8e0577b8  lw          $a1, 0x77B8($s0)
    ctx->pc = 0x1b384cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30648)));
    // 0x1b3850: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3850u;
    {
        const bool branch_taken_0x1b3850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3850) {
            ctx->pc = 0x1B3854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3850u;
            // 0x1b3854: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3868u;
            goto label_1b3868;
        }
    }
    ctx->pc = 0x1B3858u;
    // 0x1b3858: 0xc06cac6  jal         func_1B2B18
    ctx->pc = 0x1B3858u;
    SET_GPR_U32(ctx, 31, 0x1B3860u);
    ctx->pc = 0x1B2B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B18u, 0x1B3858u, 0x1B3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3860u;
label_1b3860:
    // 0x1b3860: 0xae0077b8  sw          $zero, 0x77B8($s0)
    ctx->pc = 0x1b3860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30648), GPR_U32(ctx, 0));
    // 0x1b3864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b3868:
    // 0x1b3868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b386c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B386Cu;
        // 0x1b3870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B386Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3874u;
    // 0x1b3874: 0x0  nop
    ctx->pc = 0x1b3874u;
    // NOP
    ctx->pc = 0x1b3878u;
}
