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

// Function: sub_00363500
// Address: 0x363500 - 0x363530
void sub_00363500_0x363500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363500_0x363500");
#endif

    switch (ctx->pc) {
        case 0x363514u: goto label_363514;
        case 0x36351cu: goto label_36351c;
        default: break;
    }

    ctx->pc = 0x363500u;

    // 0x363500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36350c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36350Cu;
    SET_GPR_U32(ctx, 31, 0x363514u);
    ctx->pc = 0x363510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36350Cu;
    // 0x363510: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36350Cu, 0x363514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363514u;
label_363514:
    // 0x363514: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x363514u;
    SET_GPR_U32(ctx, 31, 0x36351Cu);
    ctx->pc = 0x363518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363514u;
    // 0x363518: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x363514u, 0x36351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36351Cu;
label_36351c:
    // 0x36351c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363524: 0x3e00008  jr          $ra
    ctx->pc = 0x363524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363524u;
        // 0x363528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36352Cu;
    // 0x36352c: 0x0  nop
    ctx->pc = 0x36352cu;
    // NOP
    ctx->pc = 0x363530u;
}
