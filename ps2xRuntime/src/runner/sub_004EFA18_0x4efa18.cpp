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

// Function: sub_004EFA18
// Address: 0x4efa18 - 0x4efa48
void sub_004EFA18_0x4efa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFA18_0x4efa18");
#endif

    switch (ctx->pc) {
        case 0x4efa3cu: goto label_4efa3c;
        default: break;
    }

    ctx->pc = 0x4efa18u;

    // 0x4efa18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4efa1c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4efa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4efa20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4efa24: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x4efa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x4efa28: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4efa28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4efa2c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EFA2Cu;
    {
        const bool branch_taken_0x4efa2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFA2Cu;
        // 0x4efa30: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efa2c) {
            ctx->pc = 0x4EFA3Cu;
            goto label_4efa3c;
        }
    }
    ctx->pc = 0x4EFA34u;
    // 0x4efa34: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EFA34u;
    SET_GPR_U32(ctx, 31, 0x4EFA3Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EFA34u, 0x4EFA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFA3Cu;
label_4efa3c:
    // 0x4efa3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efa40: 0x3e00008  jr          $ra
    ctx->pc = 0x4EFA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFA40u;
        // 0x4efa44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFA48u;
}
