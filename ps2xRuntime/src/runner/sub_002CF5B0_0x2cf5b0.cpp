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

// Function: sub_002CF5B0
// Address: 0x2cf5b0 - 0x2cf5d0
void sub_002CF5B0_0x2cf5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF5B0_0x2cf5b0");
#endif

    ctx->pc = 0x2cf5b0u;

    // 0x2cf5b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf5b4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2cf5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x2cf5b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf5bc: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2cf5bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2cf5c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2cf5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2cf5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5C4u;
        // 0x2cf5c8: 0xfc8200e0  sd          $v0, 0xE0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF5CCu;
    // 0x2cf5cc: 0x0  nop
    ctx->pc = 0x2cf5ccu;
    // NOP
    ctx->pc = 0x2cf5d0u;
}
