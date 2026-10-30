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

// Function: sub_004DB598
// Address: 0x4db598 - 0x4db5b0
void sub_004DB598_0x4db598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB598_0x4db598");
#endif

    ctx->pc = 0x4db598u;

    // 0x4db598: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4db598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4db59c: 0x8c62b1cc  lw          $v0, -0x4E34($v1)
    ctx->pc = 0x4db59cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B1CCu));
    // 0x4db5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB5A0u;
        // 0x4db5a4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB5A8u;
    // 0x4db5a8: 0x7c8201e0  sq          $v0, 0x1E0($a0)
    ctx->pc = 0x4db5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 480), GPR_VEC(ctx, 2));
    // 0x4db5ac: 0x0  nop
    ctx->pc = 0x4db5acu;
    // NOP
    ctx->pc = 0x4db5b0u;
}
