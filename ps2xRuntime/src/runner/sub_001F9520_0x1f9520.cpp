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

// Function: sub_001F9520
// Address: 0x1f9520 - 0x1f9558
void sub_001F9520_0x1f9520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9520_0x1f9520");
#endif

    switch (ctx->pc) {
        case 0x1f9544u: goto label_1f9544;
        default: break;
    }

    ctx->pc = 0x1f9520u;

    // 0x1f9520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9524: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f9524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1f9528: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f9528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f952c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f952cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1f9530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9538: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1f9538u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1f953c: 0xc04402c  jal         func_1100B0
    ctx->pc = 0x1F953Cu;
    SET_GPR_U32(ctx, 31, 0x1F9544u);
    ctx->pc = 0x1F9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F953Cu;
    // 0x1f9540: 0x24a57ab0  addiu       $a1, $a1, 0x7AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100B0u, 0x1F953Cu, 0x1F9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9544u;
label_1f9544:
    // 0x1f9544: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x1f9544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x1f9548: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f9548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f954c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f954cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9550: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9550u;
        // 0x1f9554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9558u;
}
