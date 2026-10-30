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

// Function: sub_00154130
// Address: 0x154130 - 0x154168
void sub_00154130_0x154130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154130_0x154130");
#endif

    switch (ctx->pc) {
        case 0x154154u: goto label_154154;
        default: break;
    }

    ctx->pc = 0x154130u;

    // 0x154130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15413c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154140: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x154140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x154144: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x154144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x154148: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x154148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15414c: 0xc054fd8  jal         func_153F60
    ctx->pc = 0x15414Cu;
    SET_GPR_U32(ctx, 31, 0x154154u);
    ctx->pc = 0x154150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15414Cu;
    // 0x154150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F60u, 0x15414Cu, 0x154154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154154u;
label_154154:
    // 0x154154: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x154154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15415c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15415cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154160: 0x3e00008  jr          $ra
    ctx->pc = 0x154160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154160u;
        // 0x154164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154168u;
}
