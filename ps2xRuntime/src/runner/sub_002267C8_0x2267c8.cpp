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

// Function: sub_002267C8
// Address: 0x2267c8 - 0x2267e8
void sub_002267C8_0x2267c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267C8_0x2267c8");
#endif

    ctx->pc = 0x2267c8u;

    // 0x2267c8: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x2267c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2267cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2267CCu;
    {
        const bool branch_taken_0x2267cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267CCu;
        // 0x2267d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267cc) {
            ctx->pc = 0x2267DCu;
            goto label_2267dc;
        }
    }
    ctx->pc = 0x2267D4u;
    // 0x2267d4: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2267d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2267d8: 0xac8300cc  sw          $v1, 0xCC($a0)
    ctx->pc = 0x2267d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 3));
label_2267dc:
    // 0x2267dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2267DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2267DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2267E4u;
    // 0x2267e4: 0x0  nop
    ctx->pc = 0x2267e4u;
    // NOP
    ctx->pc = 0x2267e8u;
}
