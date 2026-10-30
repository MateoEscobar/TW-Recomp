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

// Function: sub_004B0440
// Address: 0x4b0440 - 0x4b0470
void sub_004B0440_0x4b0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0440_0x4b0440");
#endif

    ctx->pc = 0x4b0440u;

    // 0x4b0440: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b0440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b0444: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b0444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b0448: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B0448u;
    {
        const bool branch_taken_0x4b0448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0448) {
            ctx->pc = 0x4B044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0448u;
            // 0x4b044c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0460u;
            goto label_4b0460;
        }
    }
    ctx->pc = 0x4B0450u;
    // 0x4b0450: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x4b0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4b0454: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b0454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b0458: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0458u;
        // 0x4b045c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0460u;
label_4b0460:
    // 0x4b0460: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b0460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b0464: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0464u;
        // 0x4b0468: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B046Cu;
    // 0x4b046c: 0x0  nop
    ctx->pc = 0x4b046cu;
    // NOP
    ctx->pc = 0x4b0470u;
}
