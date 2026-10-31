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

// Function: sub_003E29C8
// Address: 0x3e29c8 - 0x3e29e8
void sub_003E29C8_0x3e29c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E29C8_0x3e29c8");
#endif

    switch (ctx->pc) {
        case 0x3e29dcu: goto label_3e29dc;
        default: break;
    }

    ctx->pc = 0x3e29c8u;

    // 0x3e29c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e29c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e29cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e29d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e29d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e29d4: 0xc0f8872  jal         func_3E21C8
    ctx->pc = 0x3E29D4u;
    SET_GPR_U32(ctx, 31, 0x3E29DCu);
    ctx->pc = 0x3E29D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E29D4u;
    // 0x3e29d8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E21C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E21C8u, 0x3E29D4u, 0x3E29DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E29DCu;
label_3e29dc:
    // 0x3e29dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e29dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e29e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E29E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E29E0u;
        // 0x3e29e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E29E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E29E8u;
}
