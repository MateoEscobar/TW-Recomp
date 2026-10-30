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

// Function: sub_00151798
// Address: 0x151798 - 0x1517f0
void sub_00151798_0x151798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151798_0x151798");
#endif

    switch (ctx->pc) {
        case 0x1517a8u: goto label_1517a8;
        case 0x1517b0u: goto label_1517b0;
        case 0x1517b8u: goto label_1517b8;
        case 0x1517c0u: goto label_1517c0;
        default: break;
    }

    ctx->pc = 0x151798u;

    // 0x151798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15179c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1517a0: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1517A0u;
    SET_GPR_U32(ctx, 31, 0x1517A8u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1517A0u, 0x1517A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517A8u;
label_1517a8:
    // 0x1517a8: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1517A8u;
    SET_GPR_U32(ctx, 31, 0x1517B0u);
    ctx->pc = 0x1517ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517A8u;
    // 0x1517ac: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1517A8u, 0x1517B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517B0u;
label_1517b0:
    // 0x1517b0: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1517B0u;
    SET_GPR_U32(ctx, 31, 0x1517B8u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1517B0u, 0x1517B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517B8u;
label_1517b8:
    // 0x1517b8: 0xc05471c  jal         func_151C70
    ctx->pc = 0x1517B8u;
    SET_GPR_U32(ctx, 31, 0x1517C0u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x1517B8u, 0x1517C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517C0u;
label_1517c0:
    // 0x1517c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1517c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1517c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1517C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1517C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517C4u;
        // 0x1517c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1517C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1517CCu;
    // 0x1517cc: 0x0  nop
    ctx->pc = 0x1517ccu;
    // NOP
    // 0x1517d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1517d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1517d4: 0x0  nop
    ctx->pc = 0x1517d4u;
    // NOP
    // 0x1517d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1517dc: 0x0  nop
    ctx->pc = 0x1517dcu;
    // NOP
    // 0x1517e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1517e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1517e4: 0x0  nop
    ctx->pc = 0x1517e4u;
    // NOP
    // 0x1517e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1517e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1517ec: 0x0  nop
    ctx->pc = 0x1517ecu;
    // NOP
    ctx->pc = 0x1517f0u;
}
