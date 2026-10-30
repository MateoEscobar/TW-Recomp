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

// Function: sub_002A4AA0
// Address: 0x2a4aa0 - 0x2a4ac8
void sub_002A4AA0_0x2a4aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4AA0_0x2a4aa0");
#endif

    ctx->pc = 0x2a4aa0u;

    // 0x2a4aa0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a4aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4aa4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4AA4u;
    {
        const bool branch_taken_0x2a4aa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4aa4) {
            ctx->pc = 0x2A4AC0u;
            goto label_2a4ac0;
        }
    }
    ctx->pc = 0x2A4AACu;
    // 0x2a4aac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4AACu;
    {
        const bool branch_taken_0x2a4aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4AACu;
        // 0x2a4ab0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4aac) {
            ctx->pc = 0x2A4AC0u;
            goto label_2a4ac0;
        }
    }
    ctx->pc = 0x2A4AB4u;
    // 0x2a4ab4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a4ab8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a4ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a4abc: 0xac6293f8  sw          $v0, -0x6C08($v1)
    ctx->pc = 0x2a4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939640), GPR_U32(ctx, 2));
label_2a4ac0:
    // 0x2a4ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4AC8u;
}
