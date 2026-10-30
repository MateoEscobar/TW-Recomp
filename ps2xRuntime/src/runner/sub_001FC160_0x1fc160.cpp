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

// Function: sub_001FC160
// Address: 0x1fc160 - 0x1fc180
void sub_001FC160_0x1fc160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC160_0x1fc160");
#endif

    switch (ctx->pc) {
        case 0x1fc170u: goto label_1fc170;
        default: break;
    }

    ctx->pc = 0x1fc160u;

    // 0x1fc160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc168: 0xc07ef9a  jal         func_1FBE68
    ctx->pc = 0x1FC168u;
    SET_GPR_U32(ctx, 31, 0x1FC170u);
    ctx->pc = 0x1FC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC168u;
    // 0x1fc16c: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE68u, 0x1FC168u, 0x1FC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC170u;
label_1fc170:
    // 0x1fc170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc174: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC174u;
        // 0x1fc178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC17Cu;
    // 0x1fc17c: 0x0  nop
    ctx->pc = 0x1fc17cu;
    // NOP
    ctx->pc = 0x1fc180u;
}
