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

// Function: sub_001502A0
// Address: 0x1502a0 - 0x1502d8
void sub_001502A0_0x1502a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001502A0_0x1502a0");
#endif

    switch (ctx->pc) {
        case 0x1502b0u: goto label_1502b0;
        case 0x1502b8u: goto label_1502b8;
        case 0x1502c0u: goto label_1502c0;
        case 0x1502c8u: goto label_1502c8;
        default: break;
    }

    ctx->pc = 0x1502a0u;

    // 0x1502a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1502a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1502a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1502a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1502a8: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1502A8u;
    SET_GPR_U32(ctx, 31, 0x1502B0u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1502A8u, 0x1502B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502B0u;
label_1502b0:
    // 0x1502b0: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1502B0u;
    SET_GPR_U32(ctx, 31, 0x1502B8u);
    ctx->pc = 0x1502B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502B0u;
    // 0x1502b4: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1502B0u, 0x1502B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502B8u;
label_1502b8:
    // 0x1502b8: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1502B8u;
    SET_GPR_U32(ctx, 31, 0x1502C0u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1502B8u, 0x1502C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502C0u;
label_1502c0:
    // 0x1502c0: 0xc05471c  jal         func_151C70
    ctx->pc = 0x1502C0u;
    SET_GPR_U32(ctx, 31, 0x1502C8u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x1502C0u, 0x1502C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502C8u;
label_1502c8:
    // 0x1502c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1502c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1502cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1502CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1502D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502CCu;
        // 0x1502d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1502CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1502D4u;
    // 0x1502d4: 0x0  nop
    ctx->pc = 0x1502d4u;
    // NOP
    ctx->pc = 0x1502d8u;
}
