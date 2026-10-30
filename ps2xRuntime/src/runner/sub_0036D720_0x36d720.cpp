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

// Function: sub_0036D720
// Address: 0x36d720 - 0x36d750
void sub_0036D720_0x36d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D720_0x36d720");
#endif

    switch (ctx->pc) {
        case 0x36d734u: goto label_36d734;
        case 0x36d73cu: goto label_36d73c;
        default: break;
    }

    ctx->pc = 0x36d720u;

    // 0x36d720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d72c: 0xc102488  jal         func_409220
    ctx->pc = 0x36D72Cu;
    SET_GPR_U32(ctx, 31, 0x36D734u);
    ctx->pc = 0x36D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D72Cu;
    // 0x36d730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D72Cu, 0x36D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D734u;
label_36d734:
    // 0x36d734: 0xc0e18e8  jal         func_3863A0
    ctx->pc = 0x36D734u;
    SET_GPR_U32(ctx, 31, 0x36D73Cu);
    ctx->pc = 0x36D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D734u;
    // 0x36d738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3863A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3863A0u, 0x36D734u, 0x36D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D73Cu;
label_36d73c:
    // 0x36d73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d744: 0x3e00008  jr          $ra
    ctx->pc = 0x36D744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D744u;
        // 0x36d748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D74Cu;
    // 0x36d74c: 0x0  nop
    ctx->pc = 0x36d74cu;
    // NOP
    ctx->pc = 0x36d750u;
}
