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

// Function: sub_00136040
// Address: 0x136040 - 0x136068
void sub_00136040_0x136040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136040_0x136040");
#endif

    ctx->pc = 0x136040u;

    // 0x136040: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x136040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x136044: 0x8c62b27c  lw          $v0, -0x4D84($v1)
    ctx->pc = 0x136044u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B27Cu));
    // 0x136048: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136048u;
    {
        const bool branch_taken_0x136048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x13604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136048u;
        // 0x13604c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136048) {
            ctx->pc = 0x136060u;
            goto label_136060;
        }
    }
    ctx->pc = 0x136050u;
    // 0x136050: 0x8c62b280  lw          $v0, -0x4D80($v1)
    ctx->pc = 0x136050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x136054: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x136054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x136058: 0x3e00008  jr          $ra
    ctx->pc = 0x136058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136058u;
        // 0x13605c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136060u;
label_136060:
    // 0x136060: 0x3e00008  jr          $ra
    ctx->pc = 0x136060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136060u;
        // 0x136064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136068u;
}
