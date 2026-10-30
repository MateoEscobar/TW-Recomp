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

// Function: sub_00150310
// Address: 0x150310 - 0x150348
void sub_00150310_0x150310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150310_0x150310");
#endif

    switch (ctx->pc) {
        case 0x150320u: goto label_150320;
        case 0x150328u: goto label_150328;
        case 0x150330u: goto label_150330;
        case 0x150338u: goto label_150338;
        default: break;
    }

    ctx->pc = 0x150310u;

    // 0x150310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150318: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150318u;
    SET_GPR_U32(ctx, 31, 0x150320u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150318u, 0x150320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150320u;
label_150320:
    // 0x150320: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150320u;
    SET_GPR_U32(ctx, 31, 0x150328u);
    ctx->pc = 0x150324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150320u;
    // 0x150324: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150320u, 0x150328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150328u;
label_150328:
    // 0x150328: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150328u;
    SET_GPR_U32(ctx, 31, 0x150330u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150328u, 0x150330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150330u;
label_150330:
    // 0x150330: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150330u;
    SET_GPR_U32(ctx, 31, 0x150338u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150330u, 0x150338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150338u;
label_150338:
    // 0x150338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15033c: 0x3e00008  jr          $ra
    ctx->pc = 0x15033Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15033Cu;
        // 0x150340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15033Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150344u;
    // 0x150344: 0x0  nop
    ctx->pc = 0x150344u;
    // NOP
    ctx->pc = 0x150348u;
}
