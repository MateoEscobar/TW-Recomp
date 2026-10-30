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

// Function: sub_001448C8
// Address: 0x1448c8 - 0x1448f0
void sub_001448C8_0x1448c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001448C8_0x1448c8");
#endif

    ctx->pc = 0x1448c8u;

    // 0x1448c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1448c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1448cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1448ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1448d0: 0x8c82b6f8  lw          $v0, -0x4908($a0)
    ctx->pc = 0x1448d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B6F8u));
    // 0x1448d4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1448D4u;
    {
        const bool branch_taken_0x1448d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1448D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448D4u;
        // 0x1448d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448d4) {
            ctx->pc = 0x1448E4u;
            goto label_1448e4;
        }
    }
    ctx->pc = 0x1448DCu;
    // 0x1448dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1448DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1448E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448DCu;
        // 0x1448e0: 0xac83b6f8  sw          $v1, -0x4908($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294948600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1448E4u;
label_1448e4:
    // 0x1448e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1448E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1448E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448E4u;
        // 0x1448e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1448ECu;
    // 0x1448ec: 0x0  nop
    ctx->pc = 0x1448ecu;
    // NOP
    ctx->pc = 0x1448f0u;
}
