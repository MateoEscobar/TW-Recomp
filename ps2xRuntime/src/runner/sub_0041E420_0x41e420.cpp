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

// Function: sub_0041E420
// Address: 0x41e420 - 0x41e460
void sub_0041E420_0x41e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E420_0x41e420");
#endif

    ctx->pc = 0x41e420u;

    // 0x41e420: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x41e420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41e424: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x41E424u;
    {
        const bool branch_taken_0x41e424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e424) {
            ctx->pc = 0x41E458u;
            goto label_41e458;
        }
    }
    ctx->pc = 0x41E42Cu;
    // 0x41e42c: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x41E42Cu;
    {
        const bool branch_taken_0x41e42c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x41E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E42Cu;
        // 0x41e430: 0x28c20017  slti        $v0, $a2, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e42c) {
            ctx->pc = 0x41E458u;
            goto label_41e458;
        }
    }
    ctx->pc = 0x41E434u;
    // 0x41e434: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41E434u;
    {
        const bool branch_taken_0x41e434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E434u;
        // 0x41e438: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e434) {
            ctx->pc = 0x41E458u;
            goto label_41e458;
        }
    }
    ctx->pc = 0x41E43Cu;
    // 0x41e43c: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x41e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41e440: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x41e440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41e444: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x41e444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41e448: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x41e448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x41e44c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41e450: 0x3e00008  jr          $ra
    ctx->pc = 0x41E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E450u;
        // 0x41e454: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E458u;
label_41e458:
    // 0x41e458: 0x3e00008  jr          $ra
    ctx->pc = 0x41E458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E458u;
        // 0x41e45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E460u;
}
