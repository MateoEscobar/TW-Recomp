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

// Function: sub_001B3F30
// Address: 0x1b3f30 - 0x1b3f58
void sub_001B3F30_0x1b3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3F30_0x1b3f30");
#endif

    switch (ctx->pc) {
        case 0x1b3f4cu: goto label_1b3f4c;
        default: break;
    }

    ctx->pc = 0x1b3f30u;

    // 0x1b3f30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b3f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3f38: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b3f3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3f44: 0xc06c838  jal         func_1B20E0
    ctx->pc = 0x1B3F44u;
    SET_GPR_U32(ctx, 31, 0x1B3F4Cu);
    ctx->pc = 0x1B3F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F44u;
    // 0x1b3f48: 0x24440840  addiu       $a0, $v0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20E0u, 0x1B3F44u, 0x1B3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F4Cu;
label_1b3f4c:
    // 0x1b3f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F50u;
        // 0x1b3f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3F58u;
}
