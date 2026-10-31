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

// Function: sub_0043D760
// Address: 0x43d760 - 0x43d788
void sub_0043D760_0x43d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D760_0x43d760");
#endif

    switch (ctx->pc) {
        case 0x43d770u: goto label_43d770;
        default: break;
    }

    ctx->pc = 0x43d760u;

    // 0x43d760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x43d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43d764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43d768: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x43D768u;
    SET_GPR_U32(ctx, 31, 0x43D770u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x43D768u, 0x43D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D770u;
label_43d770:
    // 0x43d770: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x43d770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x43d774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43d774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43d778: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x43d778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x43d77c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43d780: 0x3e00008  jr          $ra
    ctx->pc = 0x43D780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D780u;
        // 0x43d784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D788u;
}
