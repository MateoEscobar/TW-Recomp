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

// Function: sub_00160DB0
// Address: 0x160db0 - 0x160dd8
void sub_00160DB0_0x160db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160DB0_0x160db0");
#endif

    ctx->pc = 0x160db0u;

    // 0x160db0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x160db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x160db4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160DB4u;
    {
        const bool branch_taken_0x160db4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x160db4) {
            ctx->pc = 0x160DD0u;
            goto label_160dd0;
        }
    }
    ctx->pc = 0x160DBCu;
    // 0x160dbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160DBCu;
    {
        const bool branch_taken_0x160dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DBCu;
        // 0x160dc0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dbc) {
            ctx->pc = 0x160DD0u;
            goto label_160dd0;
        }
    }
    ctx->pc = 0x160DC4u;
    // 0x160dc4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x160dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x160dc8: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x160dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
    // 0x160dcc: 0xac836d80  sw          $v1, 0x6D80($a0)
    ctx->pc = 0x160dccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E6D80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E6D80u, _value); } while (0);
label_160dd0:
    // 0x160dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x160DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160DD8u;
}
