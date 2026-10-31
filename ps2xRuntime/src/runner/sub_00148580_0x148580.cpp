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

// Function: sub_00148580
// Address: 0x148580 - 0x1485a8
void sub_00148580_0x148580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148580_0x148580");
#endif

    ctx->pc = 0x148580u;

    // 0x148580: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x148580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x148584: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148584u;
    {
        const bool branch_taken_0x148584 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x148584) {
            ctx->pc = 0x1485A0u;
            goto label_1485a0;
        }
    }
    ctx->pc = 0x14858Cu;
    // 0x14858c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14858Cu;
    {
        const bool branch_taken_0x14858c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14858Cu;
        // 0x148590: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14858c) {
            ctx->pc = 0x1485A0u;
            goto label_1485a0;
        }
    }
    ctx->pc = 0x148594u;
    // 0x148594: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x148594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x148598: 0x24427c80  addiu       $v0, $v0, 0x7C80
    ctx->pc = 0x148598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31872));
    // 0x14859c: 0xac62e160  sw          $v0, -0x1EA0($v1)
    ctx->pc = 0x14859cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DE160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DE160u, _value); } while (0);
label_1485a0:
    // 0x1485a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1485A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1485A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1485A8u;
}
