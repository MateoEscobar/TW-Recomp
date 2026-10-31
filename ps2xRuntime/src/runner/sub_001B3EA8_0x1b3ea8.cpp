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

// Function: sub_001B3EA8
// Address: 0x1b3ea8 - 0x1b3ec8
void sub_001B3EA8_0x1b3ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3EA8_0x1b3ea8");
#endif

    switch (ctx->pc) {
        case 0x1b3ebcu: goto label_1b3ebc;
        default: break;
    }

    ctx->pc = 0x1b3ea8u;

    // 0x1b3ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3eac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3eb4: 0xc06cf9e  jal         func_1B3E78
    ctx->pc = 0x1B3EB4u;
    SET_GPR_U32(ctx, 31, 0x1B3EBCu);
    ctx->pc = 0x1B3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EB4u;
    // 0x1b3eb8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E78u, 0x1B3EB4u, 0x1B3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EBCu;
label_1b3ebc:
    // 0x1b3ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EC0u;
        // 0x1b3ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3EC8u;
}
