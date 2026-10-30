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

// Function: sub_00345D38
// Address: 0x345d38 - 0x345d58
void sub_00345D38_0x345d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345D38_0x345d38");
#endif

    switch (ctx->pc) {
        case 0x345d4cu: goto label_345d4c;
        default: break;
    }

    ctx->pc = 0x345d38u;

    // 0x345d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345d3c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x345d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345d44: 0xc0d1bee  jal         func_346FB8
    ctx->pc = 0x345D44u;
    SET_GPR_U32(ctx, 31, 0x345D4Cu);
    ctx->pc = 0x345D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D44u;
    // 0x345d48: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FB8u, 0x345D44u, 0x345D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D4Cu;
label_345d4c:
    // 0x345d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345d50: 0x3e00008  jr          $ra
    ctx->pc = 0x345D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D50u;
        // 0x345d54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345D58u;
}
