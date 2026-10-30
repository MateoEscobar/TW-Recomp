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

// Function: sub_00345D18
// Address: 0x345d18 - 0x345d38
void sub_00345D18_0x345d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345D18_0x345d18");
#endif

    switch (ctx->pc) {
        case 0x345d2cu: goto label_345d2c;
        default: break;
    }

    ctx->pc = 0x345d18u;

    // 0x345d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345d1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x345d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345d24: 0xc0d1c52  jal         func_347148
    ctx->pc = 0x345D24u;
    SET_GPR_U32(ctx, 31, 0x345D2Cu);
    ctx->pc = 0x345D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D24u;
    // 0x345d28: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347148u, 0x345D24u, 0x345D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D2Cu;
label_345d2c:
    // 0x345d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345d30: 0x3e00008  jr          $ra
    ctx->pc = 0x345D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D30u;
        // 0x345d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345D38u;
}
