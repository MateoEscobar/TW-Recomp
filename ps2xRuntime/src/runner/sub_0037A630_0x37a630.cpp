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

// Function: sub_0037A630
// Address: 0x37a630 - 0x37a660
void sub_0037A630_0x37a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A630_0x37a630");
#endif

    switch (ctx->pc) {
        case 0x37a644u: goto label_37a644;
        case 0x37a64cu: goto label_37a64c;
        default: break;
    }

    ctx->pc = 0x37a630u;

    // 0x37a630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37a634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a63c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37A63Cu;
    SET_GPR_U32(ctx, 31, 0x37A644u);
    ctx->pc = 0x37A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A63Cu;
    // 0x37a640: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37A63Cu, 0x37A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A644u;
label_37a644:
    // 0x37a644: 0xc107634  jal         func_41D8D0
    ctx->pc = 0x37A644u;
    SET_GPR_U32(ctx, 31, 0x37A64Cu);
    ctx->pc = 0x37A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A644u;
    // 0x37a648: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D8D0u, 0x37A644u, 0x37A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A64Cu;
label_37a64c:
    // 0x37a64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a654: 0x3e00008  jr          $ra
    ctx->pc = 0x37A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A654u;
        // 0x37a658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A65Cu;
    // 0x37a65c: 0x0  nop
    ctx->pc = 0x37a65cu;
    // NOP
    ctx->pc = 0x37a660u;
}
