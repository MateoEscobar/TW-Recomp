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

// Function: sub_0015D4C8
// Address: 0x15d4c8 - 0x15d4e8
void sub_0015D4C8_0x15d4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D4C8_0x15d4c8");
#endif

    switch (ctx->pc) {
        case 0x15d4dcu: goto label_15d4dc;
        default: break;
    }

    ctx->pc = 0x15d4c8u;

    // 0x15d4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d4cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d4d4: 0xc057520  jal         func_15D480
    ctx->pc = 0x15D4D4u;
    SET_GPR_U32(ctx, 31, 0x15D4DCu);
    ctx->pc = 0x15D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D4D4u;
    // 0x15d4d8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D480u, 0x15D4D4u, 0x15D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D4DCu;
label_15d4dc:
    // 0x15d4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4E0u;
        // 0x15d4e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D4E8u;
}
