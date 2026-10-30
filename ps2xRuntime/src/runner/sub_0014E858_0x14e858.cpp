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

// Function: sub_0014E858
// Address: 0x14e858 - 0x14e890
void sub_0014E858_0x14e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E858_0x14e858");
#endif

    switch (ctx->pc) {
        case 0x14e868u: goto label_14e868;
        case 0x14e870u: goto label_14e870;
        case 0x14e878u: goto label_14e878;
        case 0x14e880u: goto label_14e880;
        default: break;
    }

    ctx->pc = 0x14e858u;

    // 0x14e858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e860: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E860u;
    SET_GPR_U32(ctx, 31, 0x14E868u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E860u, 0x14E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E868u;
label_14e868:
    // 0x14e868: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E868u;
    SET_GPR_U32(ctx, 31, 0x14E870u);
    ctx->pc = 0x14E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E868u;
    // 0x14e86c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E868u, 0x14E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E870u;
label_14e870:
    // 0x14e870: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E870u;
    SET_GPR_U32(ctx, 31, 0x14E878u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E870u, 0x14E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E878u;
label_14e878:
    // 0x14e878: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E878u;
    SET_GPR_U32(ctx, 31, 0x14E880u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E878u, 0x14E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E880u;
label_14e880:
    // 0x14e880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e884: 0x3e00008  jr          $ra
    ctx->pc = 0x14E884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E884u;
        // 0x14e888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E88Cu;
    // 0x14e88c: 0x0  nop
    ctx->pc = 0x14e88cu;
    // NOP
    ctx->pc = 0x14e890u;
}
