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

// Function: sub_00419A68
// Address: 0x419a68 - 0x419a80
void sub_00419A68_0x419a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419A68_0x419a68");
#endif

    ctx->pc = 0x419a68u;

    // 0x419a68: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x419a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x419a6c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x419A6Cu;
    {
        const bool branch_taken_0x419a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419a6c) {
            ctx->pc = 0x419A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419A6Cu;
            // 0x419a70: 0xa4850222  sh          $a1, 0x222($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419A74u;
            goto label_419a74;
        }
    }
    ctx->pc = 0x419A74u;
label_419a74:
    // 0x419a74: 0x3e00008  jr          $ra
    ctx->pc = 0x419A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419A7Cu;
    // 0x419a7c: 0x0  nop
    ctx->pc = 0x419a7cu;
    // NOP
    ctx->pc = 0x419a80u;
}
