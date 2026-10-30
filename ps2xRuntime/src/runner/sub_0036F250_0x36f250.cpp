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

// Function: sub_0036F250
// Address: 0x36f250 - 0x36f280
void sub_0036F250_0x36f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F250_0x36f250");
#endif

    switch (ctx->pc) {
        case 0x36f264u: goto label_36f264;
        case 0x36f26cu: goto label_36f26c;
        default: break;
    }

    ctx->pc = 0x36f250u;

    // 0x36f250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f25c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36F25Cu;
    SET_GPR_U32(ctx, 31, 0x36F264u);
    ctx->pc = 0x36F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F25Cu;
    // 0x36f260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36F25Cu, 0x36F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F264u;
label_36f264:
    // 0x36f264: 0xc06d1d0  jal         func_1B4740
    ctx->pc = 0x36F264u;
    SET_GPR_U32(ctx, 31, 0x36F26Cu);
    ctx->pc = 0x36F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F264u;
    // 0x36f268: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4740u, 0x36F264u, 0x36F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F26Cu;
label_36f26c:
    // 0x36f26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f274: 0x3e00008  jr          $ra
    ctx->pc = 0x36F274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F274u;
        // 0x36f278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F27Cu;
    // 0x36f27c: 0x0  nop
    ctx->pc = 0x36f27cu;
    // NOP
    ctx->pc = 0x36f280u;
}
