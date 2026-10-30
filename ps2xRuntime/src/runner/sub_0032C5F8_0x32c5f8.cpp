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

// Function: sub_0032C5F8
// Address: 0x32c5f8 - 0x32c628
void sub_0032C5F8_0x32c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C5F8_0x32c5f8");
#endif

    switch (ctx->pc) {
        case 0x32c608u: goto label_32c608;
        case 0x32c610u: goto label_32c610;
        case 0x32c618u: goto label_32c618;
        default: break;
    }

    ctx->pc = 0x32c5f8u;

    // 0x32c5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c5fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c600: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C600u;
    SET_GPR_U32(ctx, 31, 0x32C608u);
    ctx->pc = 0x32C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C600u;
    // 0x32c604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C600u, 0x32C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C608u;
label_32c608:
    // 0x32c608: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32C608u;
    SET_GPR_U32(ctx, 31, 0x32C610u);
    ctx->pc = 0x32C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C608u;
    // 0x32c60c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32C608u, 0x32C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C610u;
label_32c610:
    // 0x32c610: 0xc10d26e  jal         func_4349B8
    ctx->pc = 0x32C610u;
    SET_GPR_U32(ctx, 31, 0x32C618u);
    ctx->pc = 0x32C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C610u;
    // 0x32c614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4349B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349B8u, 0x32C610u, 0x32C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C618u;
label_32c618:
    // 0x32c618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c61c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32c61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c620: 0x3e00008  jr          $ra
    ctx->pc = 0x32C620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C620u;
        // 0x32c624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C628u;
}
