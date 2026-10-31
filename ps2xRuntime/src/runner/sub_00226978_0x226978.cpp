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

// Function: sub_00226978
// Address: 0x226978 - 0x226998
void sub_00226978_0x226978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226978_0x226978");
#endif

    ctx->pc = 0x226978u;

    // 0x226978: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x226978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x22697c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22697Cu;
    {
        const bool branch_taken_0x22697c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22697Cu;
        // 0x226980: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22697c) {
            ctx->pc = 0x22698Cu;
            goto label_22698c;
        }
    }
    ctx->pc = 0x226984u;
    // 0x226984: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x226984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x226988: 0xac8300c8  sw          $v1, 0xC8($a0)
    ctx->pc = 0x226988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
label_22698c:
    // 0x22698c: 0x3e00008  jr          $ra
    ctx->pc = 0x22698Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22698Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226994u;
    // 0x226994: 0x0  nop
    ctx->pc = 0x226994u;
    // NOP
    ctx->pc = 0x226998u;
}
