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

// Function: sub_00105740
// Address: 0x105740 - 0x105770
void sub_00105740_0x105740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105740_0x105740");
#endif

    switch (ctx->pc) {
        case 0x105760u: goto label_105760;
        default: break;
    }

    ctx->pc = 0x105740u;

    // 0x105740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105744: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x105744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10574c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10574cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105750: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x105750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x105754: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x105754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x105758: 0xc041164  jal         func_104590
    ctx->pc = 0x105758u;
    SET_GPR_U32(ctx, 31, 0x105760u);
    ctx->pc = 0x10575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105758u;
    // 0x10575c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x105758u, 0x105760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105760u;
label_105760:
    // 0x105760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105764: 0x3e00008  jr          $ra
    ctx->pc = 0x105764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105764u;
        // 0x105768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10576Cu;
    // 0x10576c: 0x0  nop
    ctx->pc = 0x10576cu;
    // NOP
    ctx->pc = 0x105770u;
}
