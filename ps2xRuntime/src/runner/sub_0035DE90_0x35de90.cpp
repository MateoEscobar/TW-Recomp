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

// Function: sub_0035DE90
// Address: 0x35de90 - 0x35dec0
void sub_0035DE90_0x35de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DE90_0x35de90");
#endif

    switch (ctx->pc) {
        case 0x35dea4u: goto label_35dea4;
        case 0x35deacu: goto label_35deac;
        default: break;
    }

    ctx->pc = 0x35de90u;

    // 0x35de90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35de94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35de94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35de98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35de98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35de9c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35DE9Cu;
    SET_GPR_U32(ctx, 31, 0x35DEA4u);
    ctx->pc = 0x35DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE9Cu;
    // 0x35dea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35DE9Cu, 0x35DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DEA4u;
label_35dea4:
    // 0x35dea4: 0xc08e962  jal         func_23A588
    ctx->pc = 0x35DEA4u;
    SET_GPR_U32(ctx, 31, 0x35DEACu);
    ctx->pc = 0x35DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DEA4u;
    // 0x35dea8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A588u, 0x35DEA4u, 0x35DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DEACu;
label_35deac:
    // 0x35deac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35deacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35deb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35deb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35deb4: 0x3e00008  jr          $ra
    ctx->pc = 0x35DEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEB4u;
        // 0x35deb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DEBCu;
    // 0x35debc: 0x0  nop
    ctx->pc = 0x35debcu;
    // NOP
    ctx->pc = 0x35dec0u;
}
