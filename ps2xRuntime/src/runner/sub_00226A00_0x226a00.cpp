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

// Function: sub_00226A00
// Address: 0x226a00 - 0x226a20
void sub_00226A00_0x226a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226A00_0x226a00");
#endif

    ctx->pc = 0x226a00u;

    // 0x226a00: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x226a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x226a04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226A04u;
    {
        const bool branch_taken_0x226a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A04u;
        // 0x226a08: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a04) {
            ctx->pc = 0x226A14u;
            goto label_226a14;
        }
    }
    ctx->pc = 0x226A0Cu;
    // 0x226a0c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x226a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x226a10: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x226a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_226a14:
    // 0x226a14: 0x3e00008  jr          $ra
    ctx->pc = 0x226A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226A1Cu;
    // 0x226a1c: 0x0  nop
    ctx->pc = 0x226a1cu;
    // NOP
    ctx->pc = 0x226a20u;
}
