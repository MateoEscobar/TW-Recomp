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

// Function: sub_0041E348
// Address: 0x41e348 - 0x41e370
void sub_0041E348_0x41e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E348_0x41e348");
#endif

    ctx->pc = 0x41e348u;

    // 0x41e348: 0x2ca20017  sltiu       $v0, $a1, 0x17
    ctx->pc = 0x41e348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x41e34c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41E34Cu;
    {
        const bool branch_taken_0x41e34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E34Cu;
        // 0x41e350: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e34c) {
            ctx->pc = 0x41E35Cu;
            goto label_41e35c;
        }
    }
    ctx->pc = 0x41E354u;
    // 0x41e354: 0x3e00008  jr          $ra
    ctx->pc = 0x41E354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E354u;
        // 0x41e358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E35Cu;
label_41e35c:
    // 0x41e35c: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x41e35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41e360: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x41e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x41e364: 0x3e00008  jr          $ra
    ctx->pc = 0x41E364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E364u;
        // 0x41e368: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E36Cu;
    // 0x41e36c: 0x0  nop
    ctx->pc = 0x41e36cu;
    // NOP
    ctx->pc = 0x41e370u;
}
