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

// Function: sub_00292008
// Address: 0x292008 - 0x292048
void sub_00292008_0x292008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292008_0x292008");
#endif

    ctx->pc = 0x292008u;

    // 0x292008: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x292008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29200c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x29200cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x292010: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x292010u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x292014: 0x8ca30a94  lw          $v1, 0xA94($a1)
    ctx->pc = 0x292014u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510A94u));
    // 0x292018: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x292018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x29201c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x29201cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292020: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x292020u;
    {
        const bool branch_taken_0x292020 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x292020) {
            ctx->pc = 0x292024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292020u;
            // 0x292024: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292028u;
            goto label_292028;
        }
    }
    ctx->pc = 0x292028u;
label_292028:
    // 0x292028: 0x28631f41  slti        $v1, $v1, 0x1F41
    ctx->pc = 0x292028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8001) ? 1 : 0);
    // 0x29202c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29202Cu;
    {
        const bool branch_taken_0x29202c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29202c) {
            ctx->pc = 0x292030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29202Cu;
            // 0x292030: 0xaca20a94  sw          $v0, 0xA94($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2708), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29203Cu;
            goto label_29203c;
        }
    }
    ctx->pc = 0x292034u;
    // 0x292034: 0x3e00008  jr          $ra
    ctx->pc = 0x292034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292034u;
        // 0x292038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29203Cu;
label_29203c:
    // 0x29203c: 0x3e00008  jr          $ra
    ctx->pc = 0x29203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29203Cu;
        // 0x292040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292044u;
    // 0x292044: 0x0  nop
    ctx->pc = 0x292044u;
    // NOP
    ctx->pc = 0x292048u;
}
