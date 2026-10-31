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

// Function: sub_0037A600
// Address: 0x37a600 - 0x37a630
void sub_0037A600_0x37a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A600_0x37a600");
#endif

    switch (ctx->pc) {
        case 0x37a614u: goto label_37a614;
        case 0x37a61cu: goto label_37a61c;
        default: break;
    }

    ctx->pc = 0x37a600u;

    // 0x37a600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37a604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a60c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37A60Cu;
    SET_GPR_U32(ctx, 31, 0x37A614u);
    ctx->pc = 0x37A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A60Cu;
    // 0x37a610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37A60Cu, 0x37A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A614u;
label_37a614:
    // 0x37a614: 0xc106daa  jal         func_41B6A8
    ctx->pc = 0x37A614u;
    SET_GPR_U32(ctx, 31, 0x37A61Cu);
    ctx->pc = 0x37A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A614u;
    // 0x37a618: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B6A8u, 0x37A614u, 0x37A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A61Cu;
label_37a61c:
    // 0x37a61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a624: 0x3e00008  jr          $ra
    ctx->pc = 0x37A624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A624u;
        // 0x37a628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A62Cu;
    // 0x37a62c: 0x0  nop
    ctx->pc = 0x37a62cu;
    // NOP
    ctx->pc = 0x37a630u;
}
