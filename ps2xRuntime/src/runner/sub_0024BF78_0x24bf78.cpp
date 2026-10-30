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

// Function: sub_0024BF78
// Address: 0x24bf78 - 0x24bfa0
void sub_0024BF78_0x24bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BF78_0x24bf78");
#endif

    ctx->pc = 0x24bf78u;

    // 0x24bf78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bf7c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BF7Cu;
    {
        const bool branch_taken_0x24bf7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bf7c) {
            ctx->pc = 0x24BF98u;
            goto label_24bf98;
        }
    }
    ctx->pc = 0x24BF84u;
    // 0x24bf84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BF84u;
    {
        const bool branch_taken_0x24bf84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF84u;
        // 0x24bf88: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf84) {
            ctx->pc = 0x24BF98u;
            goto label_24bf98;
        }
    }
    ctx->pc = 0x24BF8Cu;
    // 0x24bf8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24bf90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bf94: 0xac627310  sw          $v0, 0x7310($v1)
    ctx->pc = 0x24bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29456), GPR_U32(ctx, 2));
label_24bf98:
    // 0x24bf98: 0x3e00008  jr          $ra
    ctx->pc = 0x24BF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BFA0u;
}
