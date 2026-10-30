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

// Function: sub_001828C0
// Address: 0x1828c0 - 0x1828e0
void sub_001828C0_0x1828c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001828C0_0x1828c0");
#endif

    ctx->pc = 0x1828c0u;

    // 0x1828c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1828c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1828c4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1828c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1828c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1828c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1828cc: 0x8c821044  lw          $v0, 0x1044($a0)
    ctx->pc = 0x1828ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x1828d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1828D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828D0u;
        // 0x1828d4: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1828D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1828D8u;
    // 0x1828d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1828d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1828dc: 0x0  nop
    ctx->pc = 0x1828dcu;
    // NOP
    ctx->pc = 0x1828e0u;
}
