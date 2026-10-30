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

// Function: sub_00150C60
// Address: 0x150c60 - 0x150ca8
void sub_00150C60_0x150c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150C60_0x150c60");
#endif

    switch (ctx->pc) {
        case 0x150c70u: goto label_150c70;
        case 0x150c78u: goto label_150c78;
        case 0x150c80u: goto label_150c80;
        case 0x150c88u: goto label_150c88;
        default: break;
    }

    ctx->pc = 0x150c60u;

    // 0x150c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150c68: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150C68u;
    SET_GPR_U32(ctx, 31, 0x150C70u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150C68u, 0x150C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C70u;
label_150c70:
    // 0x150c70: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150C70u;
    SET_GPR_U32(ctx, 31, 0x150C78u);
    ctx->pc = 0x150C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C70u;
    // 0x150c74: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150C70u, 0x150C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C78u;
label_150c78:
    // 0x150c78: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150C78u;
    SET_GPR_U32(ctx, 31, 0x150C80u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150C78u, 0x150C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C80u;
label_150c80:
    // 0x150c80: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150C80u;
    SET_GPR_U32(ctx, 31, 0x150C88u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150C80u, 0x150C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C88u;
label_150c88:
    // 0x150c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x150C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C8Cu;
        // 0x150c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150C94u;
    // 0x150c94: 0x0  nop
    ctx->pc = 0x150c94u;
    // NOP
    // 0x150c98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150c9c: 0x0  nop
    ctx->pc = 0x150c9cu;
    // NOP
    // 0x150ca0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150ca4: 0x0  nop
    ctx->pc = 0x150ca4u;
    // NOP
    ctx->pc = 0x150ca8u;
}
