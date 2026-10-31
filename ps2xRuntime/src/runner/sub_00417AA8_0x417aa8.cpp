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

// Function: sub_00417AA8
// Address: 0x417aa8 - 0x417ad0
void sub_00417AA8_0x417aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417AA8_0x417aa8");
#endif

    ctx->pc = 0x417aa8u;

    // 0x417aa8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x417aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x417aac: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x417AACu;
    {
        const bool branch_taken_0x417aac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x417aac) {
            ctx->pc = 0x417AC8u;
            goto label_417ac8;
        }
    }
    ctx->pc = 0x417AB4u;
    // 0x417ab4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x417AB4u;
    {
        const bool branch_taken_0x417ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x417AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417AB4u;
        // 0x417ab8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417ab4) {
            ctx->pc = 0x417AC8u;
            goto label_417ac8;
        }
    }
    ctx->pc = 0x417ABCu;
    // 0x417abc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x417abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x417ac0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x417ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x417ac4: 0xac83d8f0  sw          $v1, -0x2710($a0)
    ctx->pc = 0x417ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6FD8F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FD8F0u, _value); } while (0);
label_417ac8:
    // 0x417ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x417AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417AD0u;
}
