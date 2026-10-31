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

// Function: sub_0029CE70
// Address: 0x29ce70 - 0x29ce98
void sub_0029CE70_0x29ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE70_0x29ce70");
#endif

    switch (ctx->pc) {
        case 0x29ce80u: goto label_29ce80;
        case 0x29ce88u: goto label_29ce88;
        default: break;
    }

    ctx->pc = 0x29ce70u;

    // 0x29ce70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ce74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ce78: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29CE78u;
    SET_GPR_U32(ctx, 31, 0x29CE80u);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29CE78u, 0x29CE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE80u;
label_29ce80:
    // 0x29ce80: 0xc0a7390  jal         func_29CE40
    ctx->pc = 0x29CE80u;
    SET_GPR_U32(ctx, 31, 0x29CE88u);
    ctx->pc = 0x29CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE80u;
    // 0x29ce84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE40u, 0x29CE80u, 0x29CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE88u;
label_29ce88:
    // 0x29ce88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ce8c: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE8Cu;
        // 0x29ce90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE94u;
    // 0x29ce94: 0x0  nop
    ctx->pc = 0x29ce94u;
    // NOP
    ctx->pc = 0x29ce98u;
}
