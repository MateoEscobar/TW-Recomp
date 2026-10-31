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

// Function: sub_001B3E78
// Address: 0x1b3e78 - 0x1b3ea8
void sub_001B3E78_0x1b3e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3E78_0x1b3e78");
#endif

    switch (ctx->pc) {
        case 0x1b3e9cu: goto label_1b3e9c;
        default: break;
    }

    ctx->pc = 0x1b3e78u;

    // 0x1b3e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3e7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b3e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b3e80: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3E80u;
    {
        const bool branch_taken_0x1b3e80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E80u;
        // 0x1b3e84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e80) {
            ctx->pc = 0x1B3E9Cu;
            goto label_1b3e9c;
        }
    }
    ctx->pc = 0x1B3E88u;
    // 0x1b3e88: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3E88u;
    {
        const bool branch_taken_0x1b3e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E88u;
        // 0x1b3e8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e88) {
            ctx->pc = 0x1B3EA0u;
            goto label_1b3ea0;
        }
    }
    ctx->pc = 0x1B3E90u;
    // 0x1b3e90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b3e94: 0xc06b3b8  jal         func_1ACEE0
    ctx->pc = 0x1B3E94u;
    SET_GPR_U32(ctx, 31, 0x1B3E9Cu);
    ctx->pc = 0x1B3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E94u;
    // 0x1b3e98: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACEE0u, 0x1B3E94u, 0x1B3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E9Cu;
label_1b3e9c:
    // 0x1b3e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3ea0:
    // 0x1b3ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EA0u;
        // 0x1b3ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3EA8u;
}
