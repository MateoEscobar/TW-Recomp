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

// Function: sub_0015FE30
// Address: 0x15fe30 - 0x15fe50
void sub_0015FE30_0x15fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FE30_0x15fe30");
#endif

    switch (ctx->pc) {
        case 0x15fe44u: goto label_15fe44;
        default: break;
    }

    ctx->pc = 0x15fe30u;

    // 0x15fe30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fe34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fe38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fe3c: 0xc057f78  jal         func_15FDE0
    ctx->pc = 0x15FE3Cu;
    SET_GPR_U32(ctx, 31, 0x15FE44u);
    ctx->pc = 0x15FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE3Cu;
    // 0x15fe40: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDE0u, 0x15FE3Cu, 0x15FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE44u;
label_15fe44:
    // 0x15fe44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15fe44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fe48: 0x3e00008  jr          $ra
    ctx->pc = 0x15FE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE48u;
        // 0x15fe4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FE50u;
}
